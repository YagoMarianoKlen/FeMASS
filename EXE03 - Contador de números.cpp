/* Programa: Contator de N�meros
Autor: Yago Mariano Klen
Data de cria��o: 12/04/2020
Data de Modifica��o: 11/11/2022
*/

#include <stdio.h>
#include<locale.h>

main()
{
	
	setlocale (LC_ALL, "Portuguese");

	printf ("\n\n    ------- Contator de N�meros: -------\n\n");
	
        int num, count=1;
        printf("Digite um n�mero: ");
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

