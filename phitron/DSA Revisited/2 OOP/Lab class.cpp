#include<bits/stdc++.h>
using namespace std;

class BankAccount{
public:
    string account_holder;
    string addres;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string account_holder,string addres,int age, string password){
        this ->account_holder = account_holder;
        this ->addres = addres;
        this ->age = age;
        this ->password = password;
        this ->account_number = rand();
        this ->balance = 0;
        cout << "Your account No. is " << account_number << endl;
    }
    int show_balance(string pass){
        if(password == pass){
            return balance;
        }else return -1;

    }
    void add_money(string pass, int amount){
        if(pass == password) balance += amount;
        else cout << "Wrong pass, money can't be added" << endl;
    }
};

BankAccount* create_account(){
    string account_holder, address, pass;
    int age;
    cin >> account_holder >> address >> age >> pass;

    BankAccount *myAccount = new BankAccount(account_holder,address,age,pass);
    return myAccount;
}

void add_money(BankAccount* my_account){
    int amount;
    cout << "Enter amount: " << endl;
    cin >> amount;

    string pass;
    cout << "Enter password: " << endl;
    cin >> pass;

    my_account ->add_money(pass,amount);
}


int main(){
    BankAccount* myAccount = create_account();
    add_money(myAccount);
    cout << "Your balance is " << myAccount -> show_balance("Evanevan381@") << endl;


}
