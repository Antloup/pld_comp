default:
	g++-6 -Wno-attributes -o exe -I /shares/public/tp/antlr/antlr4-runtime *.cpp antlr/*.cpp /shares/public/tp/antlr/lib/libantlr4-runtime.a
	#g++-6 -o exe -I /usr/local/include/antlr4-runtime *.cpp /usr/local/lib/libantlr4-runtime.a
