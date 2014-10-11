// Meghan Moore, CIT-145-BIN1
// October 11, 2014
// Compiler: Orwell Dev-C++
// Assignment 6, Chapter 7
//Purpose: Implement a test program
//and describe what the mystery function does.

#include <stdio.h>
#include <stdlib.h>

int mystery( const char *s1, const char *s2 );

int main(void){
  char array1[] = "This is a string!";
  char array2[] = "And here is another.";
  char string1[] = "This is a string!";
  char string2[] = "And here is another.";
  int i = 0;
  int compare;
  
  printf("Compare array1: %s\n to array2: %s", array1, array2);
  compare = mystery(array1, array2);
  if(compare == 0){
    printf("The strings are identical.");
  }
  else if(compare == 1){
    printf("The strings are not identical.");
  }
  

  printf("Compare array1: %s\n to string1: %s", array1, string1);
  compare = mystery(array1, string1);
  if(compare == 0){
    printf("The strings are identical.");
  }
  else if(compare == 1){
    printf("The strings are not identical.");
  }
  
  system("pause"); return 0;
}


int mystery( const char *s1, const char *s2 )
{
  for( ; *s1 != '\0' && *s2 != '\0'; s1++, s2++ ) {
    if( *s1 != *s2 ) {
     return 0;
    }//end if
  }//end for
  return 1;
}

/*The mystery function takes two arguments as costant points of the char type.
The for loop in this function has no initialization statement.
The for loop will run as long as neither *s1 nor *s2 equal the null character which indicates the end of a string.
Each time the for loop iterates, both points are incremented to the next location in an array.
The if statment ensures that *s1 and *s2 do not reference the same value.
The function returns zero if this condition is met.
When the loop is completed, the function returns one.
This function compares pointers which reference two array locations. It returns the value 0 until it finds the end of the string. Then, it returns the value 1.*/
