CFLAGS ?= -Iblob/inc -g
SRC := $(wildcard blob/src/*.cpp)

main:$(SRC)
	g++ $(CFLAGS) $(SRC) -o t.GU
