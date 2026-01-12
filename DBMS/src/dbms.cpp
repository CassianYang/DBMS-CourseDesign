#include "dbms.h"

DBMS::DBMS() {}
void DBMS::print_menu()
{
    cout << "Welcome to the DBMS!" << endl;
    cout << "1. Create Database" << endl;
    cout << "2. Delete Database" << endl;
    cout << "3. Exit" << endl;
}
DBMS::~DBMS() {}