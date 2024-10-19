#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string FindX(float a, float b, float c){ //функция для нахождения корней
    if((a == 0) && (b==0) && (c==0)){
        string s="any x";
        return s;
    }
    int d = b*b - 4*a*c; //дискриминант
    if(d==0){
        float x = (-b)/(2*a);
        return to_string(x);
    }
    else if(d<0){
        string s="no x";
        return s;
    }
    else {
        float x1,x2;
        x1 = (-b - sqrt(d))/(2*a);
        x2 = (-b + sqrt(d))/(2*a);
        return to_string(x1)+" "+to_string(x2);
    }
}

int main()
{
	float a,b,c;
	char symbol;
	cout<<"Enter a,b,c"<<endl;
	cin>>a>>b>>c; //коэффициенты квадратного трехчлена
	cout<<"Enter symbol"<<endl;
	cin>>symbol; //символ для дальнейшей работы программы
	switch(symbol){
	    case 'D':
	        cout<<"Kalchenko Evgeniya";
	        break;
	    case 'q':
	        cout<<FindX(a,b,c);
	        break;
	    case 'a':
	        int p,q;
	        cout<<"Enter sides of rectangle"<<endl;
	        cin>>p>>q;
	        cout<<(p*q);//площадь прямоугольника
	        break;
	}
}