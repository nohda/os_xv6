#include "types.h"				
#include "stat.h"				
#include "user.h"				

//getnice 20213090
int						
main(int argc, char const *argv[])			
{						
  int pid = 0;					
  int nice = 0;					

  if(argc < 2)					
  {						
    printf(2, "Usage : getnice pid\n");		
    exit();					
  }						
  pid = atoi(argv[1]);				
 
  if(pid != 0){					
    nice = getnice(pid);			
  }						

  if(nice == -1)				
  {						
    printf(2, "Invalid pid!\n");
    exit();					
  }						

  printf(1, "pid : %d\tnice : %d\n", pid, nice);
  exit();					

}						
