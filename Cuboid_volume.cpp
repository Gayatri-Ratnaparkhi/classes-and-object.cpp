//Gayatri Ratnaparkhi 23070123169

#include<iostream>

using namespace std;

class Area{
	
    public:
    	
    float l,h,b,volume;
    
    void input(){
    	
        cout<<"Enter the length: "<<endl;
        
        cin>>l;
        
        cout<<"Enter the breadth: "<<endl;
        
        cin>>b;
        
        cout<<"Enter the height: "<<endl;
        
        cin>>h ;
        
    }
    
    void calculate(){
    	
        volume=l*b*h;
        
    }
    
    void output(){
    	
        cout<<"Volume of the cuboid is: "<<volume<<endl;
        
    }
    
};

int main(){
	
    Area c;
    
    c.input();
    
    c.calculate();
    
    c.output();
    
}

/*

**OUTPUT**

Enter the length:

10

Enter the breadth:

7

Enter the height:

8

Volume of the cuboid is: 560

*/

