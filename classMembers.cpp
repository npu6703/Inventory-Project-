#include "header.h"
#include <iostream> //Preprocessor directive for input and output 
#include <vector> //Preprocessor directive for vector
#include <string>//Preprocessor directive for string 
#include <iomanip> //Preprocessor directive for setting precision

using namespace std; 

// Define function to add product in the inventory  
void inventory::addProduct(Product product) 
    {  
        // add a new product to the total products in the inventory
            totalProduct.push_back(product);

        // print out the message to let the user know
        // they input item successfully 
        cout << "*** Product has been added. ***\n" << endl; 
    }

// Define function to remove product in the inventory 
void inventory::removeProduct(int id)
    {
        // boolean variable named "found"
        // to test if the product exists 
        bool found = false; 
    // loop to check every product ID in the inventory
    // by using the interator named item
    for ( vector<Product>::iterator item = totalProduct.begin(); item != totalProduct.end();) 
        {
            // check if the productID that item pointed to
            // matches with the variable named id 
            if (item -> productID == id) 
            {
                // check if the ID the user typed 
                //matched with the ID product the inventory has
                found = true; 
                totalProduct.erase(item); // delete the item 
                cout << "Product has been removed\n"; // let the user knows the item has been deleted
                break; 
            } 
        }
    if(!found) // if the ID does not match with any stored ID 
    {
            cout << "Product does not exist." << endl; // let the user knows the item does not exist
    }
    }

// Define function to display product in the inventory
void inventory:: displayProduct(int ID) 
    {
    Product product; // struct object 

     // boolean variable named "found"
     // to test if the product exists 
    bool found = false; 

    // loop to check every product ID in the inventory
    // by using the interator named item
    for( vector<Product>::iterator item = totalProduct.begin(); item != totalProduct.end(); item++ )
    {     
        // check if the productID that item pointed to
        // matches with the variable named ID 
        if(item -> productID == ID)
            {
                // check if the ID the user typed 
                //matched with the ID product the inventory has
                found = true; 
                cout << "Product ID: " << item->productID << endl; // print product ID
                cout << "Product name: " << item->productName << endl; // print product name
                cout << "Product price: " << item->productPrice << endl; // print product price
                cout << "Quantity in Stock: " << item->quantityStock << endl; // print quantity in stock
                break; 
            }
    }

        if(!found)  // if the ID does not match with any stored ID
            {
                cout << "Product does not exist." << endl; // let the user knows the item does not exist
            }
    }

// Define function to display all products in the inventory
void inventory::displayInventory()
    {
         cout<< setw(30)<< "Inventory Summary\n";  // print the name of inventory 
                cout <<setw(10)<< "Product ID" << setw(30) 
                << "Product Name" << setw(20) << "Product Price" 
                << setw(20) << "Quantity in Stock" << setw(20) << endl; 

                // loop to check every product ID in the inventory
                // by using the interator named item
                for( vector<Product>::iterator item = totalProduct.begin(); item != totalProduct.end(); item++ )
                    {
                        // print all products in the inventory 
                        cout << setw(10)<< item->productID << setw(30) << 
                        item->productName << setw(20) << 
                        item->productPrice << setw(20) << 
                        item->quantityStock << setw(20) << endl; 
                    }
        
    
    }


    