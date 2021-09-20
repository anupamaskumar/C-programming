#include<stdio.h>

int main()

{       int n,enterednum;
        printf(" Enter the number\n");
        scanf("%d",&n);
        enterednum=n;
        
        int remainder,result;
        while(n!=0){ 
        remainder=n%10;
        result = result*10 +remainder;
        n=n/10 ;  //n=n/10
        
        }  
        
    if(enterednum==result){
    printf("Entered number is palindrome");
    
    }else {printf("Entered number is not palindrome");
    }
    return 0;
}
