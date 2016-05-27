OBJS = testClass.o
cc = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

testClass: $(OBJS)
	$(cc) $(LFLAGS) $(OBJS) -o testClass

testClass.o: testClass.hpp
	$(cc) $(CFLAGS) -c testClass.cpp