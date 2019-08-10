/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 17:15:41 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 00:08:49 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "c00.h"
#include "c01.h"
#include "c02.h"
#include "c03.h"
#include "c04.h"
#include "c05.h"

int		main(void)
{
	write(1, "======= c00 =======\n", 20);
	write(1, "ex00: testing ft_putchar('c') and got: ", 39);
	ft_putchar('c');	
	write(1, "\n", 1);
	write(1, "ex01: testing ft_print_alphabet() and got: ", 43);
	ft_print_alphabet();	
	write(1, "\n", 1);
	write(1, "ex02: testing ft_print_reverse_alphabet() and got: ", 51);
	ft_print_reverse_alphabet();	
	write(1, "\n", 1);
	write(1, "ex03: testing ft_print_numbers() and got: ", 42);
	ft_print_numbers();	
	write(1, "\n", 1);
	write(1, "ex04: testing ft_is_negative(42) and got: ", 42);
	ft_is_negative(42);	
	write(1, "\n", 1);
	write(1, "ex04: testing ft_is_negative(-42) and got: ", 43);
	ft_is_negative(-42);	
	write(1, "\n", 1);
	write(1, "ex05: testing ft_print_comb() and got: ", 39);
	ft_print_comb();	
	write(1, "\n", 1);
	write(1, "ex06: testing ft_print_comb2() and got: ", 40);
	ft_print_comb2();	
	write(1, "\n", 1);
	write(1, "ex07: testing ft_putnbr(1) and got: ", 36);
	ft_putnbr(1);	
	write(1, "\n", 1);
	write(1, "ex07: testing ft_putnbr(42) and got: ", 37);
	ft_putnbr(42);	
	write(1, "\n", 1);
	write(1, "ex07: testing ft_putnbr(-42) and got: ", 38);
	ft_putnbr(-42);	
	write(1, "\n", 1);
	write(1, "ex07: testing ft_putnbr(2147483647) and got: ", 45);
	ft_putnbr(2147483647);	
	write(1, "\n", 1);
	write(1, "ex08: testing ft_print_combn(3) and got: ", 41);
	ft_print_combn(3);	
	write(1, "\n", 1);
	
	write(1, "======= c01 =======\n", 20);
	int nb = 0;
	ft_ft(&nb);
	write(1, "ex00: testing ft_ft(int*) expected 42 and got: ", 47);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "ex01: testing ft_ft(int*********) expected 42 and got: ", 55);
	nb = 88;	
	int *ptr1 = &nb;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	ft_ultimate_ft(&ptr8);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "ex02: testing ft_swap(int*, int*) expected 42 84 and got: ", 58);
	int a = 84;
	int b = 42;
	ft_swap(&a, &b);
	ft_putnbr(a);
	write(1, " ", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
	write(1, "ex03: testing ft_div_mod(25, 10, int*, int*) expected 2 5: ", 59);
	int d; int m;
	ft_div_mod(25, 10, &d, &m);
	ft_putnbr(d);
	write(1, " ", 1);
	ft_putnbr(m);
	write(1, "\n", 1);
	write(1, "ex04: testing ft_ultimate_div_mod(int* -> 25, int* -> 10) expected 2 5: ", 72);
	a = 25;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	write(1, " ", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
	write(1, "ex05: testing ft_putstr(char *str) expected Hello World!: ", 58);
	char *str = "Hello World!";
	ft_putstr(str);
	write(1, "\n", 1);
	write(1, "ex06: testing ft_strlen(\"Hello World!\") expected 12: ", 53);
	ft_putnbr(ft_strlen(str));
	write(1, "\n", 1);
	write(1, "ex07: testing ft_rev_int_tab({9, 8, 7, 6, 5}) expected 56789: ", 62);
	int tab[5] = {9, 8, 7, 6, 5};
	ft_rev_int_tab(tab, 5);
	d = 0;
	while (d < 5)
		ft_putnbr(tab[d++]);
	write(1, "\n", 1);
	write(1, "ex08: testing ft_sort_int_tab({9, 8, 7, 6, 5}) expected 56789: ", 63);
	int tab2[5] = {9, 8, 7, 6, 5};
	ft_sort_int_tab(tab2, 5);
	d = 0;
	while (d < 5)
		ft_putnbr(tab[d++]);
	write(1, "\n", 1);

	write(1, "======= c02 =======\n", 20);
	char new_str[12];
	char *new = ft_strcpy(new_str, str);
	write(1, "ex00: testing ft_strcpy(char *dest, char *src) expected Hello World!: ", 70);
	ft_putstr(new);
	write(1, "\n", 1);
	write(1, "ex01: testing ft_strncpy(char *dest, char *src) expected Hello: ", 64);
	char toto[] = "aaaaa";
	new = ft_strncpy(toto, str, 5);
	ft_putstr(new);
	write(1, "\n", 1);
	write(1, "ex02: testing ft_str_is_alpha(\"adw+\") expected 0: ", 50);
	char tot2o[] = "adw+";
	ft_putnbr(ft_str_is_alpha(tot2o));
	write(1, "\n", 1);
	write(1, "ex02: testing ft_str_is_alpha(\"adw\") expected 1: ", 49);
	char tot3o[] = "adw";
	ft_putnbr(ft_str_is_alpha(tot3o));
	write(1, "\n", 1);
	write(1, "ex03: testing ft_str_is_numeric(\"000+\") expected 0: ", 52);
	char tot4o[] = "000+";
	ft_putnbr(ft_str_is_numeric(tot4o));
	write(1, "\n", 1);
	write(1, "ex03: testing ft_str_is_numeric(\"0125489865970541\") expected 1: ", 64);	
	char tot5o[] = "0125489865970541";
	ft_putnbr(ft_str_is_numeric(tot5o));
	write(1, "\n", 1);
	write(1, "ex04: testing ft_str_is_lowercase(\"aaaaaaaaB\") expected 0: ", 59);	
	char tot6o[] = "aaaaaaaaaaB";
	ft_putnbr(ft_str_is_lowercase(tot6o));
	write(1, "\n", 1);
	write(1, "ex04: testing ft_str_is_lowercase(\"abcdefghijklmnopqrstuvwxyz\") expected 1: ", 76);	
	char tot7o[] = "abcdefghijklmnopqrstuvwxyz";
	ft_putnbr(ft_str_is_lowercase(tot7o));
	write(1, "\n", 1);
	write(1, "ex05: testing ft_str_is_uppercase(\"aaaaaaaaB\") expected 0: ", 59);	
	ft_putnbr(ft_str_is_uppercase(tot6o));
	write(1, "\n", 1);
	write(1, "ex05: testing ft_str_is_uppercase(ft_strupcase(\"abcdefghijklmnopqrstuvwxyz\")) expected 1: ", 90);	
	ft_putnbr(ft_str_is_uppercase(ft_strupcase(tot7o)));
	write(1, "\n", 1);
	write(1, "ex06: testing ft_str_is_printable(\"Hello World!\") expected 1: ", 62);	
	ft_putnbr(ft_str_is_printable(str));
	write(1, "\n", 1);
	write(1, "ex06: testing ft_str_is_printable(\"Hello World!\") expected 1: ", 62);	
	ft_putnbr(ft_str_is_printable(str));
	write(1, "\n", 1);
	write(1, "ex06: testing ft_str_is_printable(\"H\\0x7fllo World!\") expected 0: ", 66);	
	char totoo[] = "Hello World!";
	totoo[1] = 127;
	ft_putnbr(ft_str_is_printable(totoo));
	write(1, "\n", 1);
	write(1, "ex07: testing ft_strupcase(\"H\\0x7fllo World!\") expected H LLO WORLD!: ", 71);	
	ft_putstr(ft_strupcase(totoo));
	write(1, "\n", 1);
	write(1, "ex08: testing ft_strlowcase(\"H\\0x7fllo World!\") expected h llo world!: ", 72);	
	ft_putstr(ft_strlowcase(totoo));
	write(1, "\n", 1);
	write(1, "ex09: testing ft_strcapitalize(\"salut, coMMent tU vas ? 42mots quarante-deux; cinquante+et+un\") expected Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un: ", 168);	
	char str6[] = "salut, coMMent tU vas ? 42mots quarante-deux; cinquante+et+un";
	ft_putstr(ft_strcapitalize(str6));
	write(1, "\n", 1);
	write(1, "ex09: testing ft_strlcpy(char*, char* -> Hello World, 6) expected 5Hello: ", 74);	
	char str7[] = "Hello World";
	char dst[6];
	ft_putnbr(ft_strlcpy(dst, str7, 6));
	ft_putstr(dst);
	write(1, "\n", 1);
	write(1, "ex10: testing ft_putstr_non_printable(H\\127o) expected H\\7fo: ", 62);	
	char str8[] = "H o";
	str8[1] = 127;
	ft_putstr_non_printable(str8);
	write(1, "\n", 1);
	write(1, "ex11: testing ft_print_memory():\n", 33);
	char addr[] = "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 jwijdawohd awdhawidj opawdjawdaw[dawj";
	ft_print_memory(addr, 250);
	write(1, "\n", 1);

	write(1, "======= c03 =======\n", 20);
	char *s1 = "avion";	
	char *s2 = "bonjour";
	printf("ex00: ft_strcmp\nexpected -1: %i\n", ft_strcmp(s1, s2));
	char *s3 = "a";
	char *s4 = "hssssss";
	printf("expected 7: %i\n", ft_strcmp(s4, s3));
	char *s5 = "bonjour";
	printf("expected -1: %i\n", ft_strcmp(s1, s5));
	char *s11 = "aaaaa5";
	char *s12 = "aaaaa8";
	printf("ex01: ft_strncmp expected 0: %i\n", ft_strncmp(s11, s12, 5));
	printf("expected -1: %i\n", ft_strncmp(s11, s12, 6));
	printf("expected -3: %i\n", ft_strncmp(s11, s12, 6));
	char dest[] = "Hello ";
	char src[] = "World";
	printf("ex02: ft_strcat expected Hello World: %s\n", ft_strcat(dest, src));
	char dest2[] = "Hello ";
	char src2[] = "World";
	printf("ex03: ft_strncat expected Hello Wor: %s\n", ft_strncat(dest2, src2, 3));
	char toto1[] = "Lolilo";
	char needle[] = "il";
	
	char *found = ft_strstr(toto1, needle);
	found[0] = 'O';

	printf("ex04: ft_strstr expected LolOlo: %s\n", toto1);
	char toto88[33] = "pomme de terre";
	char toto99[] = "patate";
	printf("ex05: expected strlcat:  %lu %s\n", strlcat(toto88, toto99, 20), toto88);
	char toto66[33] = "pomme de terre";
	char toto77[] = "patate";
	printf("ex05: ft_strlcat:  %i %s\n", ft_strlcat(toto66, toto77, 20), toto66);

	printf("======= c03 =======\n");
	printf("ex00: ft_strlen: %i %s\n", ft_strlen(toto77), toto77);
	int aq = atoi("4686aaaaa");
	printf("ex03: atoi expected:  %i\n", aq);
	int bq = ft_atoi("4686aaaaa");
	printf("ex03: ft_atoi:  %i\n", bq);
	printf("ex04: ft_putnbr_base: expected -80000000 \n");
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	printf("\nex05: ft_atoi_base: expected -2147483648 \n");
	ft_putnbr(ft_atoi_base("-80000000", "0123456789ABCDEF"));
	
	printf("======= c04 =======\n");
	printf("ex00: ft_iterative_factorial(6) : %i\n", ft_iterative_factorial(6));
	printf("ex01: ft_reccursive_factorial(6) : %i\n", ft_reccursive_factorial(6));
	printf("ex02: ft_iterative_power(-3, 3) %i\n", ft_iterative_power(-3,3));
//	printf("ex03: ft_iterative_power(-3, 3) %i\n", ft_reccursive_power(3,3));
	ft_reccursive_power(0, 0);
	printf("ft_ten_queens_puzzle() %i\n", ft_ten_queens_puzzle());
}
