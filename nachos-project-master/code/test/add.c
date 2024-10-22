/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int result;
    int result2;
    int i,j;
    result = Add(42, 23);
    result2= Multiply(100,2);
    //for(i=0;i<100000;i++)
    //{
//	    for(j=0;j<100;j++){
//		    result2=Multiply(1,10);
//	 }
 //   }
   // Sleep(9000);
    //PrintNum(result2);
    //Halt();
   for( i=0;i<5000;i+=1){
             // for(i=0;i<400000;i++);
              PrintString("d");
      }


    /* not reached */
}
