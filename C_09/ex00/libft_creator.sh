# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 19:10:50 by aalbrech          #+#    #+#              #
#    Updated: 2024/03/06 20:34:06 by aalbrech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
rm -f libft.a
cc -Wall -Wextra -Werror -c *.c
ar -rc libft.a *.o
find . -name "*.o" -type f -delete
