# execute ./make to compile
# execute ./make clean to remove needless files 

cstash: cstash.cpp cstash_main.cpp
	g++ -o cstash cstash.cpp cstash_main.cpp

cstash2: cstash2.cpp cstash2_main.cpp
	g++ -o cstash2 cstash2.cpp cstash2_main.cpp

put: put.cpp put_main.cpp
	g++ -o put put.cpp put_main.cpp

all: cstash cstash2 put

clean:
	rm -f cstash cstash2 put
