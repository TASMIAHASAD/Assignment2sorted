#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include<string>
#include "SortedType.h"
using namespace std;
template <class ItemType>


class Person: public SortedType<ItemType>{

protected:
   string PersonName;
   string FatherName;
   string MotherName;
   string MaritalStatus;
   int NationalID;
   string SpouseName;
   string PresentAddress;
   string PermanentAddress;
   float Height;
   float Weight;
   string EyeColor;
   string HairColor;




public:

    Person();
     string GetPersonName();
     string GetFatherName();
     string GetMotherName();
     string GetMaritalStatus();
     int GetNationalID();
     string GetSpouseName();
     string GetPresentAddress();
     string GetPermanentAddress();
     float GetHeight();
     float GetWeight();
     string GetEyeColor();
     string GetHairColor();

    void SetPersonName(string inputPersonName);
    void SetFatherName(string inputFatherName);
    void SetMotherName(string inputMotherName);
    void SetMaritalStatus(string inputMaritalStatus);
    void SetNationalId(int inputNationalID);
    void SetSpouseName(string inputSpouseName );
    void SetPresentAddress(string inputPresentAddress);
    void SetPermanentAddress(string inputPermanentAddress);
    void SetHeight(float inputHeight);
    void SetWeight(float inputWeight);
    void SetEyeColor(string inputEyeColor);
    void SetHairColor(string inputHairColor);

    void PrintPerson();


};

#endif // PERSON_H_INCLUDED
