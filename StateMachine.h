//
// Created by Georg Rokita on 04.02.16.
//

#ifndef STATEMACHINE_STATEMACHINE_H
#define STATEMACHINE_STATEMACHINE_H

#include <iostream>
#include "Event.h"

using namespace std;


class StateMachine {

public:
    StateMachine();
    virtual ~StateMachine();
    void HandleState(const Event& e);

private:
    enum state { Stopped, Running, Paused };
    state currentState;

    void SetState(state newState);
    void HandleStateStopped(const Event& e);
    void HandleStateRunning(const Event& e);
    void HandleStatePaused(const Event& e);
};

#endif //STATEMACHINE_STATEMACHINE_H
