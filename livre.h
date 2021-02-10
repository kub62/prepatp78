#ifndef LIVRE_H   //compilation conditionnelle
#define LIVRE_H

#include "es.h"

# define MAX 20
# define MAX_TITRE 60
# define MAX_CODE 6

# define K_MaxTit MAX_TITRE
# define K_MaxAut MAX
# define K_MaxEdit MAX
# define K_MaxEmp MAX
# define K_MaxCode MAX_CODE

typedef char T_Titre[K_MaxTit];
typedef char T_Aut[K_MaxAut];
typedef char T_Edit[K_MaxEdit];
typedef char T_Emp[K_MaxEmp]; //utilisez d'abord ce type puis, remplacez le par celui ci dessous ()
typedef char T_Code[K_MaxCode];
typedef int T_annee;


// à utiliser pour gérer l'emprunt d'un livre
/*
typedef enum T_Jour {lu,ma,me,je,ve,sa,di};
typedef enum T_Mois {janv,fevr,mars,avri,mai,juin,juil,aout,sept,octo,nove,dece};

typedef struct
{
char nomemprunteur[50];
T_Jour lejour;
int ledate;
T_Mois lemois;
int lannee
}T_Emp ;
*/


// debut de TP, on utilisera les 2 champs titre et auteur
// puis , quand vous le deciderez, vous activerez
// les autres champs
typedef struct
{
//T_Code code; // code de reference du livre dans la biblio. 
// Attention il peut y avoir pluieurs livres de même titre (le code diffèrent dans ce cas)
T_Titre titre; // Titre du livre
T_Aut auteur; // Nom de l'auteur
//T_Edit editeur; // Nom de l'editeur
//T_annee annee; // Annee de l'edition
//T_Emp emprunteur; // Nom de l'emprunteur et date d'emprunt
}  T_livre;


//prototypes
void saisirLivre(T_livre * ptrL);void afficherLivre(const T_livre *ptrL);
void afficherLivre(const T_livre *ptrL);


#endif //fin de compilation conditionnelle