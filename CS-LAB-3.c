Program Description:This lab will calculate they tax rate, tax owed and the difference between the two years



#include<stdio.h>
#include<math.h>
#define RANGEA 8700    //INDIVIDUAL INCOME RANGE BELOW 8700
#define RANGEB 35350   //INDIVIDUAL INCOME RANGE 35350 - 84999
#define RANGEC 85000   //INDIVIDUAL INCOME RANGE 85000 - 178649
#define RANGED 178650  //INDIVIDUAL INCOME RANGE 178650 - 388349
#define RANGEE 388350  //INDIVIDUAL INCOME RANGE ABOVE 388350

int main()
{
 //VARIABLES
 float tincome;    //TAXABLE INCOME
 float trate;      //2012 TAX RATE
 float towed;      //2012 TAX OWED
 float newtrate;   //2013 TAX RATE
 float newtowed;   //2013 TAX OWED
 float difference; //DIFFERENCE BEWTWEEN 2013 TAX OWED AND 2012 TAX OWED

 //STATEMENTS
 printf("Enter amount of taxable income: ");
 scanf("%f", &tincome);

 trate = 10 + 5 * (((int)(tincome / RANGEA) + 2) % ((int)(tincome / RANGEA) + 1));
 trate += 10 * (((int)(tincome / RANGEB) + 2) % ((int)(tincome / RANGEB) + 1)); 
 trate += 3 * (((int)(tincome / RANGEC) + 2) % ((int)(tincome / RANGEC) + 1));
 trate += 5 * (((int)(tincome / RANGED) + 2) % ((int)(tincome / RANGED) + 1));
 trate += 2 * (((int)(tincome / RANGEE) + 2) % ((int)(tincome / RANGEE) + 1));
 towed = tincome * (trate / 100);
 newtrate =  15  + 13 * (((int)(tincome / RANGEB) + 2) % ((int)(tincome / RANGEB) + 1));
 newtrate += 3 * (((int)(tincome / RANGEC) + 2) % ((int)(tincome / RANGEC) + 1));
 newtrate += 5 * (((int)(tincome / RANGED) + 2) % ((int)(tincome / RANGED) + 1));
 newtrate += 3.6 * (((int)(tincome / RANGEE) + 2) % ((int)(tincome / RANGEE) + 1));
 newtowed = tincome * (newtrate / 100);
 difference = newtowed - towed;

 printf("\nTaxable Income: $ %.2f",tincome);
 printf("\n2012 Tax Rate: %.1f%%",trate);
 printf("\n2012 Tax Owed: $ %.2f",towed);
 printf("\n2013 Tax Rate:  %.1f%%",newtrate);
 printf("\n2013 Tax Owed: $ %.2f\n",newtowed);

 printf("\nDifference:  $ %.2f\n",difference);

 return(0);
}

