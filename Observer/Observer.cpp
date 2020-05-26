#include "Observer.h"
#include <iostream>

using namespace std;

int Observer::_staticNumber = 0;

Observer::Observer(Subject &subject) : _subject(subject){
    _subject.attach(this);

    cout << " Observer #" << ++Observer::_staticNumber << " reporting for duty. o7" << endl;
    _number = Observer::_staticNumber;
}

Observer::~Observer(){
    cout << "Observer #" << _number << " out." << endl;
}

void Observer::removeMeFromList(){
    _subject.detach(this);

    cout << "Observer #" << _number << " removed from duty." << endl;
}

void Observer::update(const string &messageFromSubject){
    _messageFromSubject = messageFromSubject;

    printInfo();
}

void Observer::printInfo(){
    cout << "Observer #" << Observer::_number << " : New message incoming ->"<< _messageFromSubject << endl;
}