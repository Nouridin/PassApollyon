#ifndef FILEHANDLER_H
#define FILEHANDLER_H

// libs
#include <stdio.h>
#include <stdlib.h>

void vault_create(const char * vaultname);

/* OPEN FILE IN WRITE MODE */
FILE * vault_open(const char * vaultname);


#endif