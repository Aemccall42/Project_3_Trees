output: BountyHunter.o Bounty.o Tree.o
	g++ BountyHunter.o Bounty.o Tree.o -o output

BountyHunter.o: BountyHunter.cpp
	g++ -c BountyHunter.cpp

Bounty.o: Bounty.cpp Bounty.h
	g++ -c Bounty.cpp

Tree.o: Tree.cpp Tree.h
	g++ -c Tree.cpp

clean:
	rm *.o output