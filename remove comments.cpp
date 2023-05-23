#include <bits/stdc++.h>
using namespace std;

void check_comment (char) ;
void block_comment () ;
void single_comment () ;


FILE *fp ,*fpp;

int main(void)
{
    char c;
    fp = fopen ("iiuc.txt","r") ;
    fpp = fopen ("mynewfile.txt","w") ;
    while((c=fgetc(fp))!=EOF)
        check_comment(c);
    fclose(fp);
    fclose(fpp);

    return 0;
}

void check_comment(char c)
{
    char d;

    if( c == '/')
    {
        if((d=fgetc(fp))=='*')
         block_comment();

        else if( d == '/')
        {
          single_comment();

        }
        else
        {

            fputc(c,fpp);
            fputc(d,fpp);
        }
    }

    else
        fputc(c,fpp);
}

void block_comment()
{

 char d,e;

    while((d=fgetc(fp))!=EOF)
    {

        if(d=='*')
        {
            e=fgetc(fp);

            if(e=='/')
                return;
        }
   }

}

void single_comment()
{
 char d,e;

    while((d=fgetc(fp))!=EOF)
    {

        if(d=='\n')
            return;
    }

}
