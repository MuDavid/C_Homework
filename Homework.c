#include <stdio.h>

int bitcheck(int number){

    int new = (number >> 4) & 1;

    if (new == 0){

    number |=(1<<4);    
    }

    return number;

}

int main(){
int a;


scanf("%d", &a);

int result = bitcheck(a);


    if (a==result){

        printf("%d", a);

    }
    else{printf("%d",result);}

    return 0; 



}
