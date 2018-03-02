#include<stdio.h>


int part(int a[],int low, int high){
    int  pivot=a[high];
    int j=low-1,i;

    for(i=low;i<=high-1;i++){
        
        if(a[i]<pivot){
            j++;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int t=a[j+1];
    a[j+1]=a[high];
    a[high]=t;
    return j+1;
}

void quicksort(int a[],int low, int high){
    if(low<high){
        int pivot=part(a,low,high);
        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);
    }
}


int main(){
    int a[9]={3,6,4,9,1,19,22,30,20};
    int i;
    quicksort(a,0,8);
    for(i=0;i<9;i++){
        printf(" %d ",a[i]);
    }
    return 0;
}
