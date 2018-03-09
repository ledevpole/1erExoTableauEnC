
int sommeTableau(int tableau[],int tailleTableau){
    int i = 0;
    int result = 0;

    for(i = 0;i < tailleTableau; i++)
    {
        result += tableau[i];
    }
    return result;
}

double moyenneTableau(int tableau[], int tailleTableau){
    double somme,result;
    somme = sommeTableau(tableau,4);
    result = somme / tailleTableau;
    return result;
}

void copierTableau(int tableauOriginal[], int copie[], int tailleTab){
    int i = 0;
    for(i= 0;i < tailleTab; i++){
       copie[i] = tableauOriginal[i];
    }
}

void maximunTableau(int tableau[],int tailleTableau, int valeurMax){
    int i = 0;
    for(i = 0;i < tailleTableau; i++){

        if(tableau[i] >= valeurMax){
            printf("la valeur %d passe a ",tableau[i]);
            tableau[i] = 0;
            printf("valeur %d \n",tableau[i]);
        }
    }

}

void ordonnerTableau(int tableau[], int tailleTableau){
    int mem = 0,i = 0;

    // j'ai besoin de garder le dernier chiffre pour comparer.
    //si mem > a now, alors inverser.
    for(i = 0; i < tailleTableau; i++){
        if(mem < tableau[i]){
            mem = tableau[i];
        }
        if(tableau[i]>tableau[i+1]){

            }
    }
}
