run:
	make -C ../
	gcc test.c ../libxbinary.a -o test -I../include -g
	./test

.PHONY: clean
clean:
	rm -f test

