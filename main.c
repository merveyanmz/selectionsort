//
//  main.c
//  selection
//
//  Created by Merve Yanmaz on 14.12.2020.
//

#include <stdio.h>
#define SIZE 100

int main(void) {
    int i,j,n,min,pl;
    int ar[SIZE];
    
    printf("Please enter number of elements:");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        printf("Please enter element %d:",i);
        scanf("%d",&ar[i]);
    }
    for (i=0; i<n-1; i++) {
        min=ar[i];
        pl=i;
        for (j=i+1; j<n; j++) {
            if (ar[j]<min) {
                min=ar[j];
                pl=j;
            }
        }
        ar[pl]=ar[i];
        ar[i]=min;
    }
    for (i=0; i<n; i++) {
        printf("%d\t",ar[i]);
    }
    printf("\n");
    
    return 0;
}
