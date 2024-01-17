#include <stdio.h>

#define MAX_AGE 100
#define MIN_AGE 0
#define MAJOR 18

void afficher_resultat(int x);
int calculer_somme(int x, int y);
int majeur(int age);
void afficher_age(int age);


int max(int x, int y);

int min(int x, int y);

int equals(int x, int y);



int main()
{
    int a = 6;
    int b = 24;

    afficher_resultat(calculer_somme(5, 10));

    afficher_resultat(calculer_somme(a, b));

    afficher_age(18);
    afficher_age(17);
    afficher_age(100);
    afficher_age(-10);
}





void afficher_resultat(int x)
{
    printf("le résultat est de : %d\n", x);
}

int calculer_somme(int x, int y)
{
    return x + y;
}

int majeur(int age) {
    if(age >=18 && age <= MAX_AGE)
      return 1;
    else if(age <= MAJOR && age > MIN_AGE)
      return 0;
    else
      return -1;
}

void afficher_age(int age)
{
    if (majeur(age)==1)
      printf("%d : majeur\n", age);
    else if(majeur(age)==0)
      printf("%d : mineur\n", age);
    else 
      printf("%d : erreur\n", age);
}
