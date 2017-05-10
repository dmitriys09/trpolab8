.PHONY: clean test

main : main.o deposit.o
	gcc -o binn/main build/src/deposit.o build/src/main.o 

main.o: src/main.c
	gcc -Wall -o build/src/main.o -Werror -c src/main.c
 
deposit.o: src/deposit.c
	gcc -Wall -o build/src/deposit.o -Werror -c src/deposit.c
 




test: deposit_test	

deposit_test: main_test.o deposit_test.o deposit.o
	gcc build/test/main_test.o build/test/deposit_test.o build/src/deposit.o -o binn/deposit_test

main_test.o: test/main_test.c
	gcc -I src -I thirdparty -Wall -Werror -c test/main_test.c -o build/test/main_test.o

deposit_test.o: test/deposit_test.c
	gcc -I src -I thirdparty -Wall -Werror -c test/deposit_test.c -o build/test/deposit_test.o


clean:
	rm -rf binn/* build/src/*.o build/test/*.o