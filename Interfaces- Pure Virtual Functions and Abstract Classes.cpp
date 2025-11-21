#include <iostream>
#include <string>

using namespace std;

class clsMobile{
public:
    virtual void Dial(string PhoneNumber) = 0;
    virtual void SentSMS(string PhoneNumber, string Texe) = 0;
    virtual void TakePicture() = 0;
};


class clsIphone : public clsMobile
{
    void Dial(string PhoneNumber)
    {

    }

    void SentSMS(string PhoneNumber, string Texe)
    {

    }
    void TakePicture()
    {

    };
    
};


class clsNeoCoroV30 : public clsMobile
{
public:
    void Dial(string PhoneNumber)
    {

    }

    void SentSMS(string PhoneNumber, string Texe)
    {

    }
    void TakePicture()
    {

    }
};

int main()
{
    

    return 0;
}
