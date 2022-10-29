#include <iostream>
using namespace std;

class student{
    
    protected:
        int roll_no;
        
    public:
        void set_roll_no(int r){
            roll_no = r;
        }
        void get_roll_no(){
            cout<<"Your roll number is : "<<roll_no<<endl;
        }
        
};

class exam : public student{
    
    protected:
        float maths;
        float physics;
        
    public:
        void set_marks(float m, float p){
            maths = m;
            physics = p;
        }
        void get_marks(){
            cout<<"Your Maths marks are : "<<maths<<endl;
            cout<<"Your Physics marks are : "<<physics<<endl; 
        }
};


class Result : public exam{
    private:
        float percentage;
        
    public:
        void display(){
            get_roll_no();
            get_marks();
            cout<<"Your overall percantage is : "<<(maths + physics)/2<<endl;
        }
        
};

int main()
{
    Result Simran;
    Simran.set_roll_no(50);
    Simran.set_marks(99.9, 100);
    Simran.display();
    
    return 0;
}
