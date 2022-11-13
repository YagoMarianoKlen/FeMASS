/* Programa: Contator de Números
Autor: Yago Mariano Klen
Data de criação: 12/04/2020
Data de Modificação: 11/11/2022
*/

#include <stdio.h>
#include<locale.h>

main()
{
	
	setlocale (LC_ALL, "Portuguese");

	printf ("\n\n    ------- Contator de Números: -------\n\n");
	
        int num, count=1;
        printf("Digite um número: ");
        scanf("%d", &num);

        while(count<=num)
        {
            if(count%2==1)
                printf("%d,",count);
            else
                printf("%d,", count);

            count++;
        }
}

