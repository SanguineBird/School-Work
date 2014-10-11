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
  bool found = false;
  char array[] = "This is a string!";
  char array2[] = "And here is another.";
  int i = 0;
  
  /*While(! mystery()){
    printf("%d", *array[i]);
    i++;
  }*/
  
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
Each time the for loop iterates, both points are incremented to the next location in anarray.
The if statment ensures that *s1 and *s2 do not reference the same location in the same array.
The function returns zero if this condition is met.
When the loop is completed, the function returns one.
This function compares pointers which reference two locations in the same array. It returns the value 0 until it finds the end of the string. Then, it returns the value 1. These return values probably control a boolean variable.*/
