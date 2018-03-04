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
	for(int i=0; i<9; ++i){
		printf("please input value %i\n", i);
		double tmp;
		scanf("%lf", &tmp);
		heart[i] = tmp;
	}
	printf("value = %.2f", heart[5]);
	/*
	heart[0] = 52.5;
	heart[1] = 72.25;
	heart[2] = 86.0;
	heart[3] = 73.75;
	heart[4] = 16.75;
	heart[5] = 73.75;
	heart[6] = 89.25;
	heart[7] = 74.25;
	heart[8] = 54.75;
	*/
	//double *tmp = malloc(9*sizeof(double));

	/*int *order = malloc(9*sizeof(int));
	for(int i =0; i<9; ++i){
		order[i] = i;
	}*/

	//int *final = malloc(9*sizeof(int));

	void afficher(int *tab, int n){
		for(int i=0; i<n; ++i)
			printf("%d", tab[i]);
		printf("\n");
	}

	int *checked = malloc(9*sizeof(int));
	for (int i=0; i<9; i++) checked[i] = 0;

	for(int i=0; i<9; ++i){
		double res = 100.0;
		int indice;
		for(int j=0; j<9; ++j){
			if(heart[j]<res && checked[j]==0){
				indice = j;
				res = heart[j];
				
			}
		}
		checked[indice] = 1;
		printf ("|%i, %.2f|\n", indice, res);
	}

	/*for(int i=0; i<9; ++i){
		printf("| %.2f [%i] ", tmp[i], final[i]);
	}
	printf("\n");*/

	

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