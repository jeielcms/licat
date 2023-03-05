licat: licat.o parsers.o
	gcc -Wall -Werror -pedantic-errors -std=c18 -g -v -o licat licat.o parsers.o

licat.o: licat.c parsers.c
	gcc -Wall -Werror -pedantic-errors -std=c18 -g -v -c licat.c parsers.c

clean:
	rm -f *.o
