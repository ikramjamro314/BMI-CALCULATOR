//BMI(body mass index)  CALCULATOR using  if and else statement
/*
#include <iostream>
using  namespace std;
int main() {
    float  bmi;
    float height;
    float weight;
    cout<<"enter  your weight in KG : ";
    cin>>weight;
    cout<<" \n enter your height in meter  : ";
    cin>>height;
    bmi=weight / (height * height);

    if(weight==18.5)
        cout<<"under weight ";
    else if(weight>25)
        cout<<"over weight ";
    else
        cout<<"normal";
    cout<<endl;
    cout<<"your bmi is "<<bmi<<endl;

    return 0;
}
*/
/*
 #include <iostream>
using namespace  std;
int main() {
    //BMI (body MASS INDEX CALCULATOR)
    float weight , height , BMI;
    char ch='y';
    do {
        cout << "enter your weight in KG : ";
        cin >> weight;
        cout << "enter your height in meter : ";
        cin >> height;
        BMI = weight / (height * height);

        if (BMI < 18.5) {
            cout << "under  weight";
        } else if (BMI > 25) {
            cout << "over weight ";
        } else
            cout << "normal";
        cout<<" \n your  BMI ="<<BMI<<endl;
        cout<<"do you want to continue (y/n) ";
        cin>>ch;
        while  (ch!='y' && ch!='n'){
            cout<<"try again "<<endl;

        }
    }while (ch == 'y' || ch== 'Y');


    return 0;
}
*/