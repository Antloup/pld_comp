local:  antlr_local main_local struct
	g++ -Wno-attributes -o compilateur *.o

antlr_local:
	g++ -o antlr.o -I antlr4-cpp-runtime/runtime/src antlr/*.cpp antlr4-cpp-runtime/dist/libantlr4-runtime.a

main_local: 
	g++ -I antlr4-cpp-runtime/runtime/src -I antlr -Wno-attributes -o main.o main.cpp antlr4-cpp-runtime/dist/libantlr4-runtime.a

struct:
	g++ -o struct.o Struct/*.cpp Struct/Expr/*.cpp Struct/Instr/*.cpp

default: antlr main struct 
	g++-6 -Wno-attributes -o exe *.o

antlr: 
	g++-6 -o antlr.o -I /shares/public/tp/antlr/antlr4-runtime antlr/*.cpp /shares/public/tp/antlr/lib/libantlr4-runtime.a
	
main:
	g++-6 -I /shares/public/tp/antlr/antlr4-runtime -I antlr -Wno-attributes -o main.o main.cpp /shares/public/tp/antlr/lib/libantlr4-runtime.a
	
clean:
	rm *.o
