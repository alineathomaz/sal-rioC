#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float salario, inss, ir, sal_liquido;
	
	printf("Digite seu salario bruto\n");
	scanf("%f", &salario);
	
	if(salario <= 1693.72)
	{
		inss = salario * 0.08;
		ir = 0;
	}
	else if (salario >=1693.73 && salario <= 1903,98)
	{
		inss = salario * 0.09;
		ir = 0;
	}
	else if(salario >= 1903.99 && salario <= 2822.90)
	{
		inss = salario * 0.09;
		ir = salario * 0.075;
	}
	else if(salario >=2822.91 && salario <= 2826.65)
	{
		inss = salario * 0.11;
		ir = salario * 0.075;
	}
	else if(salario >= 2826.66 && salario <= 3751.05)
	{
		inss = salario *0.11;
		ir = salario * 0.15;
	}
	else if(salario >= 3751.06 && salario <= 4664.68)
	{
		inss = salario * 0.11;
		ir = salario * 0.225;
	}
	else if(salario >= 4664.69 && salario <= 5646.80)
	{
		inss = salario * 0.11;
		ir = salario * 0.275;
	}
	else
	{
		inss = 621.04;
		ir = salario * 0.275;
	}
	
	sal_liquido = (salario - inss) - ir;
	
	printf ("\n Desconto INSS: %f\n", inss);
	
	printf ("\n Desconto IR: %f\n", ir);
	
	printf ("\n Salario liquido %2.f\n", sal_liquido);
	
	return 0;
}