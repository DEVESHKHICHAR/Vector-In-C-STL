#include <iostream>
#include <vector>
using namespace std;
template<class t2>class arra{
    public:
       int size;
       vector<t2> v1;
       t2 ele;
          void getdata(){
          cout<<"entre the size of array: "<<endl;
          cin>>size; 
          for(int i=0; i<size; i++){
              cout<<"entre the element: "<<endl;
              cin>>ele;
              v1.push_back(ele);
          }
          vector<string>:: iterator iter =v1.begin();
          v1.insert(iter+1,2,'devesh');
      }
      void display(){ 
        cout<<"the vector is: ";
        for (int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
  }
};
int main() {
    arra<string>v1;
    v1.getdata();
    v1.display();
    return 0;
}
