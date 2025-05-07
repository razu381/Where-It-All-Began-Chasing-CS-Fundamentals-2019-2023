#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    char section;
    int roll;
protected:
    int english_marks;
private:
    string password;

public:
    void set_marks(int marks){
        english_marks = marks;
    }
    void set_password(string pass){
        password = pass;
    }
    int get_marks(){
        return english_marks;
    }
    void update_marks(int marks, string pass){
        if(pass == password) english_marks = marks;
        else cout << "Error Password" << endl;
    }
};



int main(){
    int n;
    cin >> n;

    student students[n];
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        students[i].name = name;

        char section;
        cin >> section;
        students[i].section = section;

        int roll;
        cin >> roll;
        students[i].roll = roll;

        int english_mark;
        cin >> english_mark;
        students[i].set_marks(english_mark);

        string pass;
        cin >> pass;
        students[i].set_password(pass);
    }


    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].section << " "        << students[i].roll << " " << students[i].get_marks() << endl;
    }
    cout << endl << endl;

    int search_roll, updated_marks;
    cin >> search_roll >> updated_marks;

    bool is_found = false;
    for(int i = 0; i < n; i++){
        if(search_roll == students[i].roll){
            students[i].update_marks(updated_marks,"Evaneva381@");
            is_found = true;
        }
    }
    if(is_found == false) cout << "Roll was not found, please check" << endl;


    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].section << " "        << students[i].roll << " " << students[i].get_marks() << endl;
    }
    cout << endl << endl;

}
