CFLAGS := -g
BLOBFLAGS := -Iblob/inc
DEFFLAGS := -Idefinitions

SRC := $(wildcard blob/src/*.cpp)

main:$(SRC)
	g++ $(CFLAGS) $(DEFFLAGS) $(BLOBFLAGS) $(SRC) -o t.GU
