#include<iostream>
using namespace std;
class Car
{ 
    public:
    //Attributes
    string car_compny;
    int speed;
    int gear;
    Car(){
        cout<<"incide the car ctor ";
    }

   
    // ctor :parameterised ctor
    void Carr(string car_compny,int speed,int gear)
    {
        cout<<"ctor called "<<endl;
        this->car_compny=car_compny;
        this->speed=speed;
        this->gear=gear;

    }

    //Behaviour /method/member function
    void display()
    {
        cout<<car_compny<<endl;
    }

    //destructor :dtor
    ~Car()
    {
        cout<<"defaul dtor"<<endl;
    }

     
};
class car1 : public Car
{
 public:
    string car_name;
    int car_model;
    int noOfdoors;
    int noOfseats;
string car_color;
    car1(string car_name1,int car_model1,int noOfdoors1,int noOfseats1,string car_color)
    {
        cout<<"inside car1 class"<<endl;
        this->car_name=car_name1;
        this->car_model=car_model1;
        this->noOfdoors=noOfdoors1;
        this->noOfseats=noOfseats1;
        this->car_color=car_color;
    }

    void ac()
    {
        cout<<"ac on"<<endl;
    }
    void display()
    {
        cout<<car_compny<<" "<<this->car_name<<" "<<this->car_model<<speed<<endl;
    }
};

int main()
{
    car1 c1("toyota",2019,5,7);
    Car as;
    as.Carr("hello",32,22);

    c1.display();
    c1.ac();
    

    return 0;
}
