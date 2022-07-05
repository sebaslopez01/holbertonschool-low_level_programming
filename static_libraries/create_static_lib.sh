#!/bin/bash

for FILE in *.c
do
	NEWFILE=$(echo "$FILE" | cut -d '.' -f 1)
	gcc -c $FILE -o $NEWFILE
done

ar rc liball.a ./*.o
