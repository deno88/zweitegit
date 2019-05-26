#include <stdio.h>



int main(){


int i;
int d[5]={9,3,5,1,4};

size_t n = sizeof(d)/sizeof(d[0]);

int count =1;
while(count <= 3){

int hilfsvariable = d[n-1];

//printf("%d\n",d[n]);

for( i =n-1; i>0; i--){
d[i]=d[i-1];

}

d[0]=hilfsvariable;

for(i=0; i<n; i++){
printf("ausgabe %d \n",d[i]);

}
printf("\n");
count++;
}



return 0;

}
