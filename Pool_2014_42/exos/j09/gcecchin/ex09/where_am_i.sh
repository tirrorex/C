ifconfig | grep "inet " | cut -d ' ' -f2 | grep -v "127.0.0.1"
