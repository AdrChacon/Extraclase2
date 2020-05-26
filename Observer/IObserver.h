#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <string>
using namespace std;

class IObserver{
    public:

        virtual ~IObserver(){};
        virtual void update(const string &messageFromSubject) = 0;
};

#endif