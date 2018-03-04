#include <stdio.h>
#include <stdlib.h>

double addition(double x, double y){
	return x + y;
}

int main(void){
	char *type = malloc(5*sizeof(char));
	puts("Chose Cool, Smile or Pure: \n");
	scanf("%s", type);
	//while(strcmp)
	printf("Type choosen : %s\n", type);
	return 0;
}