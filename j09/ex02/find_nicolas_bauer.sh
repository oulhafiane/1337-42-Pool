#!/bin/sh
cat contacts_hard.txt | sed -n '/^[Nn][Ii][Cc][Oo][Ll][Aa][Ss]	[Bb][Aa][Uu][Ee][Rr]/p' | grep -o '(*[0-9]\{3\}[)-.][0-9]\{3\}[.-][0-9]\{4\}'
