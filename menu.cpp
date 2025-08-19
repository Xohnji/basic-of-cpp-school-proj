#include <iostream>
using namespace std;

int main()
{
    // credentials
    string store_name = "~~~< The Catalyst Carinderia >~~~";
    string owner = "Axel Carl Nadera";
    string contact_num = "09356606910";
    cout << "\t\t" << store_name << endl;
    cout << "\t\t   Owner: " << owner << endl;
    cout << "\t\t   Contact #: " << contact_num << "\n" << endl;

    // carinderia's menus
    string categories = "\tCode:\t\tDescription:\t\tPrice:";
    cout << categories << endl;
    cout << "\t 1\t\tHamburger\t\t₱20.05" << endl;
    cout << "\t 2\t\tCheese Burger\t\t₱24.99" << endl;
    cout << "\t 3\t\tHam and Egg\t\t₱70.01" << endl;
    cout << "\t 4\t\tTokwa't Baboy\t\t₱79.99" << endl;
    cout << "\t 5\t\tFried Chicken\t\t₱30.70" << endl;
    cout << "\t 6\t\tSinigang na Baboy\t₱50.02" << endl;
    cout << "\t 7\t\tChopsuey\t\t₱70.08" << endl;
    cout << "\t 8\t\tLechon Ampalaya\t\t₱90.90" << endl;
    cout << "\t 9\t\tBeef Broccoli\t\t₱110.70" << endl;
    cout << "\t 10\t\tBistek\t\t\t₱110.70" << endl;
    cout << "\t 11\t\tRice\t\t\t₱10.10" << endl;
    cout << "\t 12\t\tHalf Rice\t\t₱5.10" << endl;
    cout << "\t 13\t\tAdobong Manok\t\t₱100.50" << endl;
    cout << "\t 14\t\tAdobong Baboy\t\t₱100.50" << endl;
    cout << "\t 15\t\tMiso Ramen\t\t₱120.01" << endl;
    cout << "\t 16\t\tSpicy Shrimp\t\t₱200.03" << endl;
    cout << "\t 17\t\tPork Menudo\t\t₱100.02" << endl;
    cout << "\t 18\t\tVegetable Pinakbet\t₱99.99" << endl;
    cout << "\t 19\t\tTortang Talong\t\t₱34.99" << endl;
    cout << "\t 20\t\tMunggo\t\t\t₱59.99\n" << endl;

    int product_number;
    double total, cash, credit_change, product_quantity;
    double price;

    // products no.
    cout << "[*] Enter Product #: ";
    cin >> product_number;

    if (product_number < 1 || product_number > 20){
        cout << "Product No. " << product_number << " is not listed\n";
        return 0;
    }

    // product no. & prices
    if (product_number == 1){price = 20.05;}
    else if (product_number == 2){price = 24.99;}
    else if (product_number == 3){price = 70.01;}
    else if (product_number == 4){price = 79.99;}
    else if (product_number == 5){price = 30.70;}
    else if (product_number == 6){price = 50.02;}
    else if (product_number == 7){price = 70.08;}
    else if (product_number == 8){price = 90.90;}
    else if (product_number == 9){price = 110.70;}
    else if (product_number == 10){price = 110.70;}
    else if (product_number == 11){price = 10.10;}
    else if (product_number == 12){price = 5.10;}
    else if (product_number == 13){price = 100.50;}
    else if (product_number == 14){price = 100.50;}
    else if (product_number == 15){price = 120.01;}
    else if (product_number == 16){price = 200.03;}
    else if (product_number == 17){price = 100.02;}
    else if (product_number == 18){price = 99.99;}
    else if (product_number == 19){price = 34.99;}
    else if (product_number == 20){price = 59.99;}

    // product quantity
    cout << "[*] Enter Quantity #: ";
    cin >> product_quantity;

    // cash credit
    cout << "[*] Enter Cash ₱: ";
    cin >> cash;

    // computation
    total = price * product_quantity;
    credit_change = cash - total;

    if (cash < total){
        cout << "\n--------------------------------------------------------------------\n";
        cout << "\t\t\tYour balance is not enough!\n";
        cout << "--------------------------------------------------------------------\n";
        return 0;
    }

    // product receipt
    cout << "\n--------------------------------------------------------------------\n";
    cout << "\t\t" << store_name << "\n";
    cout << "\t\t     Owner: " << owner << "\n";
    cout << "\t\t     Contact #: " << contact_num << "\n";
    cout << "\n[+] Product #: No. " << product_number << "\n";
    cout << "[+] Quantity #: " << product_quantity << "\n";
    cout << "\n--------------------------------------------------------------------\n";
    cout << "\t\t      Total Amount: ₱" << total << "\n";
    cout << "\t\t      Cash: ₱" << cash << "\n";
    cout << "\t\t      Change: ₱" << credit_change << "\n";
    cout << "\n\t\t        Thank you! :)\n" << endl;
    cout << "--------------------------------------------------------------------\n";

    return 0;
}
