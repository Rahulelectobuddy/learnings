CC = gcc
LDFLAGS = -shared
LIBS = -L. -lsignum
SRC_LIB = signum.c
TARGET_LIB = libsignum.so
SRC = application.c
TARGET = $(SRC:.c=.o) 

all: $(TARGET)

$(TARGET): $(TARGET_LIB)
	$(CC) $(SRC) $(LIBS) -o test 

$(TARGET_LIB):
	$(CC) $(LDFLAGS) -o $(TARGET_LIB) $(SRC_LIB) 

clean:
	rm -r -f $(TARGET) 
