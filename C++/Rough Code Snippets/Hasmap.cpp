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

cout<<map["Unknownkey"]<<endl;
cout<<map.at("Unknownkey")<<endl;

//size

cout<<map.size()<<endl;

//Check Presence
cout<<map.count("love")<<endl;
map.erase("love");
cout<<map.size()<<endl;

//One way of Printing MAP

for(auto i:map){
    cout<<i.first<<" "<<i.second<<endl;
}

//Second Way Of Printing Map -- Iterator

unordered_map<string, int>:: iterator it = map.begin();
while(it !=map.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}

    return 0;
}
