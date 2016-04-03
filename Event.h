//
// Created by Georg Rokita on 04.02.16.
//

#ifndef STATEMACHINE_EVENT_H
#define STATEMACHINE_EVENT_H


class Event {
public:
    enum eventType { eEnter, eExit, eKey, eTick };
    eventType type;
    int value;
    //Event(eventType e = eTick, int v = 0) : type(e), value(v) {};
    Event(eventType e = eTick, int v = 0);
};




#endif //STATEMACHINE_EVENT_H
