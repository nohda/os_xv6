#include "types.h"
#include "stat.h"
#include "user.h"


//ps 20213090
int
main(int argc, char const *argv[])
{
  int k,n,id;
  double x = 0,z,d;

  if(argc < 2)
    n=1;
  else
    n  = atoi(argv[1]);
  if( n < 0 || n > 40)
    n = 2;

  if(argc < 3)
    d = 1.0;
  else
    d = atoi(argv[2]);

  x = 0;
  id = 0;

  for(k=0;k<n;k++){
    id = fork();
    if(id<0){
      printf(1,"%d failed in fork!\n", getpid());
    }
    else if(id >0){
      printf(1,"Parent %d creating child %d\n", getpid(),id);
      wait();
    }
    else{
      printf(1,"Child %d created\n",getpid());
      for(z = 0; z<8000000.0; z+=d)
        x = x+3.14 * 89.64;
      break;
    }
  }
  exit();
}
 
