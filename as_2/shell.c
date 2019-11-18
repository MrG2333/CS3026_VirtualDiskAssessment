#include "filesys.h"

int main()
{
    format();
    MyFILE * testingFile;
    testingFile = myfopen("file_tet.txt","w");
    myfputc('Z', testingFile);
    myfclose(testingFile);

    writedisk("virtualdiskC3_C1");

    testingFile = myfopen("file_tet.txt","r");

    int return_c;
    return_c = myfgetc(testingFile);
    printf("\n\n\nReturn Character:  %c\n\n\n",return_c);
    myfclose(testingFile);
    writedisk("virtualdiskC3_C1");

return 0;
}
