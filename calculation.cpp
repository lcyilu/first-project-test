#include <stdio.h>
#include <string.h>

int main()
{
    float a[1000],sum;
    char ch,st[1000];
    int i=1,j,n;
    printf("Enter an expression: ");
    scanf("%f", &a[0]);
    while ( (ch=getchar())!= '\n') {
    	st[i-1]=ch;
        scanf("%f", &a[i]);
        i++;
    }
    n=strlen(st);
    for(i=0;i<n;i++){
    	if(st[i]=='*')
		{
    		n--;
    		a[i]*=a[i+1];
    		for(j=i;j<n;j++){
    			a[j+1]=a[j+2];
    			st[j]=st[j+1];
			}
			i--; 
		}
		else if(st[i]=='/'){
			n--;
    		a[i]/=a[i+1];
    		for(j=i;j<n;j++){
    			a[j+1]=a[j+2];
    			st[j]=st[j+1];
    			i--;
		} 
	}}
	sum=a[0];
	for(i=0;i<n;i++){
		if(st[i]=='+'){
			sum+=a[i+1];
		}
		else if(st[i]=='-'){
			sum-=a[i-1];
		}
	}
    printf("%.2f", sum);
    return 0;
}

