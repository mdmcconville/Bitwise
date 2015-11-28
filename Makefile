CC = clang++
CFLAGS = -std=c++14 -stdlib=libc++ -w

main: main.o bitwise.o
	xcrun $(CC) $(CFLAGS) -o main main.o bitwise.o

main.o: main.cpp bitwise.h
	$(CC) $(CFLAGS) -c main.cpp

bitwise.o: bitwise.cpp bitwise.h
	$(CC) $(CFLAGS) -c bitwise.cpp
	
clean:
	$(RM) main *.o *~
