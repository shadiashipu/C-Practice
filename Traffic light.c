#include <stdio.h>

int main() {
    char light;
    printf("What is a traffic signal? : ");
    scanf("%c", &light);

    if(light == 'r'){
        printf("Stop your car!");
    }
    else if(light == 'g'){
        printf("You are allowed to go!");
    }
    else if(light == 'y'){
        printf("Move your car!");
    }
    else{
        printf("Unrecgonized signal!");
    }
    return 0;
}
