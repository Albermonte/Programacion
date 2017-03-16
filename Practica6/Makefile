programa=p62

$(programa): ./src/main.c ./src/argumentos.c ./src/operaciones.c ./include/argumentos.h ./include/operaciones.h
	gcc -o $(programa) ./src/main.c ./src/argumentos.c ./src/operaciones.c -I./include -lm -Wall -Wextra