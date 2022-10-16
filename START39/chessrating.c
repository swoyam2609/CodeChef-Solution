#include <stdio.h>
int main(void) {
	// your code goes here
     int x,y,t,n;
     scanf("%d",&t);
     while(t--) {
         scanf("%d %d",&x,&y);
         n=(y-x)/8;
          if((y-x)%8==0) {
               printf("%d\n",n); }
          else {
                 printf("%d\n",n+1); }
     }
    return 0;
}
