#include <iostream>

using namespace std;

int main()
{
    double f, c, FtoC, CtoF;
    cout << "ფარენჰეიტის ცელსიუსში კონვერტაცია" << endl;
    cout << "შეიყვანეთ ფარენჰეიტი: ";
    cin >> f;
    FtoC= 5*(f-32)/9;
    cout << f << " ფარენჰეიტი უდრის " << FtoC << " ცელსიუსი " << endl;
    cout << "ცელსიუსი ფარენჰეიტში კონვერტაცია " << endl;
    cout << "შეიყვანეთ ცელსიუსი: ";
    cin >> c;
    CtoF= c*9/5+32;
    cout << c << " ცელსიუსი უდრის " << CtoF << " ფარენჰეიტი ";
    
    return 0;
}
