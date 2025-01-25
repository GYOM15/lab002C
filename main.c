/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/01/2025 14:41:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    if(argc !=2){
        fprintf(stderr, "Erreur: nombre incorrect d'arguments %d", argc);
        return 1;
    }

    printf("\"%s\" est de longueur %ld\n ",argv[1], strlen(argv[1]));
    return 0;
}

