#include <iostream>

int SelectionSort(int arr[],int n)
{
    int sorted=0;
    if (n>1){
        int temp;
        for (int i = 0; i <n ; i++) {
            for (int j = i+1 ; j <n; j++) {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    sorted=0;
                }
                else
                    sorted=1;
                
            }
        }
    }
    return sorted;
}

void printArray(int arr[],int n,int sorted)
{
    if(n<1 or sorted==1)
    {
        std::cout<<"The array doesnot need sorting\n";
    }
    else{
        std::cout<<"The sorted array is: \n";
        for (int i=0;i<n;i++)
        {
            std::cout<<arr[i]<<"\n";
        }
    }
}


int main() {
    int array[] = {1,2,3,4,5,9,6,7};
    int n = sizeof(array) / sizeof(array[0]);
    int Sorted=SelectionSort(array, n);
    printArray(array, n,Sorted);
    return 0;
}
