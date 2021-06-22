#include "types.h"				
#include "stat.h"				
#include "user.h"				

//setnice 20213090
int						
main(int argc, char const *argv[])		
{						
  int pid = 0;					
  int nice = 0;					

  if(argc < 3)					
  {						
    printf(2, "Usage : setnice pid nice\n");	
    exit();					
  }						
  pid = atoi(argv[1]);				
  nice = atoi(argv[2]);				

  if(nice < 0 || nice > 40)			
  {						
    printf(2, "Invalid nice value(0-40)!\n");	
    exit();					
  }						

  setnice(pid,nice);				
  exit();					

}						

