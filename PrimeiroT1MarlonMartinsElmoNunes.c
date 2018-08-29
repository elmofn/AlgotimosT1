#include <stdio.h>
int main(void)
{
/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação - Algoritmos
*
* Programa PrimeiroT1:
* -------------------
* Objetivo do Programa: Calcular a quantidade de quilowatts e o valor a ser pago por uma residencia. 
* Componentes do grupo: Elmo Nunes e Marlon Martins
* Data de entrega do arquivo fonte: 29/08/2018
*/

  float salarioMin = 954.00,kwprice,kwconsumeprice,kwconsumeupprice,kwconsume,kwconsumeup,kwoff1,kwoff2; //kwprice= preço por Kilowatts -- kwconsume= quantidade em Kilowatts consumida
  														//kwoff=desconto de 13,5% 

  kwprice = salarioMin / 6;

  
  printf("***************************************\n");
  printf("**>Calculadora de Consumo de Energia<**\n");
  printf("***************************************\n");
   
  printf("O valor de cada Kilowatt eh: %.2f\n",kwprice);
  printf("\nA partir deste valor este programa calcula valores referentes ao seu consumo mensal.\n");
  
  printf("\n\nDigite a quantidade de quilowatts consumidos: ");
  	scanf("%f",&kwconsume);
  		kwconsumeprice=kwprice*kwconsume;
  printf("\nValor a ser pago: %.2f\n",kwconsumeprice);
  		kwoff1=kwconsumeprice-(kwconsumeprice*0.13);
  		kwoff2=kwoff1-(kwoff1*0.005);
  printf("Valor a ser pago com 13.5 por cento de desconto: %.2f",kwoff2);
  		kwconsumeup=kwconsume*1.17;
  		kwconsumeupprice=kwconsumeup*kwprice;
  printf("\nConsiderando um aumento de 17 por cento no consumo, O valor a ser pago eh: %.2f",kwconsumeupprice);
  
}
