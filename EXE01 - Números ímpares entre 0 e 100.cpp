/* Programa: Números ímpares entre 0 e 100
Autor: Yago Mariano Klen
Data de criação: 12/04/2020
Data de Modificação: 10/11/2022
*/

#include <stdio.h>
#include<locale.h>

main()
{
	
	setlocale (LC_ALL, "Portuguese");

	printf ("\n\n    ------- Números ímpares entre 0 e 100: -------\n\n");
	
    int i;
    for (i=0;i<=100;i++)
    {
        if (i%2!=0)
            printf("%d, ", i);
    }
}
