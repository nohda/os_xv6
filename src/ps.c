#include "types.h"			
#include "stat.h"			
#include "user.h"			

//ps 20213090
int 						
main(int argc, char const *argv[])	
{					
  int pid;				
  pid = 0;				
  if(argc < 1)				
  {					
    printf(2, "Usage : pid\n");		
    exit();				
  }					
  pid = atoi(argv[1]);			

  if(pid >= 0){				
    ps(pid);				
    if(pid != 0){			
      printf(1, "pid : %d\n", pid);	
    }					
    exit();				
  }					
}					

