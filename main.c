// Comment passer un tableau a une fonction
#include <stdio.h>
#include <stdlib.h>

#define Max 10

int tab[Max], count;

// prototype de la fonction
int largest(int x[], int y);

int main()
{
    // lecture des MAX valeurs a partir du clavier
    for (count = 0;  count < Max; count++)
    {
        printf("Entrer une valeur entiere : ");
        scanf("%d", &tab[count]);
    }

    // Appel de la fonction et affichage de la valeur renvoyee
    printf("\n\nLa valeur la plus grande est %d\n", largest(tab, Max));

    EXIT_SUCCESS;
}

// La fonction largest() renvoie la valeur la plus grande d'un tableau d'entier.

int largest(int x[], int y)
{
    int count, biggest = x[0];

    for (count = 1; count < y; count++)
    {
        if(x[count] > biggest)
            biggest = x[count];
    }

    return biggest;
}