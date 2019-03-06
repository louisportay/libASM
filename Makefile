# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lportay <lportay@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/25 17:01:50 by lportay           #+#    #+#              #
#    Updated: 2019/03/06 17:45:30 by lportay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re rules

NAME= libfts.a
SRCDIR=src/
OBJDIR=obj

SRC=\
	b.s\

OBJ=$(addprefix $(OBJDIR)/, $(SRC:%.s=%.o))

HEADER= includes/libasm.h

GREEN="\033[32m"
RESET="\033[0m"

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
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
	5. Squash Commits"
	6. Test properly and thoroughly your project

test:


clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
