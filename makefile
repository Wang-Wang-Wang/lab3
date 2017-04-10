Bmain: Bmain.o Bclock.o
	g++ -o Bmain Bmain.o Bclock.o
Bmain.o: Bmain.cpp Bclock.h
	g++ -c Bmain.cpp
Bclock.o: Bclock.cpp Bclock.h
	g++ -c Bclock.cpp
clean:
	rm Bmain *.o 
