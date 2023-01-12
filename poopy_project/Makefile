# a target to build an executable file from source files with std++17 standard
# the target "poopy" has a dependency : main.o.
# It means, firsly : execute the target "main.o"

# linking stage ( object files to executable)
poopy: main.o
	g++ -std=c++17 -o poopy main.o

# compiling stage ( source files to object file)
main.o:
	g++ -std=c++17 -c main.cpp

clean:
	rm --force poopy main.o

funny_cmd:
	echo "Hi! how is it going?"
	echo "Hell"

# we define our default target
default: poopy

.PHONY: poopy