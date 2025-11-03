# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 02:34:48 by abait-el          #+#    #+#              #
#    Updated: 2025/11/03 02:34:48 by abait-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##
# Static library: libprintf.a
# Builds your custom printf library.
#
# @version 4.4.3
# @author:
#   Abdelouadoud Ait El Haj

# === Basic configuration =====================================================

NAME     = libprintf.a
CC       = cc
CFLAGS   = -Wall -Wextra -Werror -I$(INCLUDE)
AR       = ar rcs
RM       = rm -rf

# === Directories =============================================================

SRC_DIR  = src
OBJ_DIR  = obj
INCLUDE  = header

# === Source and object files =================================================

SRC = ft_printf.c \
      ft_putbase.c \
      ft_putchar.c \
      ft_putstr.c \
      ft_putubase.c \
      ft_strlen.c

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

# === Rules ===================================================================

# Default target
all: $(NAME)

# Create the static library from object files
$(NAME): $(OBJS)
	@echo ">>> Creating library $(NAME)..."
	$(AR) $(NAME) $(OBJS)
	@echo ">>> Library $(NAME) created successfully!"

# Compile .c to .o (ensure obj directory exists)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

# Create object directory if missing
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo ">>> Created directory: $(OBJ_DIR)"
	@echo ">>> Compiling source files..."

# Remove object files
clean:
	$(RM) $(OBJ_DIR)
	@echo ">>> Object files removed."

# Remove object files and the library
fclean: clean
	$(RM) $(NAME)
	@echo ">>> Removed $(NAME)."

# Rebuild everything from scratch
re: fclean all

.PHONY: all clean fclean re

# End of Makefile
