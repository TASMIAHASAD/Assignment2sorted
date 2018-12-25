#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#include<string>
#include "Person.h"
using namespace std;
template <class ItemType>


class Customer: public Person<ItemType>{
    private:
       int PhoneNumber;
       char Operators;

public:
      Customer();

      int GetPhoneNumber();
      char GetOperators();
      void PrintCustomersInfo();
};
#endif

