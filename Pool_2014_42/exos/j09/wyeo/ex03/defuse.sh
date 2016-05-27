touch -A -01 bomb.txt
stat -r bomb.txt | cut -d " " -f 10
