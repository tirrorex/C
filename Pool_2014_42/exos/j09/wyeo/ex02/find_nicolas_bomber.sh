cat contacts_easy.txt | grep -i "Nicolas\tBomber" | cut -d$'\t' -f3 | grep "[0-9]"
