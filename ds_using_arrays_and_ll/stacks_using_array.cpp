#include <iostream>

using namespace std;

#define SIZE 5

int arr[SIZE];
int top = 0;
int start = 0;

void push(int a){
    arr[top] = a;
    top++;
}

void pop(){
    if(start==top){
        cout << "No Elements Inside";
        return;
    } 
    cout << "Popped" << arr[top];
    arr[top-1] = 0;
    top--;
    
}

void peek(){
    if(start==top) cout << "No Elements Inside";
    cout << arr[top-1] << endl;
}

void traverse(){
    if(start==top) cout << "No Elements Inside";
    cout << "Not implemented";
}


int main(){
    
    int choice = 0;

    do{
        cout << "1 for push\n2 for pop\n3 for peek\n4 to exit\n"; 
        cin >> choice;
       switch(choice){ 
        case 1:{
            int a;
            cout << "Enter a number";
            cin >> a;
            push(a);
            break;
        }

        case 2:{
            pop();
            break;
        }
       
        case 3:{
            peek();
            break;
        }

        case 4:{
            choice = 0;
            break;
        } 
        default:{
            choice = -1;
            cout << "Invalid Case";
        }
       }
    }while(choice!=0);

    
    return 0;
}
