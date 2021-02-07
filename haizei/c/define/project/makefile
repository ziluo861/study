.PHONY: clean
all: main.o haizei/test.o
	g++ -g -Wall -Wextra main.o haizei/test.o -o ./bin/haizeix
main.o: main.cpp haizei/test.h
	g++ -g -Wall -Wextra -I./ -c main.cpp
haizei/test.o: haizei/test.h haizei/test.cc haizei/linklist.h
	g++ -g -Wall -Wextra -I./ -c haizei/test.cc -o haizei/test.o
clean:
	rm -rf bin/haizeix main.o haizei/test.o
