#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator {
public:
    static int power(int n, int p) {
        if (n < 0 || p < 0)
            throw std::runtime_error("n and p should be non-negative");
        if (p == 0)
            return 1;
        int result = n;
        for (int i = 1; i < p; ++i) {
            result *= n;
        }
        return result;
    }
};


int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
 
}