
//1st pattern
/*
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    int i,j;

    for(i=0;i<5;i++){

        for(j=0;j<5;j++){

            printf("* ");
        }
        printf("\n");
    }

    return 0;

}

*/

//2nd pattern
/*
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<i;j++){

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

*/


//3rd pattern

/*
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    int i,j;

    for(i=0;i<5;i++){
        for(j=5;j>i;j--){

            printf("* ");
        }
        printf("\n");
    }
    return 0;

}

*/

// 4th pattern

/*
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    int i,j,k;

    for(i=0;i<5;i++){

         for(j=5;j>i;j--){

            printf(" ");
         }

        for(k=0;k<5;k++){

            printf("* ");
        }

        printf("\n");
    }
}

*/

// 5th pattern

/*
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    int i,j,k;

    for(i=0;i<5;i++){

            for(j=5;j>i;j--)
            {
                printf("  ");
            }

        for(k=0;k<i;k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

*/

//6th pattern

/*
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    int i,j,k;

    for(i=0;i<5;i++){

        for(j=0;j<i;j++)
        {
            printf("  ");
        }

        for(k=5;k>i;k--)
        {

            printf("* ");
        }

        printf("\n");
    }
}

*/

// 7th pattern 

#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0||i==4||j==0||j==4)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

