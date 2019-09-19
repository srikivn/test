Test.exe: main.o big3.o rev.o fact.o
	 gcc -o Test.exe main.o big3.o rev.o fact.o
big3.o: big3.c
     gcc -c big3.c
main.o: main.c
     gcc -c main.c
fact.o: fact.c
     gcc -c fact.c
rev.o: rev.c
     gcc -c rev.c
clean:
     rm -rf Test.exe *.o
