/* Programa: M�dia das notas da turma
Autor: Yago Mariano Klen
Data de cria��o: 12/04/2020
Data de Modifica��o: 11/11/2022
*/

#include <stdio.h>
#include<locale.h>

main()
{
	
	setlocale (LC_ALL, "Portuguese");

	printf ("\n\n    ------- M�dia das notas da turma: -------\n\n");
	
        int total, count=1;
        float nota, soma=0.0;
        printf("Digite o n�mero de alunos na sala: ");
        scanf("%d",&total);

        while(count<=total)
        {
            printf("Digite a nota do aluno %d: ",count);
            scanf("%f",&nota);
            soma=soma+nota;

            count++;
        }

        printf("M�dia da turma: %.2f", soma/total);
}

