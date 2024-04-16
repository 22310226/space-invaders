bin/test : src/main.cpp
	g++ src/main.cpp -o bin/test -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom


ejecutar : bin/test
	./bin/test

