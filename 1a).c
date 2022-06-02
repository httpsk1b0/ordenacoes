#include <stdio.h>
#include <stdlib.h>

int main (){

int i, a, cont, v[10] = {33, 71, 75, 10, 29, 55, 74, 73, 65, 19};


printf("números a serem ordenados:\n");
//exibindo números do vetor
for (i = 0; i < 10; i++)
{
    printf("%4d", v[i]);
}

printf("\nordenando os números:\n");

//bubblesort

//contador que percorre o vetor
for (cont = 0; cont < 10; cont++)
{
    /*índice igual a zero até índice menor que o vetor - 1, emplementando +1 no índice 
    (vetores sempre começam a contar do zero,
    por isso um vetor de tamanho 10 teria espaços de 0 até 9)*/
    for (i = 0; i < 9; i++)
    {
    /*se o valor que estiver no espaço que o índice aponta
    no vetor for maior que o valor do espaço seguinte*/
    if (v[i] > v[i+1])
        {
    //armazenar o valor ocupado do espaço ocupado apontado pelo índice em uma variável
        a = v[i];

    //colocar o valor do espaço seguinte no espaço do vetor apontado pelo índice
        v[i]= v[i+1];

    //colocar o valor armazenado dentro do espaço seguinte
        v[i+1]= a;

    
        }
 
    }
}

//print
for (i = 0; i < 10; i++)
{
    printf("%4d", v[i]);
}

}