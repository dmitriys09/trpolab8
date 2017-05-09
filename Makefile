
main : main.o deposit.o
	gcc -o binn/main build/deposit.o build/main.o 

main.o: src/main.c
	gcc -Wall -o build/main.o -Werror -c src/main.c
 
deposit.o: src/deposit.c
	gcc -Wall -o build/deposit.o -Werror -c src/deposit.c
 
clean:
	rm -rf build/deposit.o build/main.o binn/main.exe