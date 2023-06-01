#include "include/Employee.hpp"

Employee::Employee(string name, bool forkliftCertificate) : _name(name) {
    this->_forkliftCertificate = forkliftCertificate;
} 

string Employee::getName() {
    return this->_name;
}

bool Employee::getBusy() {
    return this->_busy;
}

void Employee::setBusy(bool busy) {
    this->_busy = busy;
}

bool Employee::getForkliftCertificate() {
    return this->_forkliftCertificate;
}

void Employee::setForkliftCertificate(bool forkliftCertificate) {
    this->_forkliftCertificate = forkliftCertificate;
}