#include <stdio.h>
#include <stdlib.h>

/*int typeCmp(char *type, char *user_input){
	if(strcmp(type, user_input)!=0){
		fprintf("Wrong input. Please input Cool, Smile or Pure : \n");
		return 1;
	}else {
		//faire la comparaison
	}
}

//int isEqual(char *a, char* b){

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

}*/

int main(void){
	int res = 0;
	puts("Chose Cool (1), Smile (2) or Pure (3):");
	scanf("%i", &res);
	if(res<1 || res>3){
		while(res<1 || res>3){
			puts("Wrong input. Please write the corresponding number - Cool is 1, Smile is 2 and Pure is 3:");
			scanf("%i", &res);
		}
	}
	printf("Type choosen : %i\n", res);
	return 0;
}