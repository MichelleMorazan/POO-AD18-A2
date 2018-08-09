#include <stdio.h>
#include <stdlib.h>


int busquedadevalor(int vec[], int valor);

int main()
{
    int elemento,vec [10];

       for (int i=0;i<10;i++)

      {
          printf("Ingrese el dato %d\n",i+1);
          scanf("%d",&vec[i]);
      }
          for (int i=0;i<10;i++)
          printf("\n%d",vec[i]);

            printf("\nIngresa el elemento a buscar en el arreglo: ");
    scanf("%d",&elemento);

    busquedadevalor(vec, elemento);

    system("pause");
    return 0;
}

  int busquedadevalor(int vec[], int valor)
{
    int i=0;
    for(int j=0;j<10;j++)
    {
        if(vec[j]==valor)
            {printf("\nEl valor %d se encuentra en la posicion %d\n", valor, j);
            i++;}
    }
    if(i==0)
        printf("\n-1\n");

}
