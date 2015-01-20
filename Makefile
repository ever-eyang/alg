
CC = g++
CFLAGS = -Wall 
EXEC = sortingCpp
SRCS = main.cpp InsertionSort.cpp QuickSort.cpp MergeSort.cpp

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRCS)

clean:
	rm -f $(EXEC)
