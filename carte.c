#include <stdio.h>
#include <stdbool.h>

// Types
// -----

// Couleur d'une carte
enum Couleur {
  PIQUE,
  TREFLE,
  CARREAU,
  COEUR,
};

// Valeur d'une carte
// 1: as
// 11: valet
// 12: dame
// 13: roi
// 2 à 10: carte régulière
typedef unsigned int valeur;

// Une carte
struct Carte {
  // La couleur de la carte
  enum Couleur couleur;
  // La valeur de la carte
  valeur valeur;
};

// Une main de 5 cartes
struct Main5 {
  // Les 5 cartes de la main
  struct Carte cartes[5];
};

// Fonctions
// ---------

/**
 * Affiche une couleur sur stdout
 *
 * @param c  La couleur à afficher
 */
void afficher_couleur(enum Couleur c) {
}

/**
 * Affiche une valeur sur stdout
 *
 * @param v  La valeur à afficher
 */
void afficher_valeur(valeur v) {
}

/**
 * Affiche une carte sur stdout
 *
 * @param carte  La carte à afficher
 */
void afficher_carte(const struct Carte* carte) {
}

/**
 * Affiche une main de 5 cartes sur stdout
 *
 * @param main5  La main de 5 cartes à afficher
 */
void afficher_main5(const struct Main5* main5) {
}

/**
 * Affiche les 52 cartes sur stdout
 */
void afficher_cartes(void) {
}

/**
 * Compte le nombre d'occurrences de chaque couleur dans une main de 5 cartes
 * donnée
 *
 * Après avoir appelé la fonction, num_cartes[c] retourne le nombre de cartes
 * de couleur c qui apparaissent dans la main de 5 cartes.
 *
 * @param main5       La main de 5 cartes
 * @param num_cartes  Le tableau indiquant le nombre de cartes de couleur c
 *                    dans la main de 5 cartes, pour chaque couleur c possible
 */
void compter_couleurs(const struct Main5* main5, unsigned int num_cartes[]) {
}

/**
 * Compte le nombre d'occurrences de chaque valeur dans une main de 5 cartes
 *
 * Après avoir appelé la fonction, num_cartes[v - 1] retourne le nombre de
 * cartes de valeur v qui apparaissent dans la main de 5 cartes.
 *
 * @param main5       La main de 5 cartes
 * @param num_cartes  Le tableau indiquant le nombre de cartes de valeur v dans
 *                    la main de 5 cartes, pour chaque valeur v possible
 */
void compter_valeurs(const struct Main5* main5, unsigned int num_cartes[]) {
}

/**
 * Indique si une main de 5 cartes est une couleur
 *
 * Une main de 5 cartes est une couleur si toutes les cartes ont la même
 * couleur.
 *
 * @param main5  La main de 5 cartes
 * @return       true si et seulement si la main de 5 cartes donnée est une
 *               couleur
 */
bool est_couleur(const struct Main5* main5) {
  return true;
}

/**
 * Indique si une main de 5 cartes est un carré
 *
 * Une main de 5 cartes est un carré si elle contient 4 cartes sur 5 de la même
 * valeur.
 *
 * @param main5  La main de 5 cartes
 * @return       true si et seulement si la main de 5 cartes donnée est un carré
 */
bool est_carre(const struct Main5* main5) {
  return true;
}

/**
 * Indique si une main de 5 cartes est pleine
 *
 * Une main de 5 cartes est pleine si elle contient 3 cartes de même valeur et
 * 2 autres de même valeur.
 *
 * @param main5  La main de 5 cartes
 * @return       true si et seulement si la main de 5 cartes donnée est pleine
 */
bool est_main_pleine(const struct Main5* main5) {
  return true;
}

/**
 * Indique si une main de 5 cartes forme une suite
 *
 * Une main de 5 cartes est une suite si elle contient 5 valeurs consécutives.
 *
 * @param main5  La main de 5 cartes
 * @return       true si et seulement si la main de 5 cartes donnée est une
 *               suite
 */
bool est_suite(const struct Main5* main5) {
  return true;
}

// Main
// ----

int main(void) {
  afficher_cartes();
  struct Main5 mains[] = {
    {.cartes = {{CARREAU, 1},  {CARREAU, 2}, {CARREAU, 8},
                {CARREAU, 11}, {CARREAU, 13}}},
    {.cartes = {{CARREAU, 2},  {TREFLE,  2}, {COEUR,   8},
                {COEUR,   2},  {PIQUE,   2}}},
    {.cartes = {{PIQUE,   6},  {TREFLE,  7}, {COEUR,   10},
                {PIQUE,   9},  {CARREAU, 8}}},
    {.cartes = {{PIQUE,   13}, {TREFLE,  9}, {COEUR,   13},
                {PIQUE,   9},  {CARREAU, 9}}}
  };
  for (unsigned int i = 0; i < 4; ++i) {
    printf("mains[%d] = ", i);
    afficher_main5(mains + i);
    printf("\n");
    printf("Est-ce la main est une suite? %s\n",
            est_suite(mains + i) ? "oui" : "non");
    printf("Est-ce la main est une couleur? %s\n",
            est_couleur(mains + i) ? "oui" : "non");
    printf("Est-ce la main est pleine? %s\n",
            est_main_pleine(mains + i) ? "oui" : "non");
    printf("Est-ce la main est un carré? %s\n",
            est_carre(mains + i) ? "oui" : "non");
  }
  return 0;
}
