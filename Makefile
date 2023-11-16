# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchaves <tchaves@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 16:13:57 by tchaves           #+#    #+#              #
#    Updated: 2023/11/16 16:14:21 by tchaves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	minitalk

B_SERVER	= server_bonus.c

B_CLIENT	= client_bonus.c

CLIENT	=	client

SERVER	= 	server

NAMELIB	=	libft.a

PRINTLIB =	libftprintf.a

LIBFT	=	libft/libft.a

PRINTF	=	ftprintf/libftprintf.a

all: $(CLIENT) $(SERVER) $(NAMELIB) $(PRINTLIB)

$(NAMELIB):
	$(MAKE) -C libft/.
	cp $(LIBFT) ./ 
	
$(PRINTLIB):
	$(MAKE) -C ftprintf/.
	cp $(PRINTF) ./

$(CLIENT): $(NAMELIB) $(PRINTLIB)
	gcc -Wall -Wextra -Werror client.c $(NAMELIB) $(PRINTLIB) -o $(CLIENT)

$(SERVER): $(NAMELIB) $(PRINTLIB)
	gcc -Wall -Wextra -Werror server.c $(NAMELIB) $(PRINTLIB) -o $(SERVER)

$(B_CLIENT): $(NAMELIB) $(PRINTLIB)
	gcc -Wall -Wextra -Werror $(B_CLIENT) $(NAMELIB) $(PRINTLIB) -o $(CLIENT)

$(B_SERVER): $(NAMELIB) $(PRINTLIB)
	gcc -Wall -Wextra -Werror $(B_SERVER) $(NAMELIB) $(PRINTLIB) -o $(SERVER)

bonus: $(B_SERVER) $(B_CLIENT) $(NAMELIB) $(PRINTLIB)

clean:
	@$(MAKE) fclean -C ./libft && $(MAKE) fclean -C ./ftprintf

fclean: clean
	@rm -rf $(SERVER)
	@rm -rf $(CLIENT)
	@rm -rf $(NAMELIB)
	@rm -rf $(PRINTLIB)

re: fclean all
