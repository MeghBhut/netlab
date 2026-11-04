app : main.o mathx.o
	g++ main.o mathx.o -o app

main.o : main.cpp mathx.h
	g++ -Wall -Wextra -g -c main.cpp -o main.o

mathx.o : mathx.cpp mathx.h
	g++ -Wall -Wextra -g -c mathx.cpp -o mathx.o