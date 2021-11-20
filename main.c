#include <stdio.h>
#include <stdlib.h>

int main()
{



     // Challange 1 :  Affichage Informations

          //info ();

     // Challenge 2 : Conversion du °C au °F

         //ConverterC2F();


     // Challenge 3 : Conversion du Mile au Km

        // ConversionK2M();


     // Challenge 4 : Conversion du Mile au Km

        //ConversionMile2Metter();

    // Challenge 5 : Affichage Temperature

       //TemperatureF2C();

    // Challenge 7 : Calcule et affichage resultat en format decimal

        // decimal();

    // Challenge 8 : Moyenne et somme de 4 nombres

       // Moyenne();

    // Challenge 9 : Distance entre deux points

        // distance();

     // Challenge 10 : Circonférence d'un cercle

         // cercle();

    // Challenge 11 : Circonference d un rectangle

        //rectangle();

    //Challenge 12 : Nombre entier à trois chiffres en ordre inverse

        //reverse();


    return 0;
}



int info(){
char firstname[23];
	char lastname[33];
	int age;
	char Sex[11];
	char phoneNumber[19];

	printf("Welcom to my Programme in C :) \n\n\n");

	printf(" Enter the first name : ");
	scanf("%s", firstname);

	printf(" Enter the last name : ");
	scanf("%s", lastname);

	printf(" Enter your age : ");
	scanf("%i", &age);

	printf(" Enter your Sex : ");
	scanf("%s", Sex);

	printf( " Enter your Number phone : ");
	scanf("%s", phoneNumber);

	//affichage des informations
	printf("Hi %s %s your age is %d, your Sex is : %s and your phone number is : %s", firstname, lastname, age, Sex, phoneNumber);
	return 0;



}

int ConverterC2F(){
    float Fahrenheit,Celsius;

    printf("enter temperature with celsius degree: ");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", Celsius, Fahrenheit);
    return 0;
}

int ConversionK2M(){




  float Metter ;
   float Km ;
   float Mile ;


        printf(" Enter the distance by Metter : ");
        scanf( "%f",&Metter   );
        Km = Metter/1000 ;
        Mile =Km*1.609 ;
        printf("  the results : %f Mile ",Mile );

   return 0;




}
int ConversionMile2Metter(){

  float Metter ;
   float Km ;
   float Mile ;

        printf(" Enter the distance by Mile : ");
        scanf( "%f",&Mile   );

            Km = Mile/1.609;
            Metter = Km*1000;


        printf("  the results : %f Metter ",Metter );

   return 0;








    }

int TemperatureF2C(){





    float Fahrenheit;
    float Celsius;

    printf("enter temperature with celsius degree: ");
    scanf("%f", &Fahrenheit);

    Celsius = (Fahrenheit - 32)/1.8;

    printf("%.2f Fahrenheit  = %.2f Celsius\n", Fahrenheit,Celsius);

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












    return 0;


}

int decimal() {
	int a, b;

	printf("Bonjour dans le programme de calcule en C :) \n \n \n");

	printf("Entrer la valeur de a : ");
	scanf("%d", &a);
	printf("Entrer la valeur de b : ");
	scanf("%d", &b);

	printf("%d + %d = %d \n", a, b, a + b);
	printf("%d - %d = %d \n", a, b, a - b);
	printf("%d x %d = %d \n", a, b, a * b);
	printf("%d / %d = %g \n", a, b, (float) a / b);
	printf("%d Mod %d = %d \n", a, b, a % b);

	return 0;
}

int Moyenne(){

	float n1, n2, n3, n4;

	printf("ce programme calcule la Moyenne et la somme de 4 nombres :) \n \n \n");

	printf("Entrer la valeur de Nombre 1 : ");
	scanf("%f", &n1);

	printf("Entrer la valeur de Nombre 2 : ");
	scanf("%f", &n2);

	printf("Entrer la valeur de Nombre 3 : ");
	scanf("%f", &n3);

	printf("Entrer la valeur de Nombre 4 : ");
	scanf("%f", &n4);

	printf("la somme : %g  \n", n1 + n2 + n3+ n4);

	printf("la moyenne : %g", (n1 + n2+ n3+ n4) / 4);

	return 0;
}

int distance(){

	int Ax, Ay, Bx, By;
	float AB;

	printf("ce programme calcule la distance entre les poitns A et B :) \n");

	printf("Entrer la valeur de Ax : ");
	scanf("%d", &Ax);
	printf("Entrer la valeur de Ay : ");
	scanf("%d", &Ay);

	printf("Entrer la valeur de Bx  : ");
	scanf("%d", &Bx);
	printf("Entrer la valeur de By  : ");
	scanf("%d", &By);

	AB = sqrt( pow((Bx-Ax), 2) + pow((By-Ay), 2));
	printf("la distance est : %g", AB);

	return 0;
}

int cercle() {

	int rayon;
	const float Pi = 3.14;

	printf("Bonjour dans le programme qui calcule le Circonference d\'un cercle :) \n \n \n");

	printf("Entrer le valeur de rayon : ");
	scanf("%d", &rayon);

	printf("Circonference du cercle avec le rayon : %d est : %.2f", rayon, (float)  Pi * (rayon * rayon));

	return 0;
}

int rectangle() {

	int longueur, largeur;

	printf("Bonjour dans le programme qui calcule Circonference d\'un rectangle :) \n \n \n");

	printf("Entrer la valeur de la longueur : ");
	scanf("%d", &longueur);

	printf("Entrer la valeur de la largeur : ");
	scanf("%d", &largeur);

	printf("La circonference du rectangle est : %d", 2 * (longueur + largeur));

	return 0;
}

int reverse(){


    // initialize the character chain
    char s[] = "initialise string ";
    //initialize the incrementation var
    int i;
    //initialize lenght thaw will take the leghnt of the array
    int lenght;

    printf("Please insert something :\n ");

    scanf("%s", &s);

    //how many cell in the array (character chain)
    for (lenght = 0; s[lenght] != '\0'; ++lenght);


    printf("The result is : ");

    //reversing by printing from the last position of the array to the first one
    //using (lenght - i) i : is incremented.
    for (i = 1; i <= lenght ; ++i){

        printf("%c",s[lenght - i] );
    };
    return 0;
}


