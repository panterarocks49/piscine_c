#!/bin/bash

cat /etc/passwd | grep -v '[#]' | awk 'NR%2==0' | grep -Eo '\w*[^:]?' | sed '/^\s*$/d' | rev | sort -r | awk -v var=$FT_LINE1 -v var2=$FT_LINE2 'NR >= var && NR <= var2' | tr '\n' ', ' | sed 's/,/, /g' | sed 's/..$/./'

