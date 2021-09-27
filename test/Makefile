run:
	make -C ../
	gcc test.c ../libxbinary.a -o test -I../include -g -lm
	valgrind --leak-check=full --track-origins=yes -s ./test

.PHONY: clean
clean:
	rm -f test

