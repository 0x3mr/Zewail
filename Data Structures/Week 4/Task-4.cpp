#include <iostream>
#include <string>
#include <limits>
using namespace std;


class InventoryItem {
    private:
        int itemID;
        string itemName;
        double itemPrice;

    public:
        InventoryItem(int id, string name, double price) {
            itemID = id;
            itemName = name;
            itemPrice = price;
        }

        void display() {
            cout << endl << " Item #" << itemID << ":" << endl;
            cout << "  - " << itemName << endl;
            cout << "  - $" << itemPrice << endl;
        }

        int getItemID() { return itemID; }
        void setItemName(string name) { itemName = name; }
        void setItemPrice(double price) { itemPrice = price; }
};

int main() {
    InventoryItem inventory[3] = {
        InventoryItem(101, "Laptop", 999.99),
        InventoryItem(102, "Mouse", 29.99),
        InventoryItem(103, "Keyboard", 59.99)
    };

    cout << "=== Inventory Management System ===\n\n";

    cout << "1. Listing all items:\n";
    for (int i = 0; i < 3; i++) {
        inventory[i].display();
    }
    cout << endl;

    cout << "2. Updating item ID 102:\n";
    for (int i = 0; i < 3; i++) {
        if (inventory[i].getItemID() == 102) {
            cout << "Before update: ";
            inventory[i].display();
            
            inventory[i].setItemName("Wireless Mouse");
            inventory[i].setItemPrice(39.99);
            
            cout << "After update: ";
            inventory[i].display();
        }
    }
    cout << endl;

    cout << "3. Displaying item ID 101:\n";
    for (int i = 0; i < 3; i++) {
        if (inventory[i].getItemID() == 101) {
            inventory[i].display();
        }
    }

    return 0;
}