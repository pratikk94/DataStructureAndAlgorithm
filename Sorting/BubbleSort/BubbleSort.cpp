#include <iostream>
using namespace std;

void print_array(int a[],int size){
    cout<<"Current state of array is :";
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n\n";
}

void bubble_sort(int a[], int size){
    for(int i=0;i<size-1;i++){
        //do repeating swaps.
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                print_array(a,size);
            }
        }
    }
}




int main(){
    // taking a predefined array.
    int unsortedArray[] = {31,21,15,24,10,0};

    // finding the size of the array.
    int size = sizeof(unsortedArray)/sizeof(int);
    
    /**
     * 
     *  @brief 
     *  if you want user to give input for 
     *  bubble sort uncomment the below code.
     *
     **/
     
    /**
    int unsortedArray[5];
    
    cout<<"Enter the array elements";
    
    for(int i=0;i<5;i++){
        cin>>unsortedArray[i];
    }

    */

    print_array(unsortedArray,size);
    bubble_sort(unsortedArray,size);

    return 0;
}