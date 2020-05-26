#include "Subject.h"
#include "Observer.h"

int main(){
    Subject *subject = new Subject();
    Observer *observer1 = new Observer(*subject);
    Observer *observer2 = new Observer(*subject);
    Observer *observer3 = new Observer(*subject);
    Observer *observer4;
    Observer *observer5;

    subject->createMessage("The boy eats the apple");
    observer3->removeMeFromList();
    subject->createMessage("Il ragazzo mangia la mela");
    observer4 = new Observer(*subject);
    observer2->removeMeFromList();
    observer5 = new Observer(*subject);
    subject->createMessage("Der Junge isst den Apfel");
    observer5->removeMeFromList();
    observer4->removeMeFromList();
    observer1->removeMeFromList();


    delete observer5;
    delete observer4;
    delete observer3;
    delete observer2;
    delete observer1;
    delete subject;

    return 0;

}