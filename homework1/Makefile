prog1: main.o replaced.o
	g++ -o prog1 main.o replaced.o

main.o: main.cc replaced.h
	g++ -c main.cc

replaced.o: replaced.h replaced.cc
	g++ -c replaced.cc
