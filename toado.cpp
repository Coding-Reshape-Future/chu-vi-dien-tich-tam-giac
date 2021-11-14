#include <bits/stdc++.h>

using namespace std;
float a1,a2,b1,b2,c1,c2,x,y,z,t,s,r,AB,BC,CA,S,C,p;
int main()
{
    cout<<"Nhap toa do diem A: ";
    cin>>a1>>a2;
    cout<<"Nhap toa do diem B: ";
    cin>>b1>>b2;
    cout<<"Nhap toa do diem C: ";
    cin>>c1>>c2;
    cout<<fixed<<setprecision(4);
    x=b1-a1;
    y=b2-a2;
    z=c1-b1;
    t=c2-b2;
    s=a1-c1;
    r=c2-a2;
    AB= sqrt(x*x+y*y);
    BC= sqrt(z*z+t*t);
    CA= sqrt(s*s+r*r);
    p=(AB+BC+CA)/2;
    S= sqrt(p*(p-AB)*(p-BC)*(p-CA));
    C= 2*p;
    if(AB>BC+CA && BC>AB+CA && CA>AB+BC){
    cout<<"Dien tich tam giac la: "<<" "<<S<<'\n';
    cout<<"Chu vi tam giac la: "<<" "<<C;
    }
    else cout<<'\n'<<"Toa do da cho khong phai la toa do ba dinh cua tam giac "<<'\n';
    return 0;
}
