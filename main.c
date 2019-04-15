/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lportay <lportay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 10:30:20 by lportay           #+#    #+#             */
/*   Updated: 2019/04/15 11:11:02 by lportay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <signal.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include "libasm.h"

/*
** This is the testing part for libASM project
*/
void	test_isalpha(void)
{
	ft_puts("==tests ft_isalpha==");
	assert(isalpha('A') == ft_isalpha('A'));
	write(1, ".", 1);
	assert(isalpha('Z') == ft_isalpha('Z'));
	write(1, ".", 1);
	assert(isalpha('A' - 1) == ft_isalpha('A' - 1));
	write(1, ".", 1);
	assert(isalpha('Z' + 1) == ft_isalpha('Z' + 1));
	write(1, ".", 1);
	assert(isalpha('a') == ft_isalpha('a'));
	write(1, ".", 1);
	assert(isalpha('z') == ft_isalpha('z'));
	write(1, ".", 1);
	assert(isalpha('a' - 1) == ft_isalpha('a' - 1));
	write(1, ".", 1);
	assert(isalpha('z' + 1) == ft_isalpha('z' + 1));
	write(1, ".", 1);
	assert(isalpha(255) == ft_isalpha(255));
	write(1, ".", 1);
	ft_puts("");
}

void	test_isdigit(void)
{
	ft_puts("==tests ft_isdigit==");
	assert(isalpha('A') == ft_isalpha('A'));
	write(1, ".", 1);
	assert(isdigit('0') == ft_isdigit('0'));
	write(1, ".", 1);
	assert(isdigit('0' - 1) == ft_isdigit('0' - 1));
	write(1, ".", 1);
	assert(isdigit(0) == ft_isdigit(0));
	write(1, ".", 1);
	assert(isdigit('9') == ft_isdigit('9'));
	write(1, ".", 1);
	assert(isdigit('5') == ft_isdigit('5'));
	write(1, ".", 1);
	assert(isdigit('9' + 1) == ft_isdigit('9' + 1));
	write(1, ".", 1);
	assert(isdigit(INT_MAX) == ft_isdigit(INT_MAX));
	write(1, ".", 1);
	ft_puts("");
}

void	test_isalnum(void)
{
	ft_puts("==tests ft_isalnum==");
	assert(isalnum('0') == ft_isalnum('0'));
	write(1, ".", 1);
	assert(isalnum('0' - 1) == ft_isalnum('0' - 1));
	write(1, ".", 1);
	assert(isalnum('9') == ft_isalnum('9'));
	write(1, ".", 1);
	assert(isalnum('9' + 1) == ft_isalnum('9' + 1));
	write(1, ".", 1);
	assert(isalnum('A') == ft_isalnum('A'));
	write(1, ".", 1);
	assert(isalnum('A' - 1) == ft_isalnum('A' - 1));
	write(1, ".", 1);
	assert(isalnum('Z') == ft_isalnum('Z'));
	write(1, ".", 1);
	assert(isalnum('Z' + 1) == ft_isalnum('Z' + 1));
	write(1, ".", 1);
	assert(isalnum('a') == ft_isalnum('a'));
	write(1, ".", 1);
	assert(isalnum('a' - 1) == ft_isalnum('a' - 1));
	write(1, ".", 1);
	assert(isalnum('z') == ft_isalnum('z'));
	write(1, ".", 1);
	assert(isalnum('z' + 1) == ft_isalnum('z' + 1));
	write(1, ".", 1);
	ft_puts("");
}

void	test_isascii(void)
{
	ft_puts("==tests ft_isascii==");
	assert(isascii(-1) == ft_isascii(-1));
	write(1, ".", 1);
	assert(isascii(0) == ft_isascii(0));
	write(1, ".", 1);
	assert(isascii(127) == ft_isascii(127));
	write(1, ".", 1);
	assert(isascii(128) == ft_isascii(128));
	write(1, ".", 1);
	assert(isascii(129) == ft_isascii(129));
	write(1, ".", 1);
	ft_puts("");
}

void	test_isprint(void)
{
	ft_puts("==tests ft_isprint==");
	assert(isprint(-1) == ft_isprint(-1));
	write(1, ".", 1);
	assert(isprint(0) == ft_isprint(0));
	write(1, ".", 1);
	assert(isprint(' ') == ft_isprint(' '));
	write(1, ".", 1);
	assert(isprint(' ' - 1) == ft_isprint(' ' - 1));
	write(1, ".", 1);
	assert(isprint(127) == ft_isprint(127));
	write(1, ".", 1);
	assert(isprint(128) == ft_isprint(128));
	write(1, ".", 1);
	assert(isprint(126) == ft_isprint(126));
	write(1, ".", 1);
	ft_puts("");
}

void	test_tolower(void)
{
	ft_puts("==tests ft_tolower==");
	assert(tolower(-1) == ft_tolower(-1));
	write(1, ".", 1);
	assert(tolower('A') == ft_tolower('A'));
	write(1, ".", 1);
	assert(tolower('Z') == ft_tolower('Z'));
	write(1, ".", 1);
	assert(tolower('A' - 1) == ft_tolower('A' - 1));
	write(1, ".", 1);
	assert(tolower('Z' + 1) == ft_tolower('Z' + 1));
	write(1, ".", 1);
	ft_puts("");
}

