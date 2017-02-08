//Librairies utilisées
#include <stdio.h>  //Librairie "standard input output" (gestion des commandes "print" et du clavier notamment)
#include <stdlib.h> //Librairie "standard library" (gestion des operations simples et de l'allocation de la memoire notamment)

//Constantes
#define TAILLE 10   //Constante de base utilisée notamment pour affecté un numéro a chaque navire
#define TAILLEBATEAU 5 //Taille maximum d'un navire
#define TAILLEFLOTTE 5  //Taille maximum d'une flotte (1 Navire à 5, 2 à 3 et 2 à 2 cases de long)

//BUT Réaliser une bataille navale a 2 joueurs sans utiliser de tableau a 2 dimensions
//ENTREE Utilisateur défini la position des ses bateaux sur le plateau (non affiché)
//SORTIE Résultat de la bataille (victoire ou défaite d'un joueur)

//Types structurés
typedef struct Cell //Structure contenant les paramètres nécessaires a la déclaration d'une cellule
{
    int line;   //Position sur l'axe X
    int col;    //Position sur l'axe Y

}Cell;

typedef struct Boat //Structure contenant les paramètres nécessaires a la déclaration d'un bateau
{
    Cell Pos[TAILLEBATEAU];  //Tableau a 1 dimension stockant la position de toutes les cellules d'un même bateau
    int NumBateau[TAILLE];  //Numéro du bateau

}Boat;

typedef struct Fleet//Structure contenant les paramètres nécessaires a la déclaration d'une flotte
{
    Boat B[TAILLEFLOTTE];   //Tableau a 1 dimensions stockant les paramètres de chaque navire composant la flotte
    int Player[2];  //Affectation d'une flotte a chaque joueur

}Fleet;

enum BOOL{          //Structure pemrettant d'effectuer des tests booléens

    True,False, //Cas vrai et faux utilisés lors des opérations booléennes
};

//Prototypes des procédures et fonctions utilisés dans le code
Cell InitCell(Cell line , Cell col);    //Prototype de la fonction d'initialisation des cellules
enum BOOL CoincideCell(int line,int col);   //Prototype de la fonction de comparaison de cellules
Boat InitBateau(Boat Pos[TAILLEBATEAU] , Boat NumBateau[TAILLE]);   //Prototype de la fonction d'initialisation des bateaux

int main()  //Code principal
{
    //BUT Appeller dans l'ordre les différentes procedures et fonctions
    //ENTREE Utilisateur lance le programme
    //SORTIE Résultat de la partie

    Cell Cellule;   //Création du pointeur Cellule pointant vers Cell
    Cellule.line=0;
    Cellule.col=0;

    Boat Bateau;    //Création du pointeur pointant vers Boat

    Cell InitCell(Cell line , Cell col);    //Appel de la fonction d'initialisation des cellules
    enum BOOL CoincideCell(int line,int col);   //Appel de la fonction de comparaison de cellules
    Boat InitBateau(Boat Pos[TAILLEBATEAU] , Boat NumBateau[TAILLE]);   //Appel de la fonction d'initialisation de bateau

    printf("%d\n",Cellule.line);    //Affichage de résultat de l'initialisation pour raison de test
    printf("%d\n",Cellule.col);

    printf("Hello World");

    return 0;
}

Cell InitCell(Cell line , Cell col){    //Fonction d'initialisation d'une cellule

    //BUT Affecter les valeurs x et y des cellules
    //ENTREE Les cellules n'ont pas de valeur affectée
    //SORTIE Toutes les cellules ont la valeur par défaut 0

    int i , j;  //Variables utilisées pour les boucles
    Cell Cellule;

    for (i=0;i<TAILLE;i++){
        for (j=0;j<TAILLE;j++){
            Cellule.line=0; //Affectation de la valeur 0 a la ligne et la colonne
            Cellule.col=0;
            printf("%d\n",Cellule.line);    //Affichage du résultat
            printf("%d\n",Cellule.col);
        }
    }

return Cellule;

}

Boat InitBateau(Boat Pos[TAILLEBATEAU] , Boat NumBateau[TAILLE]){   //Fonction d'initialisation des bateaux

    //BUT Affecter tout les paramètres aux navires de la flotte
    //ENTREE La bateaux n'ont aucune valeur
    //SORTIE Les bateau se voient affectés leurs position et leur taille

    int i , j;  //Variables utilisées pour les boucles

    Boat Bateau;

    for (i=0;i<TAILLEBATEAU;i++){
        for (j=0;j<TAILLEBATEAU;j++){


        }
    }

return Bateau;

}

enum BOOL CoincideCell(int line,int col){   //Fonction de comparaison de cellules

    //BUT Tester si deux cellules ont la même valeur
    //ENTREE ...
    //SORTIE Retourne vrai ou faux selon si les cellules sont identiques ou non.

    Cell Cellule;
    if(Cellule.line==Cellule.line && Cellule.col==Cellule.col){ //Comparaison du contenu de deux cellules

        if(strcmp(line,col)==0){
            return True;    //Cas vrai
        }
    }

    return False;   //Cas faux
}
