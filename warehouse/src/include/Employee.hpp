#pragma once
#include <string>

using namespace std;

class Employee {
    private: 
        const string _name;
        bool _busy;
        bool _forkliftCertificate;

    public: 
        Employee(string name, bool forkliftCertificate);
        string getName();
        bool getBusy();
        void setBusy(bool busy);
        bool getForkliftCertificate();
        void setForkliftCertificate(bool forkliftCertificate);
};