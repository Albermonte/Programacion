IDIR =./include
CC=gcc
CFLAGS=-I$(IDIR) -Wall -Wextra
ODIR=obj
SRC_DIR=src

LIBS=-lm -Wall -Wextra


HDRS = arboles.h
PATH_HDRS = $(patsubst %,$(IDIR)/%,$(HDRS))

_OBJ = main.o arboles.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: $(SRC_DIR)/%.c $(PATH_HDRS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
p12: $(OBJ)
	$(CC) -o $@ $^ $(LIBS)
	
.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm p12
