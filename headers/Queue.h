#ifndef _Queue_H_
#define _Queue_H_
#include <iostream>
#include <list>
#include <iterator>
using std::string;
using std::cout;


namespace cs273{

    template <typename t>
    class Queue{
    private:
        std::list<t> Whatever;
    public:
        
        //initilazes whatever as list from empty constructor
        Queue(){
            std::list<t> Whatever;
        }

        //destructs whatever and queue
        ~Queue(){
            while(! Whatever.empty()){
                Whatever.pop_front();
            }
        }

        //initializes whatever with copy constructor
        //input: l, reference queue
        Queue( Queue<t> &l){
            Whatever = l.Whatever;
        }

        //assignment operator
        //input: const queue l
        Queue &operator=(const Queue<t> &l){
           this(l);
           return *this;
        }

        //returns size of list(whatever)
        int size(){
            return Whatever.size();
        }

        //pushes element onto list(whatever)
        void push(t element){
            Whatever.push_back(element);
        }

        //removes the front element from list(whatever)
        void pop(){
            Whatever.pop_front();
        }

        //returns front element from list(whatever)
        t &front(){
            Whatever.front();
        }

        //checks if list(whatever) contains something
        bool isEmpty(){
            Whatever.empty();
        }

    };

}
#endif