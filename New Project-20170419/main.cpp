#include <iostream>

using namespace std;

int main()



{
int x;
int y;

do{


   cout << "ievadi atzimi" << endl; 
   cin >> x;
   
   switch (x){
   
   case 10: cout<<"izcili"<<endl; break;
   case 9: cout<<"izcili"<<endl; break;
   case 8: cout<<"izcili"<<endl; break;
   case 7: cout<<"izcili"<<endl; break;
   case 6: cout<<"izcili"<<endl; break;
   case 5: cout<<"izcili"<<endl; break;
   case 4: cout<<"izcili"<<endl; break;
   case 3: cout<<"izcili"<<endl; break;
   case 2: cout<<"izcili"<<endl; break;
   case 1: cout<<"izcili"<<endl; break;
   
   default : cout << "Tads vertējums nepastāv" << endl;
   }
   
   cout << "Ja vēlies atkārtot ievadi 1 !" << endl;
   cin >> y;
}while(y = 1);
   
   
  
   
   return 0;
}

