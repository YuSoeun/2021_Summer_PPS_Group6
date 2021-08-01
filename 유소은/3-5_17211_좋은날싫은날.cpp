#include <iostream>
using namespace std;
#define MAX 105

int main()
{
    int n,state;
    scanf("%d %d",&n,&state);
    double s_s,s_f,f_s,f_f;
    scanf("%lf %lf %lf %lf",&s_s,&s_f,&f_s,&f_f);
    double smile,fuck;
    double Ts[MAX]={0,};
    double Tf[MAX]={0,};
    if(state)
    {
        Ts[1]=f_s; Tf[1]=f_f;
        for(int i=2;i<=n;i++){
            Ts[i]=Ts[i-1]*s_s+Tf[i-1]*f_s;
            Tf[i]=Ts[i-1]*s_f+Tf[i-1]*f_f;
        }    
    }
    else
    {
      Ts[1]=s_s; Tf[1]=s_f;
        for(int i=2;i<=n;i++)
        {
            Ts[i]=Ts[i-1]*s_s+Tf[i-1]*f_s;
            Tf[i]=Ts[i-1]*s_f+Tf[i-1]*f_f;
        }
    }
    
    smile=Ts[n];
    fuck=Tf[n];
    smile*=1000;
    fuck*=1000;
    printf("%d\n%d\n",(int)(smile+0.5),(int)(fuck+0.5));
    return 0;
}