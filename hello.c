// #include<studio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of the array");
    sacnf("%d, &n");
    int * arr =(int*)malloc(n*sizeof(int));
    // int * arr =(*int)calloc(n,size_t(int));
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n%d",*(arr));
    return 0;
    

}
