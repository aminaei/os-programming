#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <error.h>
#include <stdlib.h>


int main(void)
{ pid_t pid;
    pid = fork();
    if ( pid == -1 )
    { fprintf(stderr,"error using fork");
        exit(1);
    }
    if ( pid == 0 )
    { printf("The child is running, pid was %d \n",pid);
    }
    else
    { printf("The parent is running, the child pid is %d \n",pid);
    }
    exit(0);
}