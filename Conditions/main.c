#include <stdio.h>
#include <stdlib.h>
#include <math.h>



 int main()
{

    //Challenge 1 : Affichage Température
      // Temperature();

    //Challenge 2 :  Paire / Impaire
           // PaireOuImpaire();

   //Challenge 3 : Voyelles / constantes
          //  VC();

   //Challenge 4 : The sum of two numbers
           //somme();

   //Challenge 5 : Equation deuxiéme degré
            //ESD();


    //Challenge 7 : Negative ,positive and negative
            //NPN();

   //Challenge 8 : Majescule and miniscule
           // Mm();





  return 0;
}








void PaireOuImpaire(){

int number ;
int result ;

 printf("enter a number :");
 scanf("%i",&number);

 result = number%2;



 if (result==1) {

    printf(" your number is impaire .");
 }
 else {
    printf(" your number is pair .");
 }


}

void Temperature(){

    float Fahrenheit;
    float Celsius;

    printf("enter temperature with Fahrenheit degree: ");
    scanf("%f.2", &Fahrenheit);

    Celsius = (Fahrenheit - 32)/1.8;

    printf("%.2f Celsius  \n",Celsius );

    if (Celsius >= 40){

        printf("its too hot ") ;



    }
    else if ( Celsius <= 22){

        printf(" its too cold") ;}

   else if ( Celsius >= 22 && Celsius <= 37 ){

    printf("its cold");

    }

   else if ( Celsius >= 37 && Celsius <= 40 ) {

    printf (" it is hot");

   }
}

void VC(){


 int character  ;

     printf("Choose a character\n" );
     scanf("%c",&character);

  switch(character)

   {

      case 'a'& 'A'     : {
         printf("Your character is a VOYELLE\n" );
      }
         break;

      case 'e'& 'E' : {
          printf("Your character is a VOYELLE\n");
      }
          break;

      case 'y'&'Y' : {
         printf("Your character is a VOYELLE\n" );
      }
         break;

      case 'u'&'U' : {
         printf("Your character is a VOYELLE\n" );
      }
         break;

      case 'i'&'I' : {
         printf("Your character is a VOYELLE\n" );
      }
         break;

      case 'o'&'O' :
        printf("Your character is a VOYELLE\n");
        break;

      default :

        {
         printf("Your Character is a constant");
        }

  }


}

void somme(){


  int a;
  int b;
  int sum;



    printf("enter the first value a:\n");
    scanf("%i",&a);

    printf("enter the second value b:\n");
    scanf("%i",&b);

   sum=a+b;



    if (a==b)
    {
        printf("%i",sum*3);
    }

    else
        printf("%i",a+b);

}

void ESD(){


  int a,b,c,delta;
  float X1,X2;

     printf("enter the value of a:\n");
     scanf("%f",&a);

      printf("enter the value of b:\n");
     scanf("%f",&b);

      printf("enter the value of c:\n");
     scanf("%f",&c);


      delta=(b*b) - (4*a*c);

     if (delta<0)
        {
        printf("\t there is no slution \n");

        }
        else if (delta>0)
        {
            X1=-b-sqrt(delta)/2*a;
            X2=b+sqrt(delta)/2*a;

            printf("the slution X1 = %.2f \n",X1);
            printf("the slution X2 = %.2f \n",X2);
        }
     else
     {
         X1=-b/2*a;
         printf("the solution X1 = %.f \n",X1);
     }


}

void NPN(){

      int number;

            printf("Choose a number:\n");
            scanf("%i",&number);

        if (number>0)
        {
            printf("your number is positive .");
        }
           else if (number<0)
           {
               printf("your number is negative .");
           }

        else
            {
            printf("your number is null .");
        }

}

void Mm (){

             char character;

            printf("%d",character);

        printf("Enter a character :");
        scanf("%c",&character);

         printf("ASCII value of %c = %d \n", character, character);

  if (character >= 'A'&& character <= 'Z')
  {
      printf("your character is MAJESCULE.");
  }

  else
  {
      printf("your character is minuscule.");
  }
  return 0 ;


}












