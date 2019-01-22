#!/bin/sh
touch -a -A -000001 bomb.txt
stat -f "%a" bomb.txt
