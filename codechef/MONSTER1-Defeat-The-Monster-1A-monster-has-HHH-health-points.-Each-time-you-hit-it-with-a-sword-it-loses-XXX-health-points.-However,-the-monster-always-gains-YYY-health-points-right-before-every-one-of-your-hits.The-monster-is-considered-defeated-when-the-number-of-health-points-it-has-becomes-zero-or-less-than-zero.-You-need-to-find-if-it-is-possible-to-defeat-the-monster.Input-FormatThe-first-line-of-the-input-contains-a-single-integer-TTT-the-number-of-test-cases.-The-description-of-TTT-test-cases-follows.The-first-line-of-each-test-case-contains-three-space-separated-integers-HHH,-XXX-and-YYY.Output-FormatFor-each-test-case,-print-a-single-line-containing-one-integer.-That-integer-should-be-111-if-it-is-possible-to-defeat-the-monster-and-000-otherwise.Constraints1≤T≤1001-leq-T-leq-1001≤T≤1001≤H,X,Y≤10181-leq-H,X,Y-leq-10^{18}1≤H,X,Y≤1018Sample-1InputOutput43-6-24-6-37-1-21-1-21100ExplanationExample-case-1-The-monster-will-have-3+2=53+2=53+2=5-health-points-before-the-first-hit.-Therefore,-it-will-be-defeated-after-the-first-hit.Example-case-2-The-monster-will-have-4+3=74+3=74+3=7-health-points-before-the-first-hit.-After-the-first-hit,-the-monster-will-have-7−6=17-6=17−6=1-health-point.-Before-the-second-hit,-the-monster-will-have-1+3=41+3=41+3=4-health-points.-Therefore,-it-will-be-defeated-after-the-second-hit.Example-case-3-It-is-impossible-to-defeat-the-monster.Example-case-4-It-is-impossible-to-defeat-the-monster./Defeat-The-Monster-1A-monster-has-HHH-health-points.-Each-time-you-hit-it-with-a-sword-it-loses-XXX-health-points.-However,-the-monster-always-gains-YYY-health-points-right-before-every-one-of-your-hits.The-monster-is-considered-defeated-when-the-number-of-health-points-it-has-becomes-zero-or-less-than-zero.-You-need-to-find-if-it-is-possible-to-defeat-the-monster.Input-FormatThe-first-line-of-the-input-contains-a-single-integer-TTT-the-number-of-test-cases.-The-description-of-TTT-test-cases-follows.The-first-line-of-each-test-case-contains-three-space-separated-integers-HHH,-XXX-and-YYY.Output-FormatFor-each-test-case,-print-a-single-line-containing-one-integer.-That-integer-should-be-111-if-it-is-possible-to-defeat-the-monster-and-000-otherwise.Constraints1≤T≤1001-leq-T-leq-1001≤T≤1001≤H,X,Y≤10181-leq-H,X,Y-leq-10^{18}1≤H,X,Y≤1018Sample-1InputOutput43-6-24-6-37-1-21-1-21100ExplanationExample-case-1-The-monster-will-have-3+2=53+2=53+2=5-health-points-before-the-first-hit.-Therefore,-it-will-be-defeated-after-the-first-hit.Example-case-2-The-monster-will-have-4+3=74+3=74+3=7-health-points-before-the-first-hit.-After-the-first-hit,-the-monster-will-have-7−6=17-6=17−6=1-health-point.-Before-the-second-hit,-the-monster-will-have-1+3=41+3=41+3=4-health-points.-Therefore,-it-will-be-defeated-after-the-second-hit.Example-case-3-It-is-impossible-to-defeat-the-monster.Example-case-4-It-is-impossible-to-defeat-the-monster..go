#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <ctime>
#include <map>
#include <sstream>
using namespace std;
int main ()
{
    int t1=clock();

    map<int,string> mymap;
    map<int,string>::iterator it;
    vector<string> input_vect;
    string string_temp;
    int recipes,queries,priority_temp;


//     mymap.insert(pair<int,string>(1000000001-100,"flour-with-egg"));
//     mymap.insert(pair<int,string>(1000000001-(-10),"chicken-ham"));
//     mymap.insert(pair<int,string>(1000000001-200,"flour-without-eggs"));
//     mymap.insert(pair<int,string>(1000000001-1100,"fish-with-pepper"));
//     input_vect.push_back("f");
//     input_vect.push_back("flour-with");
//     input_vect.push_back("flour-with-");
//     input_vect.push_back("c");
//     input_vect.push_back("fl");
//     input_vect.push_back("chik");

/*
    for(int i=0;i<1000;i++)
        mymap.insert(pair<int,string>(1000000000+i*1000,"sekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegse"));

    for(int i=0;i<1000;i++)
        input_vect.push_back("kfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegsesekfnaofnsorinafaoasinsegnsoiegsegse");
*/


//    cin >> recipes;
//    for(int i=0;i<recipes;i++)
//    {
//        cin.ignore();
//        getline(cin,string_temp,' ');
//        scanf("%d",&priority_temp);
//        temp_final=1000000000+priority_temp;
//        mymap.insert(pair<int,string>(temp_final,string_temp));
//    }
//    cin >> queries;
//    for(int i=0;i<queries;i++)
//    {
//        cin.ignore();
//        getline(cin,string_temp);
//        input_vect.push_back(string_temp);
//    }

    stringstream ss2;
    cin >> recipes;
    for(int i=0;i<1000;i++)
    {
        ss2 << string_temp << ' ' << priority_temp;
        cin.ignore();
        getline(cin,string_temp,' ');
        scanf("%d",&priority_temp);
        mymap.insert(pair<int,string>(1000000000+priority_temp,string_temp));
    }
    cin >> queries;
    for(int i=0;i<queries;i++)
    {
        cin.ignore();
        getline(cin,string_temp);
        input_vect.push_back(string_temp);
    }

    for(int i=0;i<input_vect.size();i++)//Running Queries
    {
        bool found=false;
        for(it=mymap.begin();it!=mymap.end();it++)
            if(it->second.find(input_vect.at(i))!=string::npos)
            {
                input_vect.at(i)=it->second;
                found=true;
                break;
            }
        if(found==false)
            input_vect.at(i)="NO";
    }


//    for(int i=0;i<input_vect.size();i++)
//        printf("%s\n",input_vect.at(i).c_str());


    stringstream ss;
    for(int i=0;i<input_vect.size();i++)
        ss << input_vect.at(i)+"\n";
    cout << ss.str();



//    for(int i=0;i<input_vect.size();i++)
//        cout << input_vect.at(i) << endl;

    int t2=clock();
    double time=((double)t2-t1)/CLOCKS_PER_SEC;
//    cout << time << endl;

    return 0;
}