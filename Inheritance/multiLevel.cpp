#include<bits/stdc++.h>
using namespace std;

class GrandParent{
public:
    string GrandFathername;

};

class Parent : public GrandParent{
public:
    string fathername;

};

class Son : public Parent{
public:
    string name;

    void getInfo(){
        cout << "Grand : " << GrandFathername << endl;
        cout << "Fath : " << fathername << endl;
        cout << "Son : " << name << endl;
    }

};

int main(){
    Son st;
    st.fathername = "ABC";
    st.GrandFathername = "CDE";
    st.name = "GHI";

    st.getInfo();
}