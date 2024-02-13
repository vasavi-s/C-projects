#include<bits/stdc++.h>
using namespace std;

class Admission{
    private:
    string name;
    int marks;
    string preference;
    public:
    static int IIT;
    static int NIT;
    Admission(string n, int m, string pref){
        name=n;
        marks=m;
        preference=pref;
    }
    string getPreference(){
        if(marks>=180 && preference=="IIT" && IIT>0){
            IIT--;
            return preference;
        }
        else if(marks>=150 && NIT>0){
            if(preference =="NIT"){
                NIT--;
                return preference;}
            else return "-";
        }
        else return "-";
    }
};

int Admission::IIT=2;
int Admission::NIT=1;

int main()
{
    int noOfStudents;
    vector<pair<string,string>> res;
    cout<<"Enter number of Students: ";
    cin>>noOfStudents;
    while(noOfStudents){
        string name, pref;
        int marks;
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
        cout<<"Enter student college preference: ";
        cin>>pref;
        Admission a(name,marks,pref);
        res.push_back({name, a.getPreference()});
        noOfStudents--;
    }
    cout<<endl;
    for(const auto &r:res){
        cout<<r.first<<": "<<r.second<<endl;
    }
    return 0;
}
