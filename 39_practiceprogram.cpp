#include <iostream>
using namespace std;
class Student{
private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;
public:
    Student();
    Student(int roll, string name, int mathMarks, int chemM,int phyM);
    void setRoll(int roll);
    void setName(string name);
    void setMathMarks(int mathMarks);
    void setPhyMarks(int phyMarks);
    void setChemMarks(int chemMarks);
    int getRoll();
    string getName();
    int getMathMarks();
    int getPhyMarks();
    int getChemMarks();
    int total();
    ~Student();
};

int main(){
Student s(34,"Aman",60,80,90);
cout<<s.getRoll()<<endl;
cout<<s.getName()<<endl;
cout<<s.getMathMarks()<<endl;
cout<<s.getPhyMarks()<<endl;
cout<<s.getChemMarks()<<endl;
cout<<s.total()<<endl;
    return 0;
}

Student::Student(){
    roll=0;
    name="Unknown";
    mathMarks=0;
    phyMarks=0;
    chemMarks=0;
}

Student::Student(int roll, string name, int mathMarks, int chemMarks,int phyMarks){
     setRoll(roll);
     setName(name);
     setMathMarks(mathMarks);
     setPhyMarks(phyMarks);
     setChemMarks(chemMarks);
}

void Student::setRoll(int roll){
    if(roll>=0)
    this->roll=roll;
    else{
        cout<<"Roll No. cannot be negative";
    }
}

void Student::setName(string name){
    this->name=name;
}

void Student::setMathMarks(int mathMarks){
    if(mathMarks>=0){
        this->mathMarks=mathMarks;
    }
    else{
        cout<<"Marks cannot be negative";
        this->mathMarks=0;
    }
}

void Student::setPhyMarks(int phyMarks){
    if(phyMarks>=0){
        this->phyMarks=phyMarks;
    }
    else{
        cout<<"Marks cannot be negative";
        this->phyMarks=0;
    }
}

void Student::setChemMarks(int chemMarks){
    if(chemMarks>=0){
        this->mathMarks=mathMarks;
    }
    else{
        cout<<"Marks cannot be negative";
        this->chemMarks=0;
    }
}

int Student::getRoll(){
    return roll;
}

string Student::getName(){
    return name;
}

int Student::getMathMarks(){
    return mathMarks;
}

int Student::getChemMarks(){
    return chemMarks;
}

int Student::getPhyMarks(){
    return phyMarks;
}

int Student::total(){
    return chemMarks+phyMarks+mathMarks;
}

Student::~Student(){
    cout<<"Destroyed";
}




// #include<iostream>
// using namespace std;
// class Student{
//     int roll;
//     string name;
//     int mathMarks;
//     int phyMarks;
//     int chemMarks;
    
//     public:
//     Student(int r,string n,int m,int p,int c){
//         roll=r;
//         name=n;
//         mathMarks=m;
//         phyMarks=p;
//         chemMarks=c;
//     }
        
//     int total(){
//         return mathMarks+phyMarks+chemMarks;
//     }
        
//     char grade(){
//         float average=total()/3;
        
//         if(average > 60)
//             return 'A';
//         else if(average>=40 && average<=60)
//             return 'B';
//         else
//             return 'C';
//     }
    
// };
    
// int main(){
//     int roll;
//     string name;
//     int m,p,c;
//     cout<<"Enter Roll Number of a Student: ";
//     cin>>roll;
//     cout<<"Enter Name of a Student:";
//     cin>>name;
//     cout<<"Enter Marks in 3 Subjects";
//     cin>>m>>p>>c;
//     Student s(roll,name,m,p,c);
        
//     cout<<"Total Marks:"<<s.total()<<endl;
//     cout<<"Grade of Student:"<<s.grade()<<endl;
// }