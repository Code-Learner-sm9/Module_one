#include <stdio.h>
// way 1 to solve percentage problem
int main(){
    int a,b;
    // char c;
    // scanf("%d%c %d%c",&a,&c,&b,&c);
    // printf("%d%% %d%%",a,b);
     
    //  way 2
    // scanf("%d%% %d%%",&a,&b);
    // printf("%d%% %d%%",a,b);
    // return 0;

    // We can also assign character
    scanf("%da %db",&a,&b); 
    printf("%da %db",a,b);


    // Note printf will display any value if it is under double quotation.For that it prints 
    // a,b and we know special character like % cant be deployed normally so we take double %% to print the value.

}