#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct alum{
    int edad;
    int legajo;
    int nota;

};



int main (){

int cantidad, temp, chooser = 0;


printf("cuantos alumnos habran?: ");
scanf("%d", &cantidad);

    struct alum alumno[cantidad];

srand((unsigned)time(NULL));

    for(int i = 0 ; i <= cantidad ; i++ ){
            alumno[i].edad = (rand() % (50 - 18) + 10);
            alumno[i].legajo = (rand()% (300 - 200) )+ 100;
            alumno[i].nota = (rand()% 10);
        
    }
    
printf("de que modo se ordenaran las notas? 1 para mayor o 2 para menor: ");
scanf("%d", &chooser);


    if(chooser == 1){
        for(int c = 0 ; c < cantidad ; c++){
            for(int z = 0 ; z < cantidad ; z++){
                if(alumno[z].nota < alumno[z + 1].nota){
                   temp = alumno[z].nota;
                   alumno[z].nota = alumno[z + 1].nota;
                   alumno[z+1].nota = temp; 
                }
            }
        }
    }else if (chooser == 2) { 
         for(int c = 0 ; c < cantidad ; c++){
            for(int z = 0 ; z < cantidad ; z++){
                if(alumno[z].nota > alumno[z + 1].nota){
                   temp = alumno[z].nota;
                   alumno[z].nota = alumno[z + 1].nota;
                   alumno[z + 1].nota = temp; 
                }
            }
        }
    }


        for(int v = 0 ; v < cantidad ; v++){
           printf("N%d\tedad:%d\t\tlegajo:%d\t\tnota:%d\t\n\n ",v + 1,  alumno[v].edad, alumno[v].legajo, alumno[v].nota);
        }



}