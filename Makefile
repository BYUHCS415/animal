

animal: main.o animal.o address.o
	 g++  main.o animal.o address.o -o animal
	 
main.o: main.cpp address.h
	g++ -c main.cpp
	
animal.o: animal.cpp animal.h address.h
	g++ -c animal.cpp
	
address.o: address.cpp address.h
	g++ -c address.cpp