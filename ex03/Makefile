# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 11:52:51 by fmarggra          #+#    #+#              #
#    Updated: 2024/08/28 09:53:55 by fmarggra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	unnecessaryViolence
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

AR		=	ar rc
RM		=	rm -f

SRC		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS	=	$(SRC:.cpp=.o)

.PHONY:		all clean fclean re bonus

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(CXX) $(OBJS) -o $(NAME)

%.o: %.c 	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			clean all
