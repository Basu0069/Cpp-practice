// #include<bits/stdc++.h>
// using namespace std;

// class Hero{

//     private:
//     int health;

//     public:
//     char level;

//     void print(){
//         cout<<level<<endl;
//     }

//     int getHealth(){
//         return health;
//     }
//     char getLevel(){
//         return level;
//     }
//     void setHealth(int h){
//         health=h;

//     }
//     void setLevel(char ch){
//         level=ch;
//     }
// };

// int main(){
//     // Hero a;
//     // a.setHealth(100);
//     // a.setLevel('B');
//     // cout<<"his level is"<<endl;
//     // a.print();
//     // cout<<"LEVEL IS "<<a.level<<endl;


// // DYanmically kese likhe ga vo dekh 

// Hero *b = new Hero;
// b-> setLevel


//     return 0;
// }



#include<iostream>
using namespace std;

class Hero{

private:
int health;

public:
char level;

    Hero(){
        cout<<"Constructor called "<<endl;

    }

    Hero(int health){
        this-> health=health;
    }
    Hero(int health,char level){
        this->level=level;
        this->health=health;

    }

void print(){
        cout<< level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }


};



int main(){

    Hero ramesh(10);
    Hero *h=new Hero;

    h->print();
    


    return 0;
}
... .....