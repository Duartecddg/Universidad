#include <stdio.h>

using namespace std;

int expo=0;
int suma=0;
int num=5;


int exponente(int num)
{
    if(num ==0)
    {
        return 0;
    }else
    {
       
     num =  num * 3;
          return num;
    }
  
}


int main()
{
    int r =0;

printf("{5,");
    for(int i =0; i<10;i++){
        
  
r = exponente(num);
printf("%d,",r);
 num = r;
}
printf("resultado es = %d",r);
    

    return 0;
}