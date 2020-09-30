#include<stdlib.h>
#include<stdio.h>


int main() {
	unsigned int entier = 2868838400;
	//a
	printf("nb octets = %d", sizeof(entier));
	//b
	printf("\nnb octets = %d\n", sizeof(entier) * 8);
	//c
	
	for (int i = 0; i < sizeof(entier) * 8; i++) {
		
			if (entier & (1 << i)) {
				printf("Bit  %d : ON\n", i);
			}
			else {
				printf("Bit  %d : OFF\n", i);
			}
		
	}

	printf("\nBye ;)");

}