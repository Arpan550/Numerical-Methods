#include<stdio.h>

int main(){
	int x[4],y[4];
	int i,j,n;
	float total=0, u=1, v=1;
	printf("Enter the value of x::\n");
	for(i=0;i<4;i++){
		printf("X[%d] : ", i);
		scanf("%d",&x[i]);
	}
	printf("\nEnter the value of y::\n");
	for(i=0;i<4;i++){
		printf("Y[%d] : ", i);
		scanf("%d",&y[i]);
	}
	printf("\nTABLE::\n");
	printf("X: ");
	for(i=0;i<4;i++){
		printf("%d\t", x[i]);
	}
	printf("\nY: ");
	for(i=0;i<4;i++){
		printf("%d\t", y[i]);
	}
	 
	printf("\nEnter the value for which you want to calculate: ");
	scanf("%d", &n);
	for(i=0;i<4;i++){
		u=1;
		v=1;
		for(j=0;j<4;j++){
		  if(i!=j){
	            u *=(n-x[j]);
				v *=(x[i]-x[j]);
	      }
	    }
		total +=(u/v)*y[i];
	}
	
	printf("\nAns.. %.2f", total);
	return 0;
}
