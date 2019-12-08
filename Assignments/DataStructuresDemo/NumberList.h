#ifndef DATASTRUCTURESDEMO_NUMBERLIST_H
#define DATASTRUCTURESDEMO_NUMBERLIST_H


class NumberList {

private:
    struct ListNode{
        double value;
        struct ListNode *next; // point to nest node in list
    };

    ListNode *head; //points to the first struct in list

public:
    //List functions

    NumberList() { head = 0; }
    void appendNode(double);
    void insertNode(double);
    void deleteNode(double);
    void displayList() const;
};


#endif //DATASTRUCTURESDEMO_NUMBERLIST_H
