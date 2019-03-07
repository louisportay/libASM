/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lportay <lportay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 10:30:20 by lportay           #+#    #+#             */
/*   Updated: 2019/03/07 17:21:05 by lportay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//
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
	char a[] = "12345678";
	ft_bzero(a, 8);
	printf("%s\n", a);
}

void	test_strcat(void)
{
	char a[128] = "12345678";

	ft_strcat(a, "9ABCDEF");
	printf("%s\n", a);
	//assert(strcmp(a, "123456789ABCDEF") == 0);
}

int main(void)
{
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
	test_strcat();
}
