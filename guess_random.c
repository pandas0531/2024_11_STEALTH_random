#include <stdio.h>

int main(){
    
    int rand_num;
    int user;

    srand(time(0x00));
    rand_num = rand();
    
    printf("Guess Random : ");
    scanf("%d", &user);

    if(user==rand_num){
        printf("Correct!\n");
    }
    else{
        printf("Wrong!\n");
    }
    return 0;
}