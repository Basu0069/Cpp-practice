#include<bits/stdc++.h>
using namespace std;

class Input{
public:
    void getDetails(string name,int age){

        for(auto &i : name){
            i= toupper(i);
        }
        
        
        cout<<name<<" "<<age;
    }
    
};

int main(){
Input p;
string name;
int age;
cin>> name>>age;
p.getDetails(name,age);
}





Q2 
#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    void getDetails(string name, int age, string gender) {
        for(auto &i : name) {
            i = toupper(i);
        }

        for(auto &i : gender) {
            i = toupper(i);
        }

        cout << name << " " << age << " " << gender;
    }
};

int main() {
    Person p;
    string name, gender;
    int age;
    cin >> name >> age >> gender;
    p.getDetails(name, age, gender);
}