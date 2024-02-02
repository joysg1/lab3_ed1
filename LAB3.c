#include<stdio.h>
#include<windows.h>
#include<stdlib.h>






int main(){
    int x;
    int i=0,j=0,i2=0,j2=0,i3=0,j3=0;

    float a[i][j];
    float b[i2][j2];
    float s[i][j];
    float m[i3][j3];
    int valsr;
    int valm;
    int f=0,c=0,k=0       ;








    printf("Cargando por favor espere ");
    Sleep(950);
    printf(".");
    Sleep(950);
    printf(".");
    Sleep(950);
    printf(".\n\n\n");

    do{
        printf("Seleccione la opcion ha realizar \n\n");

        printf("1. A+B \n");
        printf("2. A-B \n");
        printf("3. A*B \n");
        printf("4. SALIR \n");

        scanf("%d",&x);
        printf("\n\n");

    switch(x){
    case 1:
        printf("\n\n");
        printf("Ingrese el numero de filas de la matriz A: \n\n");
        scanf("%d",&i);
        printf("\n\n");
        printf("Ingrese el numero de columnas de la matriz A: \n\n");
        scanf("%d",&j);
        printf("\n\n");
        printf("Ingrese el numero de filas de la matriz B: \n\n");
        scanf("%d",&i2);
        printf("\n\n");
        printf("Ingrese el numero de columnas de la matriz B: \n\n");
        scanf("%d",&j2);
        if (i<=0 || i2<=0 || j<=0 || j2<=0 || i!=i2 || j!=j2){
            valsr=0;
            printf("No se puede sumar indices distintos en A y B\n\n");}
         else if(i>0 && i2>0 && j>0 && j2>0 && i==i2 && j==j2){
           valsr=1;
           printf("\n\n Si se puede sumar \n\n");
           printf("\n\n Datos de la matriz A \n\n");

           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
            printf("Ingrese el valor de A %d , %d : \n",f,c);
           scanf("%f",&a[f][c]);
           printf("\n\n");
            }




           }

           printf("Datos de la matriz B \n\n");

           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
           printf("Ingrese el valor de B %d , %d :\n\n ",f,c);
           scanf("%f",&b[f][c]);
           printf("\n\n");
            }




           }

           for(f=0; f<i; f++){
            for(c=0; c<j; c++){
                s[f][c]= a[f][c]+ b[f][c];





            }





           }



           printf("MATRIZ A \n\n");
           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
            printf("%.2f \t\t",a[f][c]);

            }
            printf("\n\n");




           }



           printf("MATRIZ B \n\n");
           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
            printf("%.2f \t\t",b[f][c]);

            }
            printf("\n\n");




           }



           printf("MATRIZ A+B \n\n");
           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
            printf("%.2f \t\t",s[f][c]);

            }
            printf("\n\n");




           }





           }



    break;


    case 2:
        printf("\n\n");
        printf("Ingrese el numero de filas de la matriz A: \n\n");
        scanf("%d",&i);
        printf("\n\n");
        printf("Ingrese el numero de columnas de la matriz A: \n\n");
        scanf("%d",&j);
        printf("\n\n");
        printf("Ingrese el numero de filas de la matriz B: \n\n");
        scanf("%d",&i2);
        printf("\n\n");
        printf("Ingrese el numero de columnas de la matriz B: \n\n");
        scanf("%d",&j2);
        if (i<=0 || i2<=0 || j<=0 || j2<=0 || i!=i2 || j!=j2){
            valsr=0;
            printf("No se puede restar \n\n");
            }
         else if (i>0 && i2>0 && j>0 && j2>0 && i==i2 && j==j2){
           valsr=1;
           printf("\n\n Se puede restar \n\n");
           printf("\n\n Datos de la matriz A \n\n");

           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
            printf("Ingrese el valor de A %d , %d : \n",f,c);
           scanf("%f",&a[f][c]);
           printf("\n\n");
            }




           }

           printf("Datos de la matriz B \n\n");

           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
           printf("Ingrese el valor de B %d , %d :\n\n ",f,c);
           scanf("%f",&b[f][c]);
           printf("\n\n");
            }




           }

           for(f=0; f<i; f++){
            for(c=0; c<j; c++){
                s[f][c]= a[f][c]- b[f][c];





            }





           }



           printf("MATRIZ A \n\n");
           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
            printf("%.2f \t\t",a[f][c]);

            }
            printf("\n\n");




           }



           printf("MATRIZ B \n\n");
           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
            printf("%.2f \t\t",b[f][c]);

            }
            printf("\n\n");




           }



           printf("MATRIZ A-B \n\n");
           for(f=0; f<i ; f++){


            for(c=0; c<j ; c++){
            printf("%.2f \t\t",s[f][c]);

            }
            printf("\n\n");




           }










       }



    break;



    case 3:
        system("multi.exe");










        break;



    case 4:
        system("cls");


        break;









    default:
        printf("Eleccion fuera de rango \n\n");



   }



    }while(x!=4);
























    }
