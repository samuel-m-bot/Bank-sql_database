#include "account.h"
#include<cstring>
#include <vector>

// the class that stores data

void Account::getdata() {
    cout << "\n\nEnter first name: ";
    cin.getline(fname, 25);
    cout << "\n\nEnter surname name: ";
    cin.getline(sname, 25);
    cout << "\n\nEnter email name: ";
    cin.getline(fname, 25);
}

void Account::showdata() const {
    string id_space, fname_space, sname_space = "";
    if (strlen(id) != 12) {
        for (int i = strlen(id); i < 12; i++) {
            id_space = id_space + " ";
        }
    }
    if (strlen(fname) != 25) {
        for (int i = strlen(fname); i < 25; i++) {
            fname_space = fname_space + " ";
        }
    }
    if (strlen(sname) != 25) {
        for (int i = strlen(sname); i < 25; i++) {
            sname_space = sname_space + " ";
        }
    }
    cout << "\n" << id << id_space << fname << fname_space << sname << sname_space << email;
}

string Account::getid() const {
    string str(id);
    return str;
}
string Account::getfname() const {
    string str(fname);
    return str;
}
string Account::getsname() const {
    string str(sname);
    return str;
}
string Account::getemail() const {
    string str(email);
    return str;
}
string Account::getbalance() const {
    string str(email);
    return str;
}
string Account::gettype() const {
    string str(type);
    return str;
}
string Account::getaccount_num() const {
    string str(account_num);
    return str;
}
string Account::getpass() const {
    string str(pass);
    return str;
}
Account Account::fetch_Account(string n) {
    Account adm;
    ifstream iFile;
    iFile.open("admin.dat", ios::binary);
    if (!iFile) {
        cout << "File could not be opened... Press any Key to exit";
        cin.ignore();
        cin.get();
        return adm;
    }
    bool flag = false;
    while (iFile.read(reinterpret_cast<char*> (&adm), sizeof(Account))) {
        if (adm.getid() == n) {
            return adm;
        }
    }
    iFile.close();
    return adm;
}