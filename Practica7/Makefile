programa=p7

$(programa): ./src/main.c ./src/cadenas.c ./src/ficheros.c ./include/cadenas.h ./include/ficheros.h
	gcc -o $(programa) ./src/main.c ./src/cadenas.c ./src/ficheros.c -I./include -lm -Wall -Wextra