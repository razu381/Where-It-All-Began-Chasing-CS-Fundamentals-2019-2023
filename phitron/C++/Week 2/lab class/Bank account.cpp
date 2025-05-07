#include<bits/stdc++.h>
using namespace std;

class BankAccount{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string account_holder,string address,int age,string password){
        this -> account_holder = account_holder;
        this -> address = address;
        this -> age = age;
        this -> password = password;
        this -> account_number = rand() % 1000000000;
        this -> balance = 0;
        cout << "Your account number is: " << this -> account_number << endl;
    }
public:
    int show_balance(string password){
        //int balance = 0;
        if(this -> password == password){
            return  balance;
        }else{
            cout << this -> password;
            return -1;
        }
    }
    void add_money(string password,int amount){
        if(this -> password == password){
            this -> balance += amount;
        }else{
            cout << "password din't match \n";
        }

    }
    void deposit_money(string password,int amount){
        if(this -> password == password){
            this -> balance -= amount;
        }else{
            cout << "password din't match \n";
        }

    }
    friend class MyCash;
};//bank account class

class MyCash{
protected:
    int balance;
public:
    MyCash(){
        this -> balance = 0;
    }
public:
    void add_money_from_bank(BankAccount *my_account, string password, int amount){
        if(my_account -> password == password){
            this -> balance += amount;
            cout  << "Add money from bank is successfull" << endl;
        }else{
            cout << "password didn't match" << endl;
        }
    }
    int show_balance(){
        return balance;
    }
};

BankAccount* create_account(){
    string account_holder,address, password;
    int age;
    cout << "Enter your details: ";
    cin >> account_holder >> address >> age >> password;
    BankAccount *my_account = new BankAccount(account_holder,address,age,password);
    return my_account;
}
void add_money(BankAccount *my_account){
    string password;
    int amount;
    cout << "Add money, enter the pass & amount: ";
    cin >> password >> amount;
    my_account -> add_money(password,amount);
    cout << "Your new balance is: " << my_account -> show_balance("abc") << endl;

}

void deposit_money(BankAccount *my_account){
    string password;
    int amount;
    cout << "deposit money, enter the pass & amount: ";
    cin >> password >> amount;
    my_account -> deposit_money(password,amount);
    cout << "Your new balance is: " << my_account -> show_balance("abc") << endl;

}
void add_money_from_bank(MyCash *my_cash, BankAccount *my_account){
    string password;
    int amount;
    cout << "ADD MONEY FROM BANK, Enter pass & amount" << endl;
    cin >> password >> amount;
    my_cash -> add_money_from_bank(my_account,password,amount);
    cout << "Your new balance is: " << my_account -> show_balance("abc") << endl;
    cout << "MY Cash balace is: " << my_cash -> show_balance() << endl;
}


int main(){
    BankAccount *my_account = create_account();
    MyCash *my_cash = new MyCash();
    while(true){
        cout << "select option: " << endl;
        cout << "1. Add money to bank: " << endl;
        cout << "2. Deposit money from bank: " << endl;
        cout << "3. Add money to MyCash: " << endl;
        cout << "4. Add money to bank: " << endl;
        int option;
        cin >> option;

        if(option == 1){
            add_money(my_account);
        }else if(option == 2){
            deposit_money(my_account);
        }else if(option == 3){
            add_money_from_bank(my_cash,my_account);
        }else{
}
    }




}
