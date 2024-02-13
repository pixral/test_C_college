#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void resultado (int pepito[], int papito[]){

int papu[5][5];
int papote, temp = 0;

//then sum each number to their next one, using only 2 arrays.

srand((unsigned)time(NULL));

        for(int i = 0 ; i < 10 ; i++){ 
         papote = pepito[i] + papito[i];

        printf("\n\n\n%d + %d = %d", pepito[i], papito[i], papote);

}


printf("\n\n\n---------------\t");


// now it creates another set of numbers in another array and multiplies them, but only using 1 (array) 


        for(int b = 0 ; b < 5 ; b++){ 
        for(int j = 0 ; j < 5 ; j++){
               papu[b][j] = (rand() % 1000) + 1;
                printf("%d x %d = %d\t", papu[b][j], papu[b][j], papu[b][j] * papu[b][j]);
                }
        }

}




int main (){



int VEC[10];
int VECTOR[10];

srand((unsigned)time(NULL));

for(int i = 0 ; i < 10 ; i++){
    VEC[i] = (rand() % 1000) + 1;
    VECTOR[i] = (rand() % 1000) + 1;
    
}

//sends them to another function

resultado (VEC, VECTOR);
   


}

