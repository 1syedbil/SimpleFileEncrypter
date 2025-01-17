./bin/cryptoMagic: ./obj/main.o ./obj/functions.o
	cc -g ./obj/main.o ./obj/functions.o -o ./bin/cryptoMagic

./obj/main.o: ./src/main.c ./inc/functions.h
	cc -I./inc -c ./src/main.c -o ./obj/main.o

./obj/functions.o: ./src/functions.c ./inc/functions.h
	cc -I./inc -c ./src/functions.c -o ./obj/functions.o

all: ./bin/cryptoMagic

clean:
	rm -f ./bin/*
	rm -f ./obj/*.o
