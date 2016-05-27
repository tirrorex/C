cat $1 | tr "\t" " " | cut -d ' ' -f 1-3 | grep -i -E "nicolas.*bomber" | grep - | cut -d ' ' -f 3
