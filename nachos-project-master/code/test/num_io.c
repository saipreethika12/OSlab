/* num_io.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a syscall that read an interger and print it
 *
 */

#include "syscall.h"

int main() {
       //	PrintNum(ReadNum());
       int i;
       int pid3;
       int pid1;
     
      
      
  
       //while(1){
       for(i=0;i<10000;i++){
	      // for(i=0;i<200000;i++);
             PrintString("num_io ");
       }
       return 0;
}
