
CC = g++
CFLAGS = -Wall 
EXEC = sortingCpp
SRCS = main.cpp InsertionSort.cpp QuickSort.cpp MergeSort.cpp BubbleSort.cpp HeapSort.cpp Heap.cpp MergeCyclic.cpp

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRCS)

clean:
	rm -f $(EXEC)
