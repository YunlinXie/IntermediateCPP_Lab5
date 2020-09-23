/***************************************************************
CIS 22B
Lab5: [Header file for CypherA class. This class is used to
       decode a text file that has been encrypted in a certain
       way (eg. from   abcdefghijklmnopqrstuvwxyz  to
       iztohndbeqrkglmacsvwfuypjx) and print the decoded
       result.]
Author: [Yunlin Xie]
Date:[11/15/2018]
***************************************************************/


#ifndef LAB5_CYPHERA_H
#define LAB5_CYPHERA_H
#include "Encrypted.h"
#include <iostream>
#include <cctype>
#include <string>
using namespace std;


class CypherA : public Encrypted
{
public:
    // Constructor calls the Base constructor
    CypherA(string fileName_A, int Max_Text_A) : Encrypted(fileName_A, Max_Text_A)
    {
    }

    ~CypherA()
    {
    }

    // This function decodes the encrypted message, stores the result in message(Base variable).
    void decode()
    {
        string mapping = "iztohndbeqrkglmacsvwfuypjx";
        char* p = message;
        while (*p != '\0')
        {
            if (islower(*p))
            {
                *p = mapping[*p - 'a'];
            }
            p ++;
        }
    }

};

#endif //LAB5_CYPHERA_H
