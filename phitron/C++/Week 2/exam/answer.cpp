#include<bits/stdc++.h>
using namespace std;

class Restaurant{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
    Restaurant(){
        total_tax = 0;
    }
};

void get_menu(Restaurant *romanchia, int num_of_items){

    for(int i = 0; i < num_of_items ; i++){
        int code;
        cout << "Enter item " << i + 1 << " Code: ";
        cin >> code;
        romanchia -> food_item_codes[i] = code;
        string name;
        cin.ignore();
        cout << "Enter item " << i + 1 << " name: ";
        getline(cin, name);
        romanchia -> food_item_names[i] = name;
        int price;
        cout << "Enter item " << i + 1 << " price: ";
        cin >> price;
        romanchia -> food_item_prices[i] = price;
    }
}

void print_menu(int num_of_items, Restaurant *romanchia){
    //Print the heading OUR menu
    cout << endl;
    cout << "                              OUR MENU \n";
    cout << "                           ---------------\n";
    cout << endl;

    //printing the heading
    cout.width(20);
    cout << left << "Item Code";
    cout.width(30);
    cout << left << "Item Name";
    cout.width(30);
    cout << left << "Item Price";
    cout << endl;

    //printing menu
    for(int i = 0; i < num_of_items ; i++){
        //code
        cout.width(20);
        cout << endl;
        cout << left << romanchia -> food_item_codes[i] ;
        //Name
        cout.width(30);
        cout << left << romanchia -> food_item_names[i] ;
        //Price
        cout.width(30);
        cout << left<< romanchia -> food_item_prices[i];
        cout << endl;

    }
}

void take_order(int total_items, Restaurant *romanchia){
    int table_no, items_num;
    cout << endl;
    cout << "Enter Table No: ";
    cin >> table_no;
    cout << "Enter number of items: ";
    cin >> items_num;
    int items_ordered[items_num];
    int quantity[items_num];

    //take order from the customer and save
    for(int i = 0; i < items_num; i++){
        int is_valid = 0;
        int code;
        while(is_valid == 0){
            cout << "Enter item " << i+1 << " code: ";
            cin >> code;
            //for(int i = 0; i < items_num ; i++){
                for(int j = 0; j < total_items; j++){
                    if(code == romanchia -> food_item_codes[j]){
                        is_valid = 1;
                        items_ordered[i] = j;
                        break;

                    }

                }
            //}
            if(is_valid == 0){
                cout << "Invalid food code, please enter again \n";
            }

        }

        cout << "Enter item " << i+1 << " quantity: ";
        cin >> quantity[i];
    }


    //Print the heading billing summury
    cout << endl;
    cout << "                                                      BILLING SUMMURY\n";
    cout << "                                                      -----------------\n";
    cout << endl;

    cout << "Table no: " << table_no << endl;;
    //printing the heading
    cout.width(20);
    cout << left << "Item Code";
    cout.width(30);
    cout << left << "Item Name";
    cout.width(20);
    cout << left << "Item Price";
    cout.width(20);
    cout << left << "Item Quantity";
    cout.width(20);
    cout << left << "Total Price";
    cout << endl;

    //find the menu from code
    double total = 0;
    for(int i = 0; i < items_num ; i++){
        int num = items_ordered[i];
        cout.width(20);
        cout << left << romanchia -> food_item_codes[num] ;
        cout.width(30);
        cout << left << romanchia -> food_item_names[num] ;
        cout.width(20);
        cout << left << romanchia -> food_item_prices[num] ;
        cout.width(20);
        cout << left << quantity[i] ;
        cout.width(20);
        cout << left << romanchia -> food_item_prices[num] * quantity[i];
        total += romanchia -> food_item_prices[num] * quantity[i];
        cout << endl;

    }
    //Tax part
    cout.width(20);
    cout << left << "Tax" ;
    cout.width(30);
    cout << left << " ";
    cout.width(20);
    cout << left << " " ;
    cout.width(20);
    cout << left << " " ;
    cout.width(20);
    double tax = 5 * total / 100;
    romanchia -> total_tax += tax;
    cout << left << fixed << setprecision(2) << tax;
    cout << endl;

    //print the line
    for(int i = 0; i < 105; i++){
        cout << "-";
    }
    cout << endl;
    //print subtotal
    //Tax part
    cout.width(20);
    cout << left << "NET TOTAL" ;
    cout.width(30);
    cout << left << " ";
    cout.width(20);
    cout << left << " " ;
    cout.width(20);
    cout << left << " " ;
    cout.width(5);
    cout <<total + tax<< " Taka";
    cout << endl;


}

int main(){
    Restaurant* romanchia = new Restaurant;

    cout << "Enter the number of items: ";
    int num_of_items;
    cin >> num_of_items;

    get_menu(romanchia,num_of_items);
    Flag:
    //print menu
    print_menu(num_of_items,romanchia);
    //take order
    take_order(num_of_items,romanchia);

    cout << endl;
    goto Flag;

}
