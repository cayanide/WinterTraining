#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <utility>
using namespace std;


int main() {

    unordered_map<string,int> map;

    //1st way of Insertion

    pair<string, int> p =make_pair("sayan",3);
    map.insert(p);

    //2nd Way of Insertion

    pair<string,int> pair2("love",2);
    map.insert(p);

    //3rd Way of Insertion

    map["mera"]=1;

    //Updation
    map["mera"]=2;

    //Search
    cout<< map["mera"]<<endl;

    cout<<map["sayan"]<<endl;



    return 0;
}
