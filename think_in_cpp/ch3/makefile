# execute ./make to compile
# execute ./make clean to remove needless files 
table: table_driven.cpp
	g++ -o table table_driven.cpp

practice1: prac1.cpp prac1_main.cpp
	 g++ -o practice1 prac1.cpp prac1_main.cpp

practice2: prac2.cpp
	g++ -o practice2 prac2.cpp

all: table practice1 practice2

clean:
	rm -f table practice1 
