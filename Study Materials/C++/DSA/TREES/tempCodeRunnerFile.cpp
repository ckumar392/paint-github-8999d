#include <iostream>
using namespace std;

bool primeNumber[100005] ;

void findPrimes(){
   memset(primeNumber, true, sizeof(primeNumber));
   for (int i = 2; i * i < 100005; i++) {
      if (primeNumber[i]) {
         for (int j = i + i; j < 100005; j += i)
         primeNumber[j] = false;
      }
   }
}

int findPrimeInRange(int L, int R) {

   int lower = 0;
   int higher = 0;
   for(int i = L; i <= R; i++){
      if(primeNumber[i] == true){
         lower = i;
         break;
      }
   }
   for(int j = R; j >= L; j--){
      if(primeNumber[j] == true){
         higher = j;
         break;
      }
   }
   return (higher +lower);
}
int main()
{
   int a ,b;
   cout<<"enter both numbers-->"<<endl;
   cin>>a>>b;
   cout<<findPrimeInRange(a,b);
}