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
        int cap;
    public:
        Queue(){
            cap = 0;
            std::list<t> Whatever;
        }

        ~Queue(){
            while(! Whatever.empty()){
                Whatever.pop_front();
            }
        }

        Queue(const Queue<t> &l){
            std::list<t> temp = getList();
            Queue<t>::iterator ptr = temp.begin();
            while(ptr < temp.size()){
                //we only have access to the front
                Whatever.push(temp.front());
                temp.pop_front();
                ptr++;
            } 
        }

        Queue &operator=(const Queue<t> &l){
           this(l);
           return *this;
        }

        int sizeLength(){
            return Whatever.size();
        }

        void push(t element){
            Whatever.push_back(element);
        }

        void pop(){
            Whatever.pop_front();
        }

        t &front(){
            Whatever.front();
        }

        bool isEmpty(){
            Whatever.empty();
        }

        std::list<t> getList(){
            return Whatever;
        }

    };

}
#endif