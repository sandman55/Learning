#include <iostream>

using namespace std;

void printString(char *str);

int main(){
    
    printString("HELLO CLEVELAND");
 
    system("pause");
    return 0;   
}

void printString(char *str){

     while(*str != '\0'){
                
         cout << *str;
         
         str++;
                
     }     
     cout << "\n";
}
