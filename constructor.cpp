#include <iostream>
using namespace std;

class student {        // The class
  public:          // Access specifier
     
    string name;  // Attribute
    int rno;     // Attribute
   
    student(string x, int z) {  // Constructor with parameters
     
      name = x; 
      rno = z;
    }

    int mark(){

        if (rno == 1)
        {
            cout<<"your mark is 99 out of 100\n";
        }
        else if (rno == 2)
        {
            cout<<"your mark is 91 out of 100\n";
        }
        else if (rno == 14)
        {
            cout<<"your mark is 95 out of 100\n";
        }
        else{

            cout << "please cheack your roll no !!\n";
        }

        return 0;
    }
};


int main() {
  
  string a;
  int b;

  cout<<"name: \n";
  cin>>a;

  cout<<"roll no: \n";
  cin>>b;

  system("cls");

  
  cout << "name: \n" << a << endl << "roll no: \n" << b << endl;

    student twelve(a, b);
    
    twelve.mark();


  
  return 0;
}
