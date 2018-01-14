# let's use $(CPP) instead of g++ 
CPP=g++
CFLAGS=-c -Wall
SOURCES= main.cpp Circle.cpp Rectangle.cpp Square.cpp Shape.cpp
OBJECTS= $(SOURCES:.cpp=.o)

all: modern

modern: $(OBJECTS)
	$(CPP) $(OBJECTS) -o modern

main.o: main.cpp
	$(CPP) $(FLAGS) main.cpp 

Circle.o: Circle.cpp
	$(CPP) $(FLAGS) Circle.cpp    

Rectangle.o: Rectangle.cpp
	$(CPP) $(FLAGS) Rectangle.cpp

Square.o: Square.cpp
	$(CPP) $(FLAGS) Square.cpp

Shape.o: Shape.cpp
	$(CPP) $(FLAGS) Shape.cpp

clean:
	rm *o modern 
