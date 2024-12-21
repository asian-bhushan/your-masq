#include <stdio.h>
#include <conio.h>
#include <windows.h> 
int main(){
    int i;
    char gender;
    for (i = 1; i <= 3; i++) 
    {
        printf("hey\n");
        printf("there\n\n");
        sleep(3);

    }
    {
        printf("WHATSUPP\n");
        printf("\n\n\n");
        Sleep(5);
    }
    printf("enter your gender :");
    scanf("%c",&gender);
    Sleep(2);
    {
         if (gender == 'M' || gender == 'm') {
        printf("You a true men\n");
    } else if (gender == 'F' || gender == 'f') {
        for(i=1;i<=3;i++){
        printf("WOMEN hahaha\n");
         Sleep(200);
        }
    } else {
        printf("beta galat choice\n");
    }
    return 0;
}
}

