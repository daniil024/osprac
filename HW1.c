#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("User Id = %d\n", getuid());
    printf("Group Id = %d", getgid());
    return 0;
}
