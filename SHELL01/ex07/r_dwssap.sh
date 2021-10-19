cat /etc/passwd | grep -v '#' | sed -n 'n;p' | rev | sed 's/.*://' | sort -rd | sed -n "$FT_LINE1,$FT_LINE2 p" | sed 's/$/,/' | tr '\n' ' '  | sed 's/, $/./' | tr -d '\n'
