heure=$(stat -f "%m" bomb.txt)
let "heure -=1"
date=$(date -r $heure +"%C%y%m%d%H%M.%S")
touch -t $date bomb.txt
heure=$(stat -f "%m" bomb.txt)
echo $heure
