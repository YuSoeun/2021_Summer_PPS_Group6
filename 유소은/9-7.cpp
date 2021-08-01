#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc,char **argv){
  int t,k;
  scanf("%d",&t);
  while (t--){
    scanf("%d",&k);
    printf("%d\n",(1<<k)-1);
  }
  return 0; 
}