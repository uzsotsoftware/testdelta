/* R136357W & R135278L */
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Deliveries;
class Logistics{

private:
    string driver;
    int truckNumber;
    string deliveredProd;
    string timein;
    string timeout;

    friend class Deliveries;//friending delivery class

public:
    void setdriver(string y) {
        driver =y;
    }
     
    string getdriver(){
    return driver;
    }
    int gettruckNumber(){
        return truckNumber;
    }

      string getdeliveredProd(){
        return deliveredProd;
     }
      
  //adding time     
      string gettimein(){
    return timein;
      }
      string gettimeout(){
    return timeout;
      }
      
      
      
      
      
};
    class Deliveries{
    public:

    Logistics setLogs(Logistics log1){

        cout<<"Enter truck(1) driver's name....";
        cin>>log1.driver;
        cout<<"Enter truck(1) regnumber is....";
        cin>>log1.truckNumber;
        cout<<"Enter delivered product is....";
        cin>>log1.deliveredProd;
        
        cout<<"Enter time in....";
        cin>>log1.timein;
        cout<<"Enter time out....";
        cin>>log1.timeout;
        
        
        

        cout<<"Enter truck(2) driver's name....";
        cin>>log1.driver;
        cout<<"Enter truck(2) regnumber is....";
        cin>>log1.truckNumber;
        cout<<"Enter delivered product is....";
        cin>>log1.deliveredProd;
        
        cout<<"Enter time in....";
        cin>>log1.timein;
        cout<<"Enter time out....";
        cin>>log1.timeout;
        
        
       
        cout<<"Enter truck(3) driver's name....";
        cin>>log1.driver;
        cout<<"Enter truck(3) regnumber is....";
        cin>>log1.truckNumber;
        cout<<"Enter delivered product is....";
        cin>>log1.deliveredProd;
        
        cout<<"Enter time in....";
        cin>>log1.timein;
        cout<<"Enter time out....";
        cin>>log1.timeout;
        
        return log1;}

    };//overloading delivery class
    class StaffBus:public Logistics{ 
    public:
        int driver;
      
        cout<<"Enter name of staff bus driver"<<endl;
        cin>>sbus.driver;
    };

int main(/*int argc, int** argv*/) {
    Logistics log1;
    Deliveries delvary;
    log1 = delvary.setLogs(log1);
    StaffBus sbus;

       cout<< "<<<<<<<<<<<<<<<<DELTA LOGISTICS<<<<<<<<<<<<<<" <<endl;

    cout<< "<<<<<<<<<<<<<<<<Tuck1<<<<<<<<<<<<<<" <<endl;
    cout<< "The truck(1) driver is :" << log1.getdriver() <<endl;
    cout<< "The truck(1) registration number is :" << log1.gettruckNumber() <<endl;
    cout<< "The delivered product is :" << log1.getdeliveredProd()<<endl;

   
    cout<< "<<<<<<<<<<<<<<<<Truck2<<<<<<<<<<<<<<" <<endl;
    cout<< "The truck(2) driver is :" << log1.getdriver() <<endl;
    cout<< "The truck(2) registration number is :" << log1.gettruckNumber() <<endl;
    cout<< "The delivered product is :" << log1.getdeliveredProd() <<endl;

    cout<< "<<<<<<<<<<<<<<<<Tuck3<<<<<<<<<<<<<<" <<endl;
    cout<< "The truck(3) driver is :" << log1.getdriver() <<endl;
    cout<< "The truck(3) registration number is :" << log1.gettruckNumber() <<endl;
    cout<< "The delivered product is :" << log1.getdeliveredProd() <<endl;
    
    cout<< "<<<<<<<<<<<<<<<<Staff Bus<<<<<<<<<<<<<<" <<endl;
    cout<< "The Staff Bus driver is :" << sbus.getdriver()<<endl;
    cout<< "The Staff Bus registration number is :" <<sbus.gettruckNumber() <<endl;
    return 0;
}

