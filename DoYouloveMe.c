#include <stdio.h>


int main (){

    char response; //declaring variables

    while (1){   //naka 1 yung condition so that it will run infinitely until ma-meet yung condition na Y or Yes. 

            printf("I'll ask a question. Do you love me?\n"); //magtatanong kay user if mahal mo ba siya.
            scanf(" %c", &response); //scanf para ma get yung info kay user.
            
                if (response == 'Y'){ // if statement as the start ito yung condition na. If response is Y then the loop will break and print I love you too. 
                    printf("I love you too <33\n");
                    break;
                }
                else if (response == 'N'){ //else if naman pag response is no tapos magprint na back to the question then babalik sa while loop
                    printf("Back to the question.\n");
                }
            }

    return 0; 
}