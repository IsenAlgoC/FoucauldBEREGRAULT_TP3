#include<stdlib.h>
#include<stdio.h>
#define carre(x) (x) * (x)

int main() {
	int nb = 5;
	printf("%d", carre(nb));
	// Le probleme est que la fonction n'a pas de parenthese elle calcule donc 2nb+1
	printf("\n%d", carre(nb+1));
}