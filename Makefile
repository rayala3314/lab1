#Raymundo Ayala

all: lab1 lab1_test

lab1: lab1.cpp
	g++ lab1.cpp -Wall -o lab1
lab1_test: lab1.cpp
	g++ lab1.cpp -Wall -o lab1_test -D UNIT_TEST

clean:
	rm -f lab1 lab1_test
