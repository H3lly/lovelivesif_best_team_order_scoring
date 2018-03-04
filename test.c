#include <stdio.h>
#include <stdlib.h>

int typeCmp(char *type, char *user_input){
	if(strcmp(type, user_input)==0)
		return 0;
	else{
		fprintf("Wrong input. Please input Cool, Smile or Pure : \n")
		return 1;
	}
}

int isEqual(char *a, char* b){
	
}
int inputIsValid(int i){
	char **tab;
	tab[0] = "smile";
	tab[1] = "Smile";
	tab[2] = "SMILE";
	tab[3] = "SMile";

	tab[4] = "pure";
	tab[5] = "Pure";
	tab[6] = "PURE";
	tab[7] = "PUre";

}

int main(void){
	char *type = malloc(5*sizeof(char));
	puts("Chose Cool, Smile or Pure: \n");
	scanf("%s", type);
	while(strcmp)
	printf("Type choosen : %s\n", type);
	return 0;
}