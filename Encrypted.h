/******************************************************************
CIS 22B
Lab5: [Header file for the Encrypted class. This is an abstract
       class used as a base class for class CypherA and CypherB.
       It reads a text file that has been encrypted, then decode
       it using its derived classes and print the decoded result.]
Author: [Yunlin Xie]
Date:[11/15/2018]
*******************************************************************/


#ifndef LAB5_ENCRYPTED_H
#define LAB5_ENCRYPTED_H
#include <string>
using namespace std;

class Encrypted
{
protected:
    char *message;
    // A status variable that will tell whether the message was loaded successfully.
    bool status;


public:
    Encrypted(string, int);
    virtual ~Encrypted();
    /*
     * member function isEmpty, in plain English,
     * it will return true unless we have a valid non-empty string.
     *
     * It can not satisfy the following 3 things at the same time:
     * 1. by English, return true unless we have a valid non-empty string.
     * 2. be the member function that returns the value of the status variable.
     * 3. the status variable that will tell whether the message was loaded successfully.
     *
     * e.g. when a non-empty message get loaded successfully, status would be true,
     * but isEmpty need to return false
     *
     * So we have to define another member function getStatus to satisfy the criterion:
     * "Member function that returns the value of the status variable"
     *
     */
    bool isEmpty();
    bool getStatus();    // Member function that returns the value of the status variable
    virtual void decode() = 0;    // This is a pure virtual function.
    void print();
};


#endif //LAB5_ENCRYPTED_H
