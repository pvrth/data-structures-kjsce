
#include <iostream>
using namespace std;
int main() {
    cout << "Bubble Sort Algorithm :\n";
    
    int arr[5] = {5,4,3,2,1};

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5-i-1 ; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int k = 0 ; k < 5 ; k++){
        cout << arr[k] << endl;
    }
    
    return 0;
}
