#include <iostream>

using namespace std;
 
enum itemsTypes{
     HEALTH_POTIONS,
     TORCHES,
     ARROWS,
     MAX_ITEMS
     };
     
int countTotalItems(int items[]);     
     
int main(){
    
    int items[MAX_ITEMS] = {2, 5, 20};
    
    cout << "Total Items: " << countTotalItems(items) << endl;
    
    system("pause");
    return 0; 
}     
     
int countTotalItems(int items[]){
    
    int totalItems(0);
    for(int i = 0; i < MAX_ITEMS; i++){
            totalItems +=  items[i];
    }   
    
    return totalItems;
}
