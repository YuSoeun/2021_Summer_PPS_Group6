#include<iostream>
 
using namespace std;
 
int main(void){
    //입력
    long long n;
    cin >> n;
 
 
    //계산
    int cnt = 1;        //몇겹인지 = 최소 칸수
    long long range =1; //숫자의 범위 ex) 2~7, 8~19를 나타내기 위함
    long long tmp =1;   //6의 배수를 더하기 위해서 사용
 
    
    while(1){
        if(range >= n){ //숫자의 범위가 커지면 break;
            break;
        }
        tmp = 6 * (cnt++);
        range += tmp;
    }
 
    //출력
    cout << cnt;
    
    return 0;
}


출처: https://blockdmask.tistory.com/155 [개발자 지망생]