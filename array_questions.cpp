#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } cout << endl;
}

void swap_alternate(int arr[], int size){
    int i = 0, j = 1;

    while(j < size){
        swap(arr[i], arr[j]);
        i = i + 2;
        j = i + 1;
    }
}

int main(){
    int num[6] = {1, 2, 3, 4, 5, 6};
    int num1[5] = {1, 2, 3, 4, 5};

    // // Take Input
    // cout << "Enter Numbers : ";
    // for (int i = 0; i < 5; i++){
    //     cin >> num[i];
    // }

    printArray(num, 6);
    swap_alternate(num, 6);
    printArray(num, 6);

    printArray(num1, 5);
    swap_alternate(num1, 5);
    printArray(num1, 5);

    return 0;
}