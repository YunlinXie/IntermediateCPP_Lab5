/***************************************************************
CIS 22B
Lab5: [Header file for CypherB class. This class is used to
       read a text file that has been encrypted in a certain
       way (eg. ETTPI), then decode it by subtracting 4
       (eg. APPLE) and print the decoded result.]
       result.]
Author: [Yunlin Xie]
Date:[11/15/2018]
***************************************************************/

#ifndef LAB5_CYPHERB_H
#define LAB5_CYPHERB_H
#include "Encrypted.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


class CypherB : public Encrypted
{
public:
    // Constructor calls the Base constructor
    CypherB(string fileName_B, int Max_Text_B) : Encrypted(fileName_B, Max_Text_B)
    {
    }

    ~CypherB()
    {
    }

    // This function decodes the encrypted message, stores the result in message(Base variable).
    void decode()
    {
        char* p = message;
        while (*p != '\0')
        {
            if (isalpha(*p))
            {
                if (*p <= 'd')
                {
                    *p = *p - 4 + 26;
                }
                else
                {
                    *p -= 4;
                }

            }
            else
            {
                *p = *p;
            }
            p ++;
        }
    }

};

#endif //LAB5_CYPHERB_H
