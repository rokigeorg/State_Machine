#include <iostream>
#include "StateMachine.h"
#include "Event.h"

using namespace std;



int main() {
    cout << "Hello, to the Statemachine!" << endl;

    StateMachine sm;
    Event key = Event(Event::eKey);

    bool mainFlag = true;
    int input;

    while(mainFlag){
        cout << "0 - To close the programm" << endl;
        cout << "1 - To press a button / to change the state!" << endl;

        cin >> input;
        if(input == 1 || input == 0) {

            if(input == 1){
                key.value = 1;
                sm.HandleState(key);
            }else{
                mainFlag = false;
            }
        }else{
            cout << "Again ... " << endl;
        }
    }
    return 0;
}
