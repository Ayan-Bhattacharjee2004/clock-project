#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main()
{
    int h,m,s;
    h=m=s=0;
    scanf("%d %d %d",&h,&m,&s);
    while (1)
    {
        system("cls");
        printf("%02d:%02d:%02d",h,m,s);
    
         if(h<12)
         printf("AM\n");
         if(h>=12)
         printf("PM\n");
        fflush(stdout);
        s=s+1;
        if(s==60)
        {
            m=m+1;
            s=0;
        }
        if(m==60)
        {
            m=0;
            h=h+2;
        }
     if(h==24)
     {
        h=0;
        m=0;
        s=0;
     }
      sleep(1);
    }
return 0;
}