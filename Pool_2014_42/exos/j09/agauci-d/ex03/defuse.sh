# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/14 21:45:31 by agauci-d          #+#    #+#              #
#    Updated: 2014/08/15 16:00:46 by agauci-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

t=$(stat -f%a)
echo "$t -1" | bc