#include <iostream>
using namespace std;

int main() {int num;
scanf("%d",&num);
getchar;
for(int i=0;i<num;i++){int size;
scanf("%d",&size);
getchar();
char str1[size+1];
char str2[size+1];
scanf("%s",str1);
scanf("%s",str2);
	int count=0;
	for(int j=0;j<size;j++){
	    if(str1[j]!=str2[j]){
	        count++;
	    }
	}
	if(count%2==0)
	printf("1\n");
	else
	printf("0\n");
}
	return 0;
}
