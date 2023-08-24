#include<stdio.h>
int main(){
    
 int tea,coffee,biscuits;  
 int Tprise=15,Cprise=25,Bprise=10;
 
 printf("Welcome to Tasty Treats Cafe!\n");
 printf("How many cups of tea would you like to order? :\n");
 scanf("%d",&tea);
 
 printf("How many cups of coffee would you like to order? :\n ");
 scanf("%d",&coffee);
 
 printf("How many biscuits would you like to order? :\n ");
 scanf("%d",&biscuits);
 
 printf("%d cup of tea\n",tea);
 printf("%d cup of coffee\n",coffee);
 printf("%d biscuits\n",biscuits);
 
 int ToTea=tea*Tprise;
 int ToCoff= coffee *Cprise;
 int ToBis = biscuits * Bprise;
 
 int total = ToTea + ToCoff + ToBis;
 printf("Total Bill Amount : %d",total);
 
 
    
    return 0;
}
