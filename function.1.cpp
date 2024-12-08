#include<stdio.h>
int factorial(int x){
	int fact=1;
	for(int i=1;i<=x;i++){
		fact=fact*i;
		
	}
	return fact;
}
int main(){
	int n,m;
	printf(" n \n");
	scanf("%d",&n);
	printf(" m \n");
	scanf("%d",&m);
	int nfact=factorial(n);
		int mfact=factorial(m);
			int ncmfact=factorial(n-m);
			int ncr=nfact/(mfact*ncmfact);
			printf("%d",ncr);
			return 0;
}
