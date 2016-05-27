ip=`ifconfig | grep "inet " | cut -d\  -f 2`
ip_size=`echo $ip | wc -l | tr -d " "`

if [ -z $ip_size  ]
then
	echo "Je suis perdu!\n";
else
	echo "$ip";
fi