[Compilation -> generate object files]
g++ -c .\main.cpp .\utilities.cpp

[Link up object files]
g++ -o main.exe .\main.o .\utilities.o

[Compile and link up object files in one step]
g++ -o main.exe .\main.cpp .\utilities.cpp