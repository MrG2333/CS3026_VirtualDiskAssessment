#include "filesys.h"
#include <stdio.h>

int main()
{

    format();
    mymkdir("/myfirstdir/myseconddir/mythirddir");
    char ** list = mylistdir("/myfirstdir/myseconddir");

    for(int i = 0; list[i]!=NULL;i++ ) printf(" mylistdir list: %s ",list[i]);
    free(list);

    writedisk("virtualdiskB3_B1");

return 0;
}
