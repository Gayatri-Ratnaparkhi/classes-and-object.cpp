## AIM:
To study and impliment Classes and Objects.
## Software :
VS code, Dev cpp, online compiler.
## theory:

**classes**
In C++, a class is a user-defined data type that serves as a blueprint for creating objects.
It encapsulates both data and functions that operate on that data, allowing for a structured way to model real-world entities.
A class can contain various members, including attributes (data members) and methods (function members). Access specifiers, 
such as public, protected, and private, control the visibility of these members, enforcing encapsulation and promoting data hiding.
By organizing related properties and behaviors into a single unit, classes facilitate better code management and enhance the 
readability of programs. Moreover, classes support features like inheritance and polymorphism, which further extend their utility in 
creating versatile and reusable code.
**objects**
Objects are instances of classes and represent specific entities created based on the class blueprint.
Each object has its own set of attributes and can perform the behaviors defined by its class methods. When an object is instantiated,
memory is allocated for its attributes, and it can interact with other objects and functions in the program. The concept of objects
allows for the creation of multiple instances of a class, each maintaining its own state and identity. This instantiation process
promotes modularity and enables developers to manage complexity more effectively.
By using objects, programmers can implement real-world concepts directly in code, making it easier to understand, maintain, and scale applications.

### Principles of OOP in C++

#### 1. Encapsulation
-  Encapsulation is the concept of bundling data and methods that operate on that data within a single unit, typically a class. It hides the internal state of the object from the outside world and only exposes a controlled interface.
- **Example**: In C++, encapsulation is achieved using classes. Data members (attributes) are kept private or protected, and access to these members is provided through public methods (getters and setters).


#### 2. Inheritance
-  Inheritance allows a class (derived class) to inherit properties and behaviors (methods) from another class (base class). This promotes code reusability and establishes a hierarchy between classes.


#### 3. Polymorphism
-  Polymorphism allows objects of different classes to be treated as objects of a common base class. The most common use of polymorphism is to call methods on objects of derived classes through base class pointers or references, enabling dynamic method binding.


#### 4. Abstraction
- Abstraction focuses on hiding the complex implementation details and showing only the necessary features of an object. It simplifies interactions with objects by exposing only the relevant methods and properties.



## Algorithms
### Define method inside class

1. **Start**

2. **Define the `Student` Class**
   - **Public Section**
     - **Define the `myMethod` Function**
       - Print"I am studying in 2nd year"
3. **Main Function**
   - Create an object `s1` of type `Student`.
   - Call the `myMethod` function on the `s1` object.

4. **End**

### Define method outside class
1. **Start**

2. **Define the `Student` Class**
   - **Public Section**
     - **Declare the `myMethod` Function**
       - The function will be defined outside the class.

3. **Define the `myMethod` Function Outside the Class**
   - **Specify that this function belongs to the `Student` class**
   - Print the message "A Sophomore in SIT" to the console.

4. **Main Function**
   - Create an object `s1` of type `Student`.
   - Call the `myMethod` function on the `s1` object.

5. **End**

### Cuboid Volume
1. **Start**

2. **Define `Cubiod` Class**
   - **Public Section**
     - **Data Members**
       - `int length, breadth, height, volume;`
     - **Member Functions**
       - **`input()` Function**
         - Prompt the user to enter the length, breadth, and height of the cuboid.
         - Read the values and store them in t `length`, `breadth`, and `height` variables.
       - **`Volume()` Function**
         - Calculate the volume of the cuboid using the formula: `volume = length * breadth * height`.
       - **`Output()` Function**
         - Print : "The volume of the given Cuboid is : <volume>".

3. **Main Function**
   - Create an object `v1` of type `Cubiod`.
   - Call the `input()` function for `v1` to get the dimensions from the user.
   - Call the `Volume()` function for `v1` to calculate the volume.
   - Call the `Output()` function for`v1` to display the volume.
   
   ## codes:
    **classes and object implimentation**

   //Gayatri Ratnaparkhi 23070123169

#include<iostream>

#include<string.h>

using namespace std;

class Student{
	
    public:
    	
    string name,branch,year;
    
    float age,result;
    
    void display(){
    	
         cout<<"Name: "<<name<<endl;
         
         cout<<"Branch: "<<branch<<endl;
         
         cout<<"Year: "<<year<<endl;
         
         cout<<"Age: "<<age<<endl;
         
         cout<<"Result: "<<result<<endl;
         
    }
    
};

int main(){
	
    Student s1;
    
    s1.name="Gayatri Ratnaparkhi";
    
    s1.branch="EnTC";
    
    s1.year="Second";
    
    s1.age=19.0;
    
    s1.result=8.64;
    
    s1.display();
    
    Student s2;
    
    s2.name="Sakshi Sonawane";
    
    s2.branch="EnTC";
    
    s2.year="Second";
    
    s2.age=20.0;
    
    s2.result=9.03;
    
    s2.display();
    
}

/*

**OUTPUT**

Name: Gayatri Ratnaparkhi

Branch: EnTC

Year: Second

Age: 19

Result: 8.64

Name: Sakshi Sonawane

Branch: EnTC

Year: Second

Age: 20

Result: 9.03

*/

   **cuboid volume**

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

   **Method implimentation**

   //Gayatri Ratnaparkhi 23070123169

#include <iostream>

using namespace std;

class Student {
	
    public:
    	
    void method() {
    	
        cout << "Symbiosis Institue Of Technology";
        
    }
    
};

int main() {
	
    Student s1; 
    
    s1.method(); 
    
    return 0;
    
}

/*

**OUTPUT**

Symbiosis Institue Of Technology

*/
   **Method Outside**

   //gayatri Ratnaparkhi 23070123169

#include <iostream>

using namespace std;

class Student{
	
    public:
    	
    void display();
    
};

void Student::display(){
	
    cout<<"I'm studying in second year.";
    
}

int main(){
	
    Student s1;
    
    s1.display();
    
}
/*

**OUTPUT**

I'm studying in second year.

  */
  ## Conclusion
 In this Practical we have learnt the concept of classes and objects in C++ and implement it in various programs.

