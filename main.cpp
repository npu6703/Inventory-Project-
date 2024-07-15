
#include <iostream> //Preprocessor directive for input and output 
#include <string>//Preprocessor directive for string 
#include <iomanip> //Preprocessor directive for setting precision
#include "header.h"
#include "classMembers.cpp"
#include "product.h"

using namespace std;

int main()
{
    inventory Inventory; 
   // while(true)
   char input;
    do
    {
            int choice; // choice for the expression in this switch statement
        cin.clear(); // clearing the error flag on cin I/O operation properly
        //menu option
        cout << "1. Add a new product to the inventory \n"; //display the choices for user
        cout << "2. Remove a product from the inventory \n"; //display the choices for user
        cout << "3. Display information about a specific product \n"; //display the choices for user
        cout << "4. Display the entire inventory \n"; //display the choices for user
        
        cin >> choice; // input the user answer

        switch (choice) // use to handle each case based on the user's choice
        {
        case 1: // handle case 1
         {

            int n; // define variable named n 
            // ask the user to input number of products they want
            cout << "Enter the number of products you want to add: "; 
            cin >> n; 
        
        // for loop is used to add product in the inventory
        // depends on the number of products they chose 
        for(int i = 0; i < n; i ++)
        {
              Product newProduct; // struct object
        cin.ignore(); // to clear the input buffer 
        cout<< "Enter the product ID: "; // ask the user to input product ID
        cin >> newProduct.productID; // store the user's answer 
        cout << "Enter the product name: "; // ask the user to input product name
        cin >> newProduct.productName; // store the user's answer 
        cout <<"Enter the product price: "; // ask the user to input product price
        cin >> newProduct.productPrice; // store the user's answer 
        cout <<"Enter the quatity in stock: "; // ask the user to input the quatity
        cin >> newProduct.quantityStock; // store the user's answer 
            
            // call the addProduct function in Inventory class
            Inventory.addProduct(newProduct); 
         }
         }
        
            break;
     
        case 2: // Remove a product from the inventory
        {
            int ID; // define integer named ID
            cout << "Please enter a product ID: "; // ask the user to input product ID 
            cin >> ID; // store the user's answer 

            // call the removeProduct function in Inventory class
            Inventory.removeProduct(ID);   
            break;
        }
            
        case 3: // Display information about a specific product 
            {

             int productID; // define integer named productID
            cout << "Please enter a product ID: "; // ask the user to input product ID 
            cin >> productID; // store the user's answer 

            // call the displayProduct function in Inventory class
            Inventory. displayProduct(productID);     
            break; 
            }
            
        case 4: // Display Inventory

            // call the displayInventory function in Inventory class
             Inventory.displayInventory();
            break; 
        
        default: cout << "That is an invalid choice. \n"; // add another layer of input validation when it comes to menu options

        }
     cout << "Do you want to repeat the program? Y or N \n"; // asking the user if they wanted to repeat the program
    cin.clear(); // clearing the error flag on cin I/O operation properly
    cin.ignore(); // clearing the input buffer
    cin >> input; 

    }  
    //input validation if the user answer "y" or "Y", 
    //the program will continue executing the loop
    while (input == 'Y' || input == 'y'); 

return 0; 
    
}


