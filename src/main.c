/*
 * PassApollyon - Open Source Password Vault
 * Copyright (C) 2025 Nouridin M. Elhofy
 *
 * Licensed under the GNU General Public License v3.0 (GPLv3).
 * You may use, modify, and distribute this software under the same license.
 * See LICENSE for details.
 */

#include <stdio.h>
#include "FILEHANDLER.h"

int main()
{
        vault_create("PASSAPOLLYON.pa");
        FILE * vault = vault_open("PASSAPOLLYON.pa");
        fclose(vault);
        return 0;
}