OBJETIVO : INGREDIENTES
	PASO1
	PASO2
	PASO3 


bin/test : src/main.cpp
	g++ src/main.cpp -o bin/test -std=c++2a
ejecutar : bin/test
	./bin/test

