#include "account.h"
#include<cstring>
#include <vector>

// the class that stores data

void admin::getdata(string i_id, string i_email) {
    strncpy_s(id, i_id.c_str(), sizeof(id));
    id[sizeof(id) - 1] = 0;
    strncpy_s(email, i_email.c_str(), sizeof(email));
    email[sizeof(email) - 1] = 0;
    cout << "\n\nEnter admin first name: ";
    cin.getline(fname, 25);
    cout << "\n\nEnter admin surname name: ";
    cin.getline(sname, 25);
}

void admin::showdata() const {
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

string admin::getid() const {
    string str(id);
    return str;
}
string admin::getemail() const {
    string str(email);
    return str;
}
admin admin::fetch_admin(string n) {
    admin adm;
    ifstream iFile;
    iFile.open("admin.dat", ios::binary);
    if (!iFile) {
        cout << "File could not be opened... Press any Key to exit";
        cin.ignore();
        cin.get();
        return adm;
    }
    bool flag = false;
    while (iFile.read(reinterpret_cast<char*> (&adm), sizeof(admin))) {
        if (adm.getid() == n) {
            return adm;
        }
    }
    iFile.close();
    return adm;
}
void admin::create_user() const {
}
void admin::create_module() const {
}
void admin::display_sp() const {
}
void admin::create_report() const {
}
void admin::display_all_users() const {
}
void admin::display_all_admins() const {
}
void admin::display_all_students() const {
}
void admin::display_all_teachers() const {

}
void admin::display_all_modules() const {
    
}
void admin::display_all_reports() const {
    
}
void admin::display_all_records() const {
    
}
void admin::delete_admin(string n) {
    
}
void admin::delete_student(string n) {
    
}
void admin::delete_teacher(string n) {
    
}
void admin::delete_module(string n) {
    
}
void admin::delete_report(string n) {
    
}
void admin::change_student(string n) {
    
}