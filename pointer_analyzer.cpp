#include<iostream>
using namespace std;
//analyzer functon
void  analyze_pointer(int*ptr){
    cout<<"Memory address: "<<ptr<<endl; //printing memory address of the varaible
    cout<<"Value pointed to by pointer: "<<*(ptr)<<endl; //printing the value 
}
int main(){
  int a=45;
  analyze_pointer(&a);//calling the function by passig adressof pointer
  int* b=new int;//new return pointer to the memory(dynamic memoery allocation)
  *b=92;//assigning the value
  analyze_pointer(b); //already a pointer sp just passing it to the function
  delete b;//deleting the allocated memory 
  return 0;

}