#include "FILEHANDLER.h"


void vault_create(const char * vaultname)
{

        FILE * r = fopen(vaultname, "w");

        if (r == NULL)
        {
                printf("Error: Could not create file %s\n", vaultname);
                return;
        }

        printf("Created Vault '%s' successfully\n", vaultname);

        fclose(r);

}

FILE * vault_open(const char * vaultname)
{
        FILE * r = fopen(vaultname, "w");

        if (r == NULL)
        {
                printf("Error: Could not find file %s\n", vaultname);
                exit(EXIT_FAILURE);
        }

        printf("Opened vault successfully\n");

        return r;
}

