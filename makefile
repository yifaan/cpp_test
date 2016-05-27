OBJS = helloWorld.o
cc = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

helloWorld: $(OBJS)
	$(cc) $(LFLAGS) $(OBJS) -o helloWorld

helloWorld.o : 
	$(cc) $(CFLAGS) helloWorld.cpp