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
	double *heart = malloc(9*sizeof(double));
	heart[0] = 52.5;
	heart[1] = 72.25;
	heart[2] = 86.0;
	heart[3] = 73.75;
	heart[4] = 16.75;
	heart[5] = 73.75;
	heart[6] = 89.25;
	heart[7] = 74.25;
	heart[8] = 54.75;

	double *tmp = malloc(9*sizeof(double));

	int *order = malloc(9*sizeof(int));
	for(int i =0; i<9; ++i){
		order[i] = i;
	}


	for(int i=0; i<9; ++i){
		double res = 200;
		printf("%d", i);
		for(int j=0; j<9; ++j){
			if(heart[j]<res){
				order[i] = j;
				tmp[i] = heart[j];
				res = heart[j];
				//printf("%2f ", heart[j]);
			}	
		}
	}

	for(int i=0; i<9; ++i){
		printf("| %.2f [%i] ", tmp[i], order[i]);
	}
	printf("\n");

	

	/*

	double res = -1.0;
	int place = 0;
	while(place <9){
		for(int i=0; i<9; ++i){
			if(res == -1.0 || heart[i]<res){
				double tmp = heart[i];
				int pos = order[i];

				heart[i] = heart[place];
				order[i] = order[place];

				heart[place] = tmp;
				order[place] = pos; 
				place++; 
			}
		}
	}*/

	/*for(int i=0; i<9; i++){
		printf("| %f [%i]", heart[i], order[i]);
	}
	printf("\n");*/





	/*int res = 0;
	puts("Chose Cool (1), Smile (2) or Pure (3):");
	scanf("%i", &res);
	if(res<1 || res>3){
		while(res<1 || res>3){
			puts("Wrong input. Please write the corresponding number - Cool is 1, Smile is 2 and Pure is 3:");
			scanf("%i", &res);
		}
	}
	printf("Type choosen : %i\n", res);*/
	return 0;
}