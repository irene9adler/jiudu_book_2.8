//¾Å¶È 2.8 ¹şÏ£Ó¦ÓÃ
#include <stdio.h>
#define M 1000

int main()
{
   int n;
   int grade[M];
   int Hash[100] = {0};
   while(scanf("%d",&n)!=EOF)
 {
   int i;
   int x;
   int res;
   for(i=0;i<n;i++)
   {
       x = grade[i];
       scanf("%d",&x);
       Hash[x] ++;
   }
   scanf("%d",&res);
   printf("%d\n",Hash[res]);
 }
   return 0;
}
