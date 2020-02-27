#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
class Product{
    int itemNo;
    std::string description;
    double price;
    int stockQuantity;
    bool selection;
    
    public:
    Product();
    Product(int,std::string,double,int,bool);
    void setItemNo(int);
    int getItemNo();
    void setDescription(std::string);
    std::string getDescription();
    void setPrice(double);
    double getPrice();
    void setStockQuantity(int);
    int getStockQuantity();
    void printSummary();
    void setBool(bool);
    bool getBool();
    
};
