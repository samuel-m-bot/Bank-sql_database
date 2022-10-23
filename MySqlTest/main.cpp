#include <mysql.h>
#include <iostream>

using namespace std;
int qstate;

int main()
{
    int option=0;
    cout << "Welcome to SM Banking" << endl;
    cout << "\nOptions:" << endl;
    while (option != 3) {
        cout << "\n1) login" << endl;
        cout << "\n2) register" << endl;
        cout << "\n3) exit" << endl;
        cin >> option;
        if (option == 1) {

        }
    }
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);

    conn = mysql_real_connect(conn, "localhost", "root", "BleachBestanime2021!", "accounts", 3306, NULL, 0);

    if (conn) {
        puts("succesfull connection");

        string query = "SELECT * FROM Accounts";
        //string query = "INSERT INTO accounts.Accounts (firstname, lastname, email) VALUES( 'SAM', 'MONG', 'samuelmon@gmail.com'); ";
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        if (!qstate)
        {
            res = mysql_store_result(conn);
            while (row = mysql_fetch_row(res)) {
                printf("ID: %s, FName: %s\n", row[0], row[1]);
            }
        }
        else {
            cout << "Query failed " << mysql_error(conn) << endl;
        }
    }
    else {
        puts("Connection to database has failed");
    }
    return 0;
}