#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main(){
    
    int a = 10;
    int b = 5;
    
    cout << "A before: " << a << endl;
    cout << "B before: " << b << endl;
    
    swap(a,b);
    
    cout << "A after: " << a << endl;
    cout << "B after: " << b << endl;    
    
    system("pause");
    return 0;
}

void swap(int &a, int &b){

   int temp = a;
   a = b;
   b = temp;     
     
}
