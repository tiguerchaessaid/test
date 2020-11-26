
#variable	
CC = gcc
OBJ = max.o min.o var.o test.o
CC_OPTIONS = -g -Wall



#Install: My-binaire
#	mv My-binaire /home/essaid/Desktop/personal/labs/lab10
	
DEBUG=

My-binaire: ${OBJ}
ifeq ($(DEBUG),yes)
	echo "Copilation en mode DEBUG"
	${CC} ${CC_OPTIONS} $^  -o $@

else
	echo "Compliation en mode DISTRIBUTION RELEASE" 
	${CC} -Wall $^  -o $@
	
endif       
	
		
%.O: %.c
	${CC} -c -Wall $^


clean:
	rm *.o	My-binaire	























