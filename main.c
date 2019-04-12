/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lportay <lportay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 10:30:20 by lportay           #+#    #+#             */
/*   Updated: 2019/04/12 17:55:48 by lportay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	assert(isalpha('A') == ft_isalpha('A'));
	assert(isalpha('Z') == ft_isalpha('Z'));
	assert(isalpha('A' - 1) == ft_isalpha('A' - 1));
	assert(isalpha('Z' + 1) == ft_isalpha('Z' + 1));
	assert(isalpha('a') == ft_isalpha('a'));
	assert(isalpha('z') == ft_isalpha('z'));
	assert(isalpha('a' - 1) == ft_isalpha('a' - 1));
	assert(isalpha('z' + 1) == ft_isalpha('z' + 1));
	assert(isalpha(255) == ft_isalpha(255));
}

void	test_isdigit(void)
{
	assert(isdigit('0') == ft_isdigit('0'));
	assert(isdigit('0' - 1) == ft_isdigit('0' - 1));
	assert(isdigit(0) == ft_isdigit(0));
	assert(isdigit('9') == ft_isdigit('9'));
	assert(isdigit('5') == ft_isdigit('5'));
	assert(isdigit('9' + 1) == ft_isdigit('9' + 1));
	assert(isdigit(INT_MAX) == ft_isdigit(INT_MAX));
}

void	test_isalnum(void)
{
	assert(isalnum('0') == ft_isalnum('0'));
	assert(isalnum('0' - 1) == ft_isalnum('0' - 1));
	assert(isalnum('9') == ft_isalnum('9'));
	assert(isalnum('9' + 1) == ft_isalnum('9' + 1));
	assert(isalnum('A') == ft_isalnum('A'));
	assert(isalnum('A' - 1) == ft_isalnum('A' - 1));
	assert(isalnum('Z') == ft_isalnum('Z'));
	assert(isalnum('Z' + 1) == ft_isalnum('Z' + 1));
	assert(isalnum('a') == ft_isalnum('a'));
	assert(isalnum('a' - 1) == ft_isalnum('a' - 1));
	assert(isalnum('z') == ft_isalnum('z'));
	assert(isalnum('z' + 1) == ft_isalnum('z' + 1));
}

void	test_isascii(void)
{
	assert(isascii(-1) == ft_isascii(-1));
	assert(isascii(0) == ft_isascii(0));
	assert(isascii(127) == ft_isascii(127));
	assert(isascii(128) == ft_isascii(128));
	assert(isascii(129) == ft_isascii(129));
}

void	test_isprint(void)
{
	assert(isprint(-1) == ft_isprint(-1));
	assert(isprint(0) == ft_isprint(0));
	assert(isprint(' ') == ft_isprint(' '));
	assert(isprint(' ' - 1) == ft_isprint(' ' - 1));
	assert(isprint(127) == ft_isprint(127));
	assert(isprint(128) == ft_isprint(128));
	assert(isprint(126) == ft_isprint(126));
}

void	test_tolower(void)
{
	assert(tolower(-1) == ft_tolower(-1));
	assert(tolower('A') == ft_tolower('A'));
	assert(tolower('Z') == ft_tolower('Z'));
	assert(tolower('A' - 1) == ft_tolower('A' - 1));
	assert(tolower('Z' + 1) == ft_tolower('Z' + 1));
}

void	test_toupper(void)
{
	assert(tolower(-1) == ft_tolower(-1));
	assert(tolower('a') == ft_tolower('a'));
	assert(tolower('z') == ft_tolower('z'));
	assert(tolower('a' - 1) == ft_tolower('a' - 1));
	assert(tolower('z' + 1) == ft_tolower('z' + 1));
}

void	test_strlen(void)
{
	assert(strlen("") == ft_strlen(""));
	assert(strlen(" ") == ft_strlen(" "));
	assert(strlen("Hello") == ft_strlen("Hello"));
	assert(strlen("→ Hello") == ft_strlen("→ Hello"));
	assert(strlen("→ Hello\n") == ft_strlen("→ Hello\n"));
}

void	test_puts(void)
{
	ft_puts(NULL);
	ft_puts("");
	ft_puts("Hello");
	ft_puts("I'm working now");
}

void	test_bzero(void)
{
	char a[] = "123456789";
	char b[] = "123456789";
	char c[] = "123456789";
	ft_bzero(a, 8);
	assert(memcmp(a, "\0\0\0\0\0\0\0\09", 9) == 0);
	ft_bzero(b, 0);
	assert(memcmp(b, "123456789", 9) == 0);
	ft_bzero(c, 9);
	assert(memcmp(c, "\0\0\0\0\0\0\0\0\0", 9) == 0);
}

void	test_memset(void)
{
	char a[] = "123456789";
	char b[] = "123456789";
	char c[] = "123456789";
	ft_memset(a, 'A', 8);
	assert(memcmp(a, "AAAAAAAA9", 9) == 0);

	ft_memset(b, 'B', 0);
	assert(memcmp(b, "123456789", 9) == 0);

	ft_memset(c, 'C', 9);
	assert(memcmp(c, "CCCCCCCCC", 9) == 0);
}

void	test_strcat(void)
{
	char a[128] = "12345678";
	char b[128] = "9ABCDEF";
	char *c;

	c = ft_strcat(a, b);
	assert(a == c);
	assert(strcmp(c, "123456789ABCDEF") == 0);
}

void	test_memcpy(void)
{
	char a[128] = "12345678";
	char b[128] = "9ABCDEF";
	char d[128] = "GHIJKL";
	char e[100];
	char f[100];

	char *c;

	memset(e, 65, 100);
	memset(f, 66, 100);
	c = ft_memcpy(a, b, 4);
	assert(a == c);
	assert(strcmp(c, "9ABC5678") == 0);
	c = ft_memcpy(b, d, 0);
	assert(strcmp(c, "9ABCDEF") == 0);
	c = ft_memcpy(b, d, 10);
	assert(strcmp(c, "GHIJKL") == 0);
	ft_memcpy(e, f, 100);
	assert(strcmp(e, f) == 0);
}

void	test_strdup(void)
{
	char *a, *b, *c;

	a = ft_strdup("Hello World");
	assert(strcmp(a, "Hello World") == 0);
	b = ft_strdup("");
	assert(strcmp(b, "") == 0);
	c = ft_strdup("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	assert(strcmp(c, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx") == 0);
	free(a);
	free(b);
	free(c);
}

void	test_cat(char *exec)
{
	ft_cat(STDIN_FILENO);
	ft_cat(open(__FILE__, O_RDONLY));
	ft_cat(open(exec, O_RDONLY));
	ft_cat(-42);
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
//	test_isalpha();
//	test_isdigit();
//	test_isalnum();
//	test_isascii();
//	test_isprint();
//	test_tolower();
//	test_toupper();
//	test_strlen();
//	test_puts();
//	test_bzero();
//	test_memset();
//	test_strcat();
//	test_memcpy();
//	test_strdup();
	test_cat(av[0]);
}
