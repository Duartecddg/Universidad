#include <stdio.h>

using namespace std;
int num=0;
int expo=0;
int suma=0;
int result=1;
int exponente(int num)
{
    if(num ==0 && expo ==0)
    {
        return 0;
    }else
    {
         
        result = result * num;
      
          return result;
    }
  
}
int main()
{
    int r =0;
    printf("ingrese un valor positivo");
    scanf("%d",&num);
    printf("ingrese un el exponente");
    scanf("%d",&expo);
    for(int i =0; i<expo;i++){
        
    
r = exponente(num);
printf("paso %d (r = %d )\n",i,r);

}
printf("resultado es = %d",r);
    

    return 0;
}