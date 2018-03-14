default: antlr main struct 
	g++-6 -Wno-attributes -o exe *.o

antlr: 
	g++-6 -o antlr.o -I /shares/public/tp/antlr/antlr4-runtime antlr/*.cpp /shares/public/tp/antlr/lib/libantlr4-runtime.a
	
struct:
	g++-6 -o struct.o Struct/*.cpp Struct/Expr/*.cpp Struct/Instr/*.cpp
	
main:
	g++-6 -I /shares/public/tp/antlr/antlr4-runtime -I antlr -Wno-attributes -o main.o main.cpp /shares/public/tp/antlr/lib/libantlr4-runtime.a
	
clean:
	rm *.o
