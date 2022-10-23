#include<iostream>
#include<string>
#include<fstream>

using namespace std;
// the class that stores data
class Account
{
private:
    char id[15], fname[25], sname[25], email[40], balance[15], type[5], account_num[14],pass[18];
public:
    void getdata();
    void showdata() const;
    string getid() const;
    string getfname() const;
    string getsname() const;
    string getemail() const;
    string getbalance() const;
    string gettype() const;
    string getaccount_num() const;
    string getpass() const;
    Account fetch_Account(string);
}; //class ends here#pragma once
