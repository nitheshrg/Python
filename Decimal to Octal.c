#include <stdio.h>
void oct(long int c){
    long int r[100];
    int i,l;
    i=l=0;
    while(c>0){
        r[i]=c%8;
        c=c/8;
        i++;
        l++;
        for(int k=l-1;k>=0;k--){
            printf("%ld",r[k]);
        }
    }
}
int main() {
	int a;
	scanf("%d",&a);
	oct(a);
	return 0;
}
