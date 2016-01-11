#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void sortNames(string names[], int length);
void printNames(string names[], int length);

int main(){

    int numNames = 0;
    cout << "Please enter the number of names: ";
    cin >> numNames;
    
    string *array = new string[numNames];
    
    for (int i = 0; i < numNames; i++){
        cout << "Please enter name #" << i+1 << ": ";
        cin >> array[i];
        }
    
    sortNames(array, numNames);
    printNames(array, numNames);
    
    delete[] array;
    array = 0;
    
    system("pause");
    return 0;
}

void sortNames(std::string names[], int length){
     for(int startIndex = 0; startIndex < length; startIndex++){
     
             int smallestIndex = startIndex;
             
             for(int currentIndex = startIndex + 1; currentIndex < length; currentIndex++){
             
                     if(names[currentIndex] < names[smallestIndex]){
                              smallestIndex = currentIndex;                     
                     }
                     
             }        
             swap(names[startIndex], names[smallestIndex]);
     }      
}

void printNames(string names[], int length){
     cout << "Sorted List" << endl;
     for(int i = 0; i < length; i++){
         cout << "Name #" << i + 1 << ": " << names[i] << endl; 
     }    
     
}
