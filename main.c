//aldrarjh ahmad ID 208727354
#include <stdio.h>
int main() {
  int arr [3],i,j,k,index,sum=0,index1,sum1=0,y,y1,max,k1;
  int z1,z,sum2=3,c;
  
  
  printf("please enter 3 numbers ");
  printf("\n");
  
  for(i = 0; i <3; i++)
  {
      printf("The number in the array is :");

    scanf("%d",&arr[i]);

  }
  	
   
   
  for(i=0; i<2; ++i) 
		for(j=i+1; j<3; ++j)
			if(arr[i] > arr[j]) {
				int t = arr[i]; 
				arr[i] = arr[j]; 
				arr[j] = t; 
			}
	printf("The numbers you have entered (by increasing order): "); 
	for(i=0; i<3; ++i)
		printf("%d, ",arr[i]); 
   printf("select 1-I or 2-YOU or 3-EXIST :");
     scanf("%d",&k);
     k1=k;
     if(k1==3){
       printf("thanks");
     }
      while(sum2>1&&(k1==1||k1==2)){
    sum2=0;
          for(i = 0; i <3; i++){
             sum2=sum2+arr[i];
          }
         if(k1==1){ 
  index=0;
            printf("it is my toren 😀");
            printf("\n");
            sum1=0;
            max=0;
             for(i=0;i<3;i++){
               sum1=sum1+arr[i];
               if(max<arr[i]){
                 max=arr[i];
                 index=i;
               }
             }
             
             c=0;
               for(i=0;i<3;i++){
                 if(arr[i]==0){
                   c++;
                 }
               } 
                   if(c==1){
                   arr[index]=0;
                 }
                 if(c==2){
                   if(arr[index]>1){
                     arr[index]=1;
                   }   else{
                   arr[index]=0;
                 }
                 }
              
  
                 if(c==0){
                 arr[index]=sum1-max;
                 if(arr[index]>=max){
                   arr[index]=0;
                 }
               }
               
               for(i=0; i<3; ++i){
	            	printf("%d, ",arr[i]); 
               }
               printf("\n");
               k1=2;
         }  
         
       //player wenner
         sum1=0;
        for(i=0;i<3;i++){
               sum1=sum1+arr[i];
               }
           if(sum1==0){
               printf("YOU WIN");
               break;
               sum2=0;
             }
         
        if(k1==2&&sum1!=0){
          printf("it your toren 😀");
                           printf("\n");
            printf("please state how much to take ?");
              scanf("%d",&y);   
              scanf("%d",&z);
              y1=y;
              z1=z;
                    while(z1>y1||z1==y1){
                      printf("please state how much to take ?");
                          scanf("%d",&y);   
                          scanf("%d",&z);
                         y1=y;
                        z1=z;
          }
                    printf("%d to",y1);
                   printf("%d",z1);
                    printf("\n");
              for(i=0;i<3;i++){
                if(arr[i]==y1){
                  arr[i]=z1;
                  break;
                }
              }
              printf("\n");
              for(i=0;i<3;i++){
                	printf("%d, ",arr[i]); 
              }
              sum1=0;
              for(i=0;i<3;i++){
                sum1=sum1+arr[i];
              }
              if(sum1==0){
                printf("Game Over-You Lost");
                sum2=0;
              }

        }
                    k1=1;

      }
     
      
      
  return 0;
}