/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;
    int i;
    int pid2;
    pid = Exec("../test/num_io", 2);
    pid2= Exec("../test/add", 3);
    if (pid < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
    } 
    Wait_pid(pid);
    //else
      //  Join(pid);
      for(i=0;i<5000;i+=1){

	     // for(i=0;i<400000;i++);
	      PrintString("e");
      }

}
