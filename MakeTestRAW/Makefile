.PHONY: all clean hello double float
all: float

clean:
	del *.exe *.o

double:
	g++ -c main.cpp -D DOUBLE_TYPE
	g++ main.o -o hello

float:
	g++ -c main.cpp
	g++ main.o -o hello