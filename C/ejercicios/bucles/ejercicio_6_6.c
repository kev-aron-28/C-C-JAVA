#include <stdio.h>

void magic_square(int n);
int main() {
    
    int n;
    printf("Size: ");
    scanf("%d", &n);
    magic_square(n);
    return 0;
}


void magic_square(int n){
    int i, j;
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = 0;
        }       
    }

    i = n / 2;
    j = n - 1;
    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n) // 3rd condition
        {
            j = n - 2;
            i = 0;
        }
        else {
            // 1st condition helper if next number
            // goes to out of square's right side
            if (j == n)
                j = 0;
 
            // 1st condition helper if next number
            // is goes to out of square's upper side
            if (i < 0)
                i = n - 1;
        }
        if (arr[i][j]) // 2nd condition
        {
            j -= 2;
            i++;
            continue;
        }
        else
            arr[i][j] = num++; // set number
 
        j++;
        i--; // 1st condition
    }
    
    for(int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++)
        {
            printf(" %d ", arr[i][j]);
        }       
        printf("\n");
    }

}
