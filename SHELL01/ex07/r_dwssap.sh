#!/bin/sh
cat /etc/passwd | sed '/#/d' | awk -F : '{print $1}' | awk 'NR%2==0' | rev | sort -r | awk " NR >= $FT_LINE1 && NR <= $FT_LINE2 " | sed 's/$/, /' | tr -d '\n' | sed 's/, $/./'
