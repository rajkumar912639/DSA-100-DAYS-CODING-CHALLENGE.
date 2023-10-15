

#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// Bookshop Class
class bookshope
{
public:
    void control_panel();
    void add_book();
    void show_book();
    void check_book();
    void update_book();
    void del_book();
};
void bookshope :: control_panel()
{


    cout<<"\n\n\t\t\t\t\t\t  CONTROL PANEL ";
    cout<<"\n   1\tADD BOOK ";
    cout<<"\n   2\tSHOW ALL BOOK ";
    cout<<"\n   3\tUPDATE BOOK ";
    cout<<"\n   4\tDELETE BOOK ";
    cout<<"\n   5\tEXIT ";
    cout<<endl<<"\n\n\n\n\n**************************************************************************";
    cout<<"*********************************************************************************************************************************************************************";

}


void bookshope::add_book()
{
     fstream file;
    int no_copy;
    string b_name, a_name, id;
    cout << "\n\n\t\t\t\tADD BOOKS";
    cout << "\n\nBook ID : ";
    cin >> id;
    cout << "\nBook Name : ";
    cin >> b_name;
    cout << "\nAuthor Name : ";
    cin >> a_name;
    cout << "\nNo. of Books : ";
    cin >> no_copy;

    file.open("sample.txt",
              ios::out | ios::app);
    file << " " << id << " "
         << b_name << " " << a_name
         << " " << no_copy << "\n";
    file.close();
}
void bookshope ::show_book()
{

    ifstream fin;
    fin.open("sample.txt");
    string str;
    while(getline (fin,str))
    {
        cout<<str<<endl;
    }
}
void bookshope::update_book()
{  fstream file, file1;
    int no_copy, no_co, count = 0;
    string b_name, b_na, a_name;
    string a_na, b_idd, b_id;

    cout << "\n\n\t\t\t\tUpdate Book Record";
    file1.open("sample.txt",
               ios::app | ios::out);
    file.open("sample.txt", ios::in);

    if (!file)
        cout << "\n\nFile Opening Error!";
    else {

        cout << "\n\nBook ID : ";
        cin >> b_id;
        file >> b_idd >> b_name;
        file >> a_name >> no_copy;
         while (!file.eof()) {
            if (b_id == b_idd) {

                cout << "\t\t\t\t"
                     << "Update Book Record";
                cout << "\n\nNew Book Name : ";
                cin >> b_na;
                cout << "\nAuthor Name : ";
                cin >> a_na;
                cout << "\nNo. of Books : ";
                cin >> no_co;
                file1 << " " << b_id << " "
                      << b_na << " "
                      << a_na << " " << no_co
                      << "\n\n";
                count++;
            }
            else
                file1 << " " << b_idd
                      << " " << b_name
                      << " " << a_name
                      << " " << no_copy
                      << "\n\n";
            file >> b_idd >> b_name;
            file >> a_name >> no_copy;
        }
        if (count == 0)
            cout << "\n\nBook ID"
              << " Not Found...";
    }
    cout << endl;


    // Close the files
    file.close();
    file1.close();
    remove("sample.txt");
    rename("sample1.txt",
           "sample.txt");


}
void bookshope::del_book()
{

    fstream file, file1;
    int no_copy, count = 0;
    string b_id, b_idd, b_name, a_name;
    cout << "\n\n\t\t\t\tDelete a Book";

    // Append file in output mode
    file1.open("sample.txt",
               ios::app | ios::out);
    file.open("sample.txt",
              ios::in);
              if (!file)
        cout << "\n\nFile Opening Error...";
    else {

        cout << "\n\nBook ID : ";
        cin >> b_id;
        file >> b_idd >> b_name;
        file >> a_name >> no_copy;
        while (!file.eof()) {

            if (b_id == b_idd) {


                cout << "\n\n\t\t\t\tDelete a Book";
                cout << "\n\nBook is Deleted Successfully...\n\n";
                count++;
            }
            else
                file1 << " " << b_idd
                      << " " << b_name
                      << " " << a_name
                      << " " << no_copy
                      << "\n\n";
            file >> b_idd >> b_name;
            file >> a_name >> no_copy;
        }
        if (count == 0)
            cout << "\n\nBook ID "
                 << "Not Found...";
                 }



    // Close the file
    file.close();
    file1.close();
    remove("sample.txt");
    rename("sample.txt",
   "sample.txt");
}


void bookShopRecord()   // Function for book shop record
{
    int choice;
    char x;
    bookshope b;

    while (1) {

        b.control_panel();
        cout << "\n\nEnter your choice : ";
        cin >> choice;
        switch (choice) {

        case 1:
            do {

                b.add_book();

                cout << "\n\nWant to add"
                     << " another book? "
                        "(y/n) : ";
                cin >> x;
            } while (x == 'y');
            cout<<endl<<"******************************************************************************************";
            cout<<endl<<"******************************************************************************************";

            break;

        case 2:
            b.show_book();
            break;


        case 3:
            b.update_book();
            break;

        case 4:
            b.del_book();
            break;

        case 5:
            exit(0);
            break;

        default:
            cout << "\n\n WRONG OPTION YOU CHOOSE \n";
        }
          }
}

int main()
{
bookShopRecord ();
    return 0;
}
