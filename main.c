#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
    FILE * fp;
    FILE * rfp;
    char line [150];
    fp =fopen("testile.txt","w+");
    fprintf(fp,"this is text1\n");
    fseek(fp,10,SEEK_SET);
       fprintf(fp,"this is text2\n");
       fclose(fp);
        rfp =fopen("testile.txt","w+");
          fputs("this is text3\n",fp);
          fseek(fp,-9,SEEK_END);
          fprintf(fp,"this is text4");
    fclose(fp);
    rfp=fopen("testile.txt","r");

    while(!feof(rfp))
    {
        fgets(line,150,rfp);
        puts(line);

    }
    fclose(rfp);

    return(0);

}
