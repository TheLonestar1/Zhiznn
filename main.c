#include"jiznn.h"



int main(){

    struct murv mur[20];
    mur[0].klass = 9;
    mur[0].energy = 6;
    int index = 0;
    int table[16][16];
    for( int i = 0; i < 16; i++) {
	for(int j = 0; j < 16; j++) {
	    table[i][j] = rand()%5;
	}
    }
    table[13][4] = mur[0].klass;
    while(1){
	
	for(int i = 0; i < 16; i++){
	    for(int j = 0; j < 16; j++){
		switch(table[i][j]){
		    case 0:
			printf(". ");
			break;
		    case 1:
			printf("O ");
			break;
		    case 2:
			printf("| ");
			break;
		    case 3:
			printf("x ");
			break;
		    case 9:
			printf("Q ");
			break;
		}	
	    }
	    printf("\n");
	}
	int a;
	scanf("%d", &a);
	
    
    }

}