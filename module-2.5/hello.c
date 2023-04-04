// #include<stdio.h>
// int main(){
//     printf("Recently I heard that you\'ve achieved 95%% marks in your exam.\nThis is brilliant!\nI wish you\'ll shine in your life!\tGood luck with all the barriers(/\\) in your life.");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x, y, sum, sub, mul;
//     float div;

//     printf("Please Enter Two Integer Numbers to execute Arithmetic Operation: ");
//     scanf("%d %d", &x, &y);
//     sum = x + y;
//     sub = x - y;
//     mul = x * y;
//     div = x / (float)y;
//     printf("%d + %d = %d\n", x, y, sum);
//     printf("%d - %d = %d\n", x, y, sub);
//     printf("%d * %d = %d\n", x, y, mul);
//     printf("%d / %d = %0.2f\n", x, y, div);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i;

//     printf("Please Enter a Positive Number: ");
//     scanf("%d", &i);
//     if(i%2==0 && i>=0){
//         printf("Even");
//     }else{
//         printf("Odd");
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i;

//     printf("Please Enter a Positive Number: ");
//     scanf("%d", &i);
//     if(i>0){
//         printf("Positive");
//     }
//     else if(i<0){
//         printf("Negative");
//     }
//     else if(i==0){
//         printf("Zero");
//     }
//     else {
//         printf("Not a Number");
//     }
    
//     return 0;
// }

#include<stdio.h>
int main(){
    int taka;

    printf("Please Enter Your Amount: ");
    scanf("%d", &taka);
    if(taka>=20000){
        printf("will buy a Gucci Bag & Gucci Belt");
    }
    else if(taka>=10000){
        printf("will buy a Gucci Bag");
    }
    else if(taka>=5000){
        printf("will buy a Levis Bag");
    }
    else {
        printf("will buy Something from New Market");
    }
    
    return 0;
}