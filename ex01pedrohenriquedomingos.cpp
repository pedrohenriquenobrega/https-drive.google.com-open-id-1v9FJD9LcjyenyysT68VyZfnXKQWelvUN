#include <stdio.h>
	int main ()
		{
	 float nota1, nota2, nota3, nota4, media;
	 printf ("Digite o primeiro valor \n");
	 scanf ("%f", & nota1);
	 
	 printf ("Digite o segundo valor \n ");
	 scanf ("%f", & nota2);
	 
	 printf ("Digite o terceiro valor \n");
	 scanf ("%f", & nota3);
	 
	 printf ("Digite o quarto valor \n");
	 scanf ("%f", & nota4); 
	 
	 media= (nota1 + nota2 + nota3 + nota4) / 4;
	 
	 printf ("A media dos numeros e %f ", media) ;
	 
	
	  if (media >=6) 
	 printf ("Aprovado");
	 
	 
	 else 
	 
	 printf ("reprovado");
	 
	 }
	
	
	
	
