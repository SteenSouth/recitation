/* CS261- Assignment 1 - Q. 0*/
/* Name: Jesus Narvaez
 * Date: 9/28/2106
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>

int fooB(int* a, int* b, int c){
	c = *a + *b;
	*a = *b;
	*b = *b + *b;
	return c;
}


void fooA(int* iptr){
printf("The value is: %d \n", *iptr);
	 printf("The address pointed to by iptr is: %p \n", *iptr);
	 printf("The address of iptr is: %p \n", iptr);
}

int main(){
    
    /*declare an integer x*/
  int x;
  x = 6;
  /* int y, z, h;
  x = 7;
  y = 3;
  z = 6;
  h = foob(&x, &y, z);
*/
    /*print the address of x*/
    printf("The address of x is: %p \n", &x);
    /*Call fooA() with the address of x*/
    fooA(&x);
    /*print the value of x*/
	
    return 0;
}
