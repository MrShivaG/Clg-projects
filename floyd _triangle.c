#include <stdio.h>

int main() {
    int n, spaces,stars;
    printf("enter the number of lines you want: ");
    scanf("%d",&n);
   
    spaces=n;
    stars=1;
    for(int i=1;i<=n;i++){
        for(int m=1;m<=spaces;m++){
            printf(" ");
        }
        for(int o=1;o<=stars;o++){
            printf("*");
        }
        for(int p=1;p<=spaces;p++){
            printf(" ");
            
        }
        spaces--;
        stars = stars+2;
        printf("\n");
        
        
    }

    return 0;
}
