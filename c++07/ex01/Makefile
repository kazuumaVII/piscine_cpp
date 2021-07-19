# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/07 13:39:54 by frfrance          #+#    #+#              #
#    Updated: 2021/07/07 13:40:10 by frfrance         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
OBJSDIR = .objs
SRCS = main.cpp 
OBJS = $(addprefix $(OBJSDIR)/, $(SRCS:.cpp=.o))
DPDCS = $(OBJS:.o=.d)
CXXFLAGS = -Wall -Wextra -Werror
CXX = clang++
opti :
		@(make -j all)

all : $(NAME)

-include $(DPDCS)

$(NAME) : $(OBJS)
		@(clang++ $(CXXFLAGS) $(OBJS) -o $(NAME))
		@(echo "$(NAME) created")

$(OBJSDIR)/%.o : %.cpp | $(OBJSDIR)
		@(echo "Compiling -> $^")
		@(clang++ $(CXXFLAGS) -MMD -c $< -o $@)

$(OBJSDIR) :
		@(mkdir -p .objs)

clean :
		@(rm -f $(NAME))

fclean : clean
		@(rm -rf $(OBJSDIR))

re : fclean all
