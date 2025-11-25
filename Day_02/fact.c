#include <stdio.h>

int factorial(int nb) {
    if (nb < 0) return 0;      
    if (nb == 0 || nb == 1) return 1; 
    return nb * factorial(nb - 1); 
}
int main (){
    int nb ,result;
     printf("print nb");
     scanf("%d",&nb);
result=factorial(nb);
printf("the fact of %d is %d",nb,result);
return 0 ;

}