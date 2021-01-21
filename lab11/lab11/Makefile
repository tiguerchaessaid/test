
#variable	
CC = gcc
OBJ = max.o min.o var.o test.o
CC_OPTIONS = -g -Wall
#CROSS_COMPILE= gcc-arm-linux-gnueabi-


#Install: My-binaire
#	mv My-binaire /home/essaid/Desktop/personal/labs/lab10
	
DEBUG=

My-binaire: ${OBJ}
ifeq ($(DEBUG),yes)
	echo "Copilation en mode DEBUG"
	${CROSS_COMPILE}gcc ${CC_OPTIONS} $^  -o $@

else
	echo "Compliation en mode DISTRIBUTION RELEASE" 
	${CROSS_COMPILE}gcc -Wall $^  -o $@
	
endif       
	
		
%.o: %.c
	${CROSS_COMPILE}gcc -c -Wall $^


clean:
	rm *.o	My-binaire	























