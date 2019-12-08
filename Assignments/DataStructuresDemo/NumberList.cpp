//
// Created by w0235012 on 11/20/2019.
//
#include <iostream>
#include <conio.h>
#include "NumberList.h"

using namespace std;

void NumberList::appendNode(double value)
{
    ListNode *newNode; // points to new node
    ListNode *nodePtr; // used to traverse list

    newNode = new ListNode;
    newNode->value = value;
    newNode->next = 0;

    //No node in list
    if (!head){
        head = newNode;
    }
        //Append
    else{
        nodePtr = head;
        while (nodePtr->next) //find node with no next pointer value
        {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = newNode;
    }
}

void NumberList::deleteNode(double value)
{
    ListNode *nodePtr; // used to traverse list
    ListNode *prevNodePtr;

    // If list empty do nothing
    if (!head){
        return;
    }
    // Deleting first node
    if (head->value == value){
        nodePtr = head->next;
        delete(head);
        head = nodePtr;
    }
    // Delete not first node
    else{
        nodePtr = head;
        while (nodePtr && nodePtr->value != value){
            prevNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(nodePtr){
            prevNodePtr->next = nodePtr->next;
            delete(nodePtr);
        }
    }

}

void NumberList::displayList() const //Traverse from begin and print
{
    ListNode *nodePtr; // Keeps you current place
    nodePtr = head; // move to the head of list
    while (nodePtr){
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->next;
    }
    _getch();
}

void NumberList::insertNode(double value) // parameter is the data
{
    ListNode *newNode; // points to new node
    ListNode *nodePtr = head; // used to traverse list
    ListNode *prevNodePtr; // points to previous node in list

    newNode = new ListNode;
    newNode->value = value;

    if (!head){
        head = newNode;
        newNode->next = 0;
    }
    else{
        prevNodePtr = 0;
        //find target location

        while (nodePtr != 0 && nodePtr->value < value){
            prevNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }
        if (prevNodePtr == 0){
            head = newNode;
            newNode->next = nodePtr;
        }
        else {
            prevNodePtr->next = newNode;
            newNode->next = nodePtr;
        }
    }

}