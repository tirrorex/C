# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/15 10:13:48 by agauci-d          #+#    #+#              #
#    Updated: 2014/08/15 10:50:32 by agauci-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

tt=$(ifconfig | awk -F 'inet ' '{printf $2}' | awk -F 'netmask' '{print $1, $2}' |
awk -F '0xff000000 ' '{print $1, $2}' | cut -d ' ' -f1,5 | tr ' ' '\n')
if [[ -z "$tt" ]];
	then
		echo "Je suis perdu!\n"
	else
		echo "$tt"
fi
