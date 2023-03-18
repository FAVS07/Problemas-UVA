
#include <iostream>

using namespace std;
int notbool(int n);
int main()
{
   int n,k;
    string ninos;

   cin >>n>>k;
   cin >>ninos;
    int ninos2[n];
    
    for(int i =0;i< ninos.size(); i++){
       if(ninos[i]== 'L'){
           ninos2[i]= 1;
           //cout << "encontre L"<< endl;
       }else{
           ninos2[i]= 0;
           //cout << "encontre R"<< endl;
       }
    }
    
    int bandera=0;
   bool actual =1;
   for(int i =0;i< n; i++){
       if(ninos2[i] == actual){
            actual =notbool(actual);
       }else{
           k--;
       }
   }
   if(k>= 0)
   cout << k<< endl;
   else cout <<0<< endl;
   
}
int notbool(int n){
    if(n == 0){
        return 1;
    }else{
        return 0;
    }
}
