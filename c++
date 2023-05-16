#include <iostream>
#include <string.h>
using namespace std;

class ShopItemOrder{
  private:
    string name;
    double unitPrice;
    int numberOfItems;

  public:
  ShopItemOrder(string name,double unitPrice , int numberOfItems);
    void get();
    void set(string name,double unitPrice , int numberOfItems);
    double get_total_price(double unitPrice , int numberOfItems);
    void print_order();

};

 ShopItemOrder::ShopItemOrder(string insertName,double insertUnitPrice , int insertnumberOfItems){
  set(insertName,insertUnitPrice,insertnumberOfItems);
 }
    void ShopItemOrder::get(){
      cout<<this-> name<<'/'<<this-> unitPrice<<"/"<<this-> numberOfItems<<"\n";
    }
    void ShopItemOrder::set(string insertName,double insertUnitPrice , int insertNumberOfItems){
      name = insertName;
      unitPrice=insertUnitPrice;
      numberOfItems=insertNumberOfItems;
      
    }
    double ShopItemOrder::get_total_price(double unitPrice , int numberOfItems){
      return unitPrice*numberOfItems;
    }
    void ShopItemOrder::print_order(){
      cout<<this-> name<<'/'<<this-> unitPrice<<"/"<<this->         
      numberOfItems<<"\n"<< "Bags sum: "<<get_total_price(unitPrice, numberOfItems) ;      
    }

int main() {
 ShopItemOrder bag("computer", 20000, 2);
  bag.print_order();
  return 0;
}
