#include <iostream>
using namespace std;

int main(){
    int servicesDone;

    cout << "Please enter the amount of car services you've done: ";
    cin >> servicesDone;

    int fullService = 0;
    int revenue = 0;

    for(int i = 1; i <= servicesDone;  i++){
        int amount;

        cout<<"Please enter the amount you've taken from th car owner "<< i << " :" ;
        cin >> amount;
        revenue = revenue + amount;


        if (amount > 8000){
            cout << "Full service" << endl;
            fullService++;
        }
        else{
            cout << "Basic Service" << endl;
        }
    }

    cout << "Total Revenue Generated is: " << revenue << endl;
    cout << "Total Full Services done is/are: " << fullService << endl;
}