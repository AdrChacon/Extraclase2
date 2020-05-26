#ifndef OBSERVER_H
#define OBSERVER_H

#include "IObserver.h"
#include "Subject.h"


class Observer : public IObserver{
    public:
        Observer(Subject &subject);

        virtual ~Observer();

        void update(const string &messageFromSubject);

        void removeMeFromList();
        void printInfo();

    private:

        string _messageFromSubject;
        Subject& _subject;
        static int _staticNumber;
        int _number;
};

#endif