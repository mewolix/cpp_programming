#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
    double weight;
public:
    Product() : name(""), price(0), weight(0) {}
    
    void setName(std::string n) { name = n; }
    std::string getName() const { return name; }
    
    void setPrice(double p) { price = p; }
    double getPrice() const { return price; }
    
    void setWeight(double w) { weight = w; }
    double getWeight() const { return weight; }
};

class Buy : public Product {
private:
    int quantity;
    double totalPrice;
    double totalWeight;
public:
    Buy() : Product(), quantity(0), totalPrice(0), totalWeight(0) {}
    
    void setQuantity(int q) { quantity = q; }
    int getQuantity() const { return quantity; }
    
    void setTotalPrice(double tp) { totalPrice = tp; }
    double getTotalPrice() const { return totalPrice; }
    
    void setTotalWeight(double tw) { totalWeight = tw; }
    double getTotalWeight() const { return totalWeight; }
};

class Check : public Buy {
public:
    void printInfo() const {
        std::cout << "Name: " << getName() << std::endl;
        std::cout << "Price: " << getPrice() << std::endl;
        std::cout << "Weight: " << getWeight() << std::endl;
        std::cout << "Quantity: " << getQuantity() << std::endl;
        std::cout << "Total price: " << getTotalPrice() << std::endl;
        std::cout << "Total weight: " << getTotalWeight() << std::endl;
    }
};

int main() {
    Check c;
    c.setName("Apple");
    c.setPrice(10.5);
    c.setWeight(0.2);
    c.setQuantity(5);
    c.setTotalPrice(c.getPrice() * c.getQuantity());
    c.setTotalWeight(c.getWeight() * c.getQuantity());
    c.printInfo();
    return 0;
}
