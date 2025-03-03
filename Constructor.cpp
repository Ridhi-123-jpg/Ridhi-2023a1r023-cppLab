 //Program to find area with same class name and same function name
      #include<iostream>
      using namespace std;
      class Area{
        // private: float c;
        public:  Area(int length, float breadth)
        {
            float c;
            c= length*breadth;
            cout<<"the area of rectangle is: "<<c<<endl;
           
            
        }
        private : float pi=3.14; //,d ;
        public:  Area(float radius)
        {
            float d;
            d= pi * radius * radius;
            cout<<"the area of circle is: "<<d<<endl;
          

        }
        // private : float e;
        public: Area()
        {
            float base =13;
            float height=12;
            float e;
            e=0.5* base * height; 
            cout<<"the area of triangle is: "<<e<<endl;  
        }
     };
     int main()
     {
      Area obj1(12,13);
      Area obj2(8);
      Area obj3(8,9);
      return 0;
     }
