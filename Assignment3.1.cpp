// Chapter 5, Programming Challenge 17: Sales Bar Chart
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int NUMSTORES = 5;
 
    const int ASTERISKVALUE = 100;
    
  
    for (int i = 0; i < NUMSTORES; ++i) {
        cout << "Enter today's sales for store " << i + 1 << ": ";
        cin >> sales[i];
    }

    cout << "\nSALES BAR CHART" << endl;
    cout << "(Each * = $" << ASTERISKVALUE << ")" << endl;

    for (int i = 0; i < NUMSTORES; ++i) {
        cout << "Store " << i + 1 << ": ";
        
     
        int numAsterisks = sales[i] / ASTERISKVALUE;
        
        
        for (int j = 0; j < numofasterisks; ++j) {
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}
