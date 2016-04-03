//
// Created by Georg Rokita on 04.02.16.
//

#include "StateMachine.h"

StateMachine::StateMachine() {

    currentState = Stopped;
}

StateMachine::~StateMachine() {

}


void StateMachine::SetState(state newState)
{
    Event exit = {Event::eExit, 0};
    Event enter = {Event::eEnter, 0};
    HandleState(exit);
    currentState = newState;
    HandleState(enter);
}

void StateMachine::HandleState(const Event &e) {

    switch(currentState) {
        case Stopped: HandleStateStopped(e); break;
        case Running: HandleStateRunning(e); break;
        case Paused: HandleStatePaused(e); break;
    }
}

void StateMachine::HandleStateStopped(const Event &e) {
    switch(e.type) {
        case Event::eEnter:
            cout << "State of the Machine: " << currentState << endl;
            break;
        case Event::eExit:
            break;
        case Event::eKey:
            cout << "State of the Machine switches to: Running "  << endl;
            SetState(Running);
            break;
    }


}

void StateMachine::HandleStateRunning(const Event &e) {
    switch(e.type) {
        case Event::eEnter:
            cout << "State of the Machine: " << currentState << endl;
            break;
        case Event::eExit:
            break;
        case Event::eKey:
            cout << "State of the Machine switches to: Paused "  << endl;
            SetState(Paused);
            break;
    }
}

void StateMachine::HandleStatePaused(const Event &e) {
    switch(e.type) {
        case Event::eEnter:
            cout << "State of the Machine: " << currentState << endl;
            break;
        case Event::eExit:
            break;
        case Event::eKey:
            cout << "State of the Machine switches to: Stopped "  << endl;
            SetState(Stopped);
            break;
    }
}