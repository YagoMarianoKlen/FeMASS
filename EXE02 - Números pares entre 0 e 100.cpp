/* Programa: Números pares entre 0 e 100
Autor: Yago Mariano Klen
Data de criação: 12/04/2020
Data de Modificação: 11/11/2022
*/

#include <stdio.h>
#include<locale.h>

main()
{
	
	setlocale (LC_ALL, "Portuguese");

	printf ("\n\n    ------- Números pares entre 0 e 100: -------\n\n");
	
    int p;
    for (p=0;p<=100;p++)
    {
        if (p%2==0)
            printf("%d, ", p);
    }
}
