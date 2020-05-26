#include "Subject.h"
#include <iostream>

using namespace std;

Subject::Subject(){

}

Subject::~Subject(){
    cout << " RIP Subject " << endl;
}

void Subject::createMessage(string message){
    _message = message;
    
    notify();
}

void Subject::howManyObserver(){
    cout << "There are " << _listObserver.size() << " observers watching" << endl; 
}

void Subject::attach(IObserver *observer){
    _listObserver.push_back(observer);
}

void Subject::detach(IObserver *observer){
    _listObserver.remove(observer);
}

void Subject::notify(){
    list<IObserver *>::iterator iterator = _listObserver.begin();

    howManyObserver();

    while (iterator != _listObserver.end()){
        (*iterator)->update(_message);
        ++iterator;
    }
}