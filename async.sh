#!/bin/sh

#                                               #
#   ASYNC UTILITY FOR SHELL SCRIPTS @LYON1      #
#                                               #
RETURN="";#######################################
KILLED_ID=();
FAIL=0;

# Run the passed callback asynchronous and return its generated pid
function async() {
    # run the given function using its param
    "$@" <&0 &
    # return pid
    RETURN=$!;
};

# Pause the current thread until the given callback id finish
function await() {
    FAIL=0;
    RETURN=0;
    if [[ ! " ${KILLED_ID[@]} " =~ " ${1} " ]]; then
        echo "Now awaiting $1 ...";
        wait $1 || let "FAIL+=1";
    fi;
    if [[ ! "$FAIL" == "0" ]]; then
        RETURN=1;
    fi;
};

# Wait for all jobs to finish
function awaitAll() {
    FAIL=0;
    RETURN=0;
    for job in `jobs -p`; do
        if [[ ! " ${KILLED_ID[@]} " =~ " ${job} " ]]; then
            echo "Now awaiting ${job} ...";
            wait ${job} || let "FAIL+=1";
        fi;
    done;
    if [[ ! "$FAIL" == "0" ]]; then
        RETURN=1;
    fi;
}

# Kill a job using its id
function killJob() {
    RETURN=0;
    if ps -p $1 > /dev/null; then
        FAIL=0;
        printf "Now killing ${1} ... \n";
        kill $1 || let "FAIL+=1";
        KILLED_ID=("${1} ${KILLED_ID}");
        if [[ ! "${FAIL}" == "0" ]]; then
            RETURN=1;
        fi;
    fi;
    #else the process to kill shutdown already
}

# Kill all the jobs
function killAll() {
    RETURN=0;
    N_FAIL=0
    for job in `jobs -p`; do
        killJob job;
        let "N_FAIL+=RETURN";
        KILLED_ID=("${job} ${KILLED_ID}");
    done;
    if [[ ! "$N_FAIL" == "0" ]]; then
        RETURN=1;
    fi;
}
