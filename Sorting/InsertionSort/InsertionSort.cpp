#include <iostream>
using namespace std;

void print_array(int a[],int size){
    cout<<"Current state of array is :";
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n\n";
}

void insertion_sort(int a[], int size){
    //be wary of the loop parameters.
    for(int i=1;i<size;i++){
        int currentElement = a[i];
        int prev = i-1;
        while(prev>= 0 and a[prev]>currentElement){
            a[prev+1] = a[prev];
            prev = prev - 1;
        }
        a[prev+1] = currentElement;
        print_array(a,size);

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
   insertion_sort(unsortedArray,size);

    return 0;
}