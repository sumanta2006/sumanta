/*write a c program to check whether a character is a vowel or consonant using switch case*/

#include <stdio.h>
int main() 
{
    char ph;
    printf("Enter a character: ");
    scanf(" %c", &ph);
    switch(ph)
   {
     case'a':
     printf("The character %c is a vowel.\n", ph);
     break;
     case'e':
     printf("The character %c is a vowel.\n", ph);
     break;
     case'i':
     printf("The character %c is a vowel.\n", ph);
     break;                              
     case'o':
     printf("The character %c is a vowel.\n", ph);
     break;
     case'u':
     printf("The character %c is a vowel.\n", ph);
     break;
      case'A':
     printf("The character %c is a vowel.\n", ph);
     break;
     case'E':
     printf("The character %c is a vowel.\n", ph);
     break;
     case'I':
     printf("The character %c is a vowel.\n", ph);
     break;                              
     case'O':
     printf("The character %c is a vowel.\n", ph);
     break;
     case'U':
     printf("The character %c is a vowel.\n", ph);
     break;
     default:
     printf("The character %c is a consonant.\n", ph);
   }
    return 0;
}