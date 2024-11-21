gcc_options = -std=c++20 -Wall --pedantic-errors

./bin/program : main.cpp all.h ./bin/all.h.gch
	g++ $(gcc_options) -include all.h $< -o $@

./bin/all.h.gch : all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

run : ./bin/program
	./bin/program

clean :
	rm -f ./bin/program
	rm -f ./bin/all.h.gch

.PHONY : run clean
