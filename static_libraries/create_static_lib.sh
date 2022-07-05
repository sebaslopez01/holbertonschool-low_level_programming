#!/bin/bash

for FILE in *.c
do
	NEWFILE= echo "$FILE" | tr 'c' 'o'
	gcc -c $FILE -o $NEWFILE
done

ar rc liball.a ./*.o
