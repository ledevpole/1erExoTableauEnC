#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int tableau[4] = {10,15,23,98};
    int bis [4] = {0};

    copierTableau(tableau,bis,4);

    double result = moyenneTableau(bis,4);

    maximunTableau(bis,4,14);

    printf("la moyenne des chiffres dans le tableau est de  %f\n",result);

    return 0;
}
