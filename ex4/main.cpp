#include <iostream>
using namespace std;

class Car{
    private:
    string brand;
    string m_model;
    int m_year;
    int m_MaxSeating;
    
    public:
    Car(string x, string y, int z, int s){
        brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
    }
    int get_m_maxseating(){
        return m_MaxSeating;
    }
    string m_brand(){
        return brand;
    }
};

class BMW_Car : public Car{
    private:
    string m_DriveMode;
    
    public:
    BMW_Car(string y, int z, int s) : Car("BMW", y, z, s){
        cout<< "Constructing BMW_car\n";
        m_DriveMode = "Rear-wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class AUDI_Car : public Car{
    private:
    string m_DriveMode;
    
    public:
    AUDI_Car(string y, int z, int s) : Car("AUDI", y, z, s){
        cout<< "Constructing AUDI_car\n";
        m_DriveMode = "Front-wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class BENZ_Car : public Car{
    private:
    string m_DriveMode;
    
    public:
    BENZ_Car(string y, int z, int s) : Car("BENZ", y, z, s){
        cout<< "Constructing BENZ_car\n";
        m_DriveMode = "Front-wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};

int main(){
   BMW_Car car1("X5", 2023, 6);
   cout << car1.m_brand();
   cout<< " Drive Mode = "<< car1.get_DriveMode()<<endl;
   
   AUDI_Car car2("A8", 2023, 6);
   cout << car2.m_brand();
   cout<< " Drive Mode = "<< car2.get_DriveMode()<<endl;
   
   BENZ_Car car3("c300", 2023, 6);
   cout << car3.m_brand();
   cout<< " Drive Mode = "<< car3.get_DriveMode()<<endl;
   
   return 0;
}
