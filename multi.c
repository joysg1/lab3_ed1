#include <stdio.h>


int main(int argc, char** args){
  system("color 9F");
  int af, ac, bf, bc, i, j, k;
  printf("\nNumero de filas de la matriz A: \n");
  scanf("%d", &af);
  printf("\nNumero de columnas de la matriz A: \n");
  scanf("%d", &ac);
  printf("\nNumero de filas de la matriz B: \n");
  scanf("%d", &bf);
  printf("\nNumero de columnas de la matriz B: \n");
  scanf("%d", &bc);
  if(ac!=bf){
             printf("\nNo es posible hacer la multiplicacio numero de columnas de A distinto del numero de filas de Bn\n\n");
             system("pause");
             return 0;
  }
  int A[af][ac], B[bf][bc], C[af][bc]; /*Rutina para cargar los valores*/
  for(i=0;i<af;i++){
      for(j=0;j<ac;j++){
          printf("\nValor de la matriz 1 (%d, %d): ",i+1, j+1);
          scanf("%d", &A[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<bf;i++){
      for(j=0;j<bc;j++){
          printf("\nValor de la matriz 2 (%d, %d): ", i+1, j+1);
          scanf("%d", &B[i][j]);
      }
  }

  for(i=0;i<af;i++){
      for(j=0;j<bc;j++){
          C[i][j]=0;
          for(k=0;k<ac;k++){
              C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
          }
      }
  }

/*Rutina para imprimir*/
  printf("\n\n Matriz A");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n");
      for(j=0;j<ac;j++){
          printf("%6d  ", A[i][j]);
      }
  }
  printf("\n\n Matriz B");
  printf("\n");
  for(i=0;i<bf;i++){
      printf("\n");
      for(j=0;j<bc;j++){
          printf("%6d  ", B[i][j]);
      }
  }

  printf("\n\n Matriz A*B");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n");
      for(j=0;j<bc;j++){
          printf("%6d  ", C[i][j]);
      }
  }
  printf("\n");
}
