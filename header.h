#ifndef Class_Project_2_Header_File_h
#define Class_Project_2_Header_File_h
#include "product.h" // include the struct Product contents
#include <string> 
#include <vector> 
#include <string> 

using namespace std; 

//define inventory class 
class inventory 
{
private: 
    //  declare a variable named "totalProduct" 
    // to store elements in Product struct 
    vector<Product> totalProduct; 

public: 

void addProduct(Product product); // Function to add product in the inventory 
void removeProduct(int id); // Function to remove product in the inventory 
void displayProduct(int ID); // Function to display product info in the inventory 
void displayInventory(); // Function to display the inventory 

    
};

#endif 