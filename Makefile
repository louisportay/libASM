# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lportay <lportay@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/25 17:01:50 by lportay           #+#    #+#              #
#    Updated: 2019/04/15 11:11:52 by lportay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re rules main

CC=clang
CFLAGS=-Wall -Wextra -Werror -I includes/ -L. -lfts

NAME= libfts.a
SRCDIR=src/
OBJDIR=obj

SRC=\
	ft_isalpha.s\
	ft_isdigit.s\
	ft_isalnum.s\
	ft_isascii.s\
	ft_isprint.s\
	ft_toupper.s\
	ft_tolower.s\
	ft_strlen.s\
	ft_puts.s\
	ft_bzero.s\
	ft_strcat.s\
	ft_memcpy.s\
	ft_memset.s\
	ft_strdup.s\
	ft_cat.s\

OBJ=$(addprefix $(OBJDIR)/, $(SRC:%.s=%.o))

HEADER= includes/libasm.h

GREEN="\033[32m"
RESET="\033[0m"

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $@ $?
		ranlib $@
		@echo $(GREEN)$(NAME)" Successfully created"$(RESET)

$(OBJDIR)/%.o: $(SRCDIR)%.s | $(OBJDIR)
	nasm -f macho64 $< -o $@

$(OBJDIR):
	mkdir -p $@

rules:
	@echo 'lportay' > auteur
	@echo "Here are the things to review before turning in your work\n\
	1. Leaks\n\
	2. Forbidden Functions\n\
	3. Drop Useless Libraries\n\
	3. Norme\n\
	4. Adequate Compilation Flags\n\
	5. Squash Commits\n\
	6. Test properly and thoroughly your project"

main: $(NAME)
	$(CC) $(CFLAGS) main.c -o main
	@./main
	@rm main

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