void	test_toupper(void)
{
	ft_puts("==tests ft_toupper==");
	assert(toupper(-1) == ft_toupper(-1));
	write(1, ".", 1);
	assert(toupper('a') == ft_toupper('a'));
	write(1, ".", 1);
	assert(toupper('z') == ft_toupper('z'));
	write(1, ".", 1);
	assert(toupper('a' - 1) == ft_toupper('a' - 1));
	write(1, ".", 1);
	assert(toupper('z' + 1) == ft_toupper('z' + 1));
	write(1, ".", 1);
	ft_puts("");
}

void	test_strlen(void)
{
	ft_puts("==tests ft_strlen==");
	assert(strlen("") == ft_strlen(""));
	write(1, ".", 1);
	assert(strlen(" ") == ft_strlen(" "));
	write(1, ".", 1);
	assert(strlen("Hello") == ft_strlen("Hello"));
	write(1, ".", 1);
	assert(strlen("→ Hello") == ft_strlen("→ Hello"));
	write(1, ".", 1);
	assert(strlen("→ Hello\n") == ft_strlen("→ Hello\n"));
	write(1, ".", 1);
	ft_puts("");
}

void	test_puts(void)
{
	ft_puts("==tests ft_puts==");

	ft_puts("====");
	ft_puts("");
	puts("");

	ft_puts("====");
	ft_puts(NULL);
	puts(NULL);

	ft_puts("====");
	ft_puts("Hello");
	puts("Hello");

	ft_puts("====");
	ft_puts("I'm working now");
	puts("I'm working now");
}

void	test_bzero(void)
{
	char a[] = "123456789";
	char b[] = "123456789";
	char c[] = "123456789";

	ft_puts("==tests ft_bzero==");
	ft_bzero(a, 8);
	assert(memcmp(a, "\0\0\0\0\0\0\0\09", 9) == 0);
	write(1, ".", 1);
	ft_bzero(b, 0);
	assert(memcmp(b, "123456789", 9) == 0);
	write(1, ".", 1);
	ft_bzero(c, 9);
	assert(memcmp(c, "\0\0\0\0\0\0\0\0\0", 9) == 0);
	write(1, ".", 1);
	ft_puts("");
}

void	test_memset(void)
{
	char a[] = "123456789";
	char b[] = "123456789";
	char c[] = "123456789";
	char d[128];
	char e[128];

	ft_puts("==tests ft_memset==");

	ft_memset(a, 'A', 8);
	assert(memcmp(a, "AAAAAAAA9", 9) == 0);
	write(1, ".", 1);

	ft_memset(b, 'B', 0);
	assert(memcmp(b, "123456789", 9) == 0);
	write(1, ".", 1);

	ft_memset(c, 'C', 9);
	assert(memcmp(c, "CCCCCCCCC", 9) == 0);
	write(1, ".", 1);

	memset(d, 'O', 12);
	ft_memset(e, 'O', 12);
	assert(memcmp(d, e, 9) == 0);
	write(1, ".", 1);

	ft_puts("");
}

void	test_strcat(void)
{
	char a[128] = "12345678";
	char b[128] = "9ABCDEF";
	char *c;
	char d[128];

	ft_puts("==tests ft_strcat==");

	c = ft_strcat(a, b);
	assert(a == c);
	assert(strcmp(c, "123456789ABCDEF") == 0);
	write(1, ".", 1);
	bzero(d, 128);
	ft_strcat(d, "");
	ft_strcat(d, "Bon");
	ft_strcat(d, "j");
	ft_strcat(d, "our.");
	ft_strcat(d, "");
	assert(strcmp(d, "Bonjour.") == 0);
	assert(d == ft_strcat(d, ""));
	write(1, ".", 1);


	ft_puts("");
}

void	test_memcpy(void)
{
	char a[128] = "12345678";
	char b[128] = "9ABCDEF";
	char d[128] = "GHIJKL";
	char e[100];
	char f[100];
	char g[100];

	char *c;
	memset(e, 65, 100);
	memset(f, 66, 100);

	ft_puts("==tests ft_memcpy==");
	c = ft_memcpy(a, b, 4);
	assert(a == c);
	assert(strcmp(c, "9ABC5678") == 0);
	write(1, ".", 1);
	c = ft_memcpy(b, d, 0);
	assert(strcmp(c, "9ABCDEF") == 0);
	write(1, ".", 1);
	c = ft_memcpy(b, d, 10);
	assert(strcmp(c, "GHIJKL") == 0);
	write(1, ".", 1);
	ft_memcpy(e, f, 100);
	assert(memcmp(e, f, 100) == 0);
	write(1, ".", 1);

	memcpy(g, "ASDFGHJKL", 12);
	ft_memcpy(e, "ASDFGHJKL", 12);
	assert(memcmp(g, e, 9) == 0);
	write(1, ".", 1);
	puts("");
}

void	test_strdup(void)
{
	char *a, *b, *c;

	ft_puts("==tests ft_strdup==");
	a = ft_strdup("Hello World");
	assert(strcmp(a, "Hello World") == 0);
	free(a);
	write(1, ".", 1);
	b = ft_strdup("");
	assert(strcmp(b, "") == 0);
	free(b);
	write(1, ".", 1);
	c = ft_strdup("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	assert(strcmp(c, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx") == 0);
	free(c);
	write(1, ".", 1);
	puts("");
}

void	test_cat(char *exec)
{
	puts("==tests ft_cat==");
	ft_cat(STDIN_FILENO);
	ft_cat(open(__FILE__, O_RDONLY));
	ft_cat(open(exec, O_RDONLY));
	ft_cat(-42);
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_tolower();
	test_toupper();
	test_strlen();
	test_puts();
	test_bzero();
	test_memset();
	test_strcat();
	test_memcpy();
	test_strdup();
//	test_cat(av[0]);
}
