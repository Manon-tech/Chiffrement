/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet :    3                                                          *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :   Chiffrement de messages                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 :   Adami Julien                                               *
*                                                                             *
*  Nom-prénom2 :   Piquemal Manon                                             *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :    README.md                                              *
*                                                                             *
******************************************************************************/


# Chiffrement


# Signature des fonction

void afficher(wchar_t *chaine); 

void EncodeCesar(wchar_t *chaine, int n);

void conversion(wchar_t *chaine);

void decodeCesar(wchar_t *chaine, int n);

void EncodeCesar(wchar_t *chaine, int n);

int verifAlphaNum(wchar_t *message);

int VerifCode(wchar_t *code);

void majuscules(wchar_t *chaine);

void ViderBuffer();

int vigenere(wchar_t *message, wchar_t *cle);

void sauvegardeDansFichier(wchar_t *message);


int main();


#### Utilisation du programme
1- Saisir un message sans Caractères AlphaNumériques

2- Choisir l'algorithme pour chiffrer ou déchiffrer votre message

3- Choisir le mode de déchiffrement du message (Chiffrer ou déchiffrer)

4- Choisir une clé !=0 pour l'algo choisis

5- Le résultat s'affichera directement dans MessageCoD.txt mais aussi dans la console utilisateur