/* Programa: Média das notas da turma
Autor: Yago Mariano Klen
Data de criação: 12/04/2020
Data de Modificação: 11/11/2022
*/

#include <stdio.h>
#include<locale.h>

main()
{
	
	setlocale (LC_ALL, "Portuguese");

	printf ("\n\n    ------- Média das notas da turma: -------\n\n");
	
        int total, count=1;
        float nota, soma=0.0;
        printf("Digite o número de alunos na sala: ");
        scanf("%d",&total);

        while(count<=total)
        {
            printf("Digite a nota do aluno %d: ",count);
            scanf("%f",&nota);
            soma=soma+nota;

            count++;
        }

        printf("Média da turma: %.2f", soma/total);
}

