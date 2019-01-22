#!/bin/sh
rezult=$(ifconfig | grep "inet " | grep -o "inet.*netmask" | cut -d ' ' -f 2)
if [ -z "$rezult" ]; then
	echo "I am lost!"
else
	ifconfig | grep "inet " | grep -o "inet.*netmask" | cut -d ' ' -f 2
fi
