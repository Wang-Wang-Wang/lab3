#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
const int size = 8;
string n;
//int init_cow[size];
int insert, moveItem;
vector<int> cow(size);

ifstream inFile("file.in", ios::in);
if(!inFile) {

cerr << "Failed opening" << endl;
exit(1);
}

getline(inFile,n);
for(int i=0; i<size; ++i){

inFile>>cow.at(i);
}

sort(cow.begin(),cow.end());
/*for(int next=2;next<size;++next){

insert = cow.at(next);
moveItem = next;

while((moveItem>1) &&(v.at(moveItem-1) < insert)){

cow.at(moveItem) = cow.at(moveItem-1);
--moveItem;
}

cow.at(moveItem) = insert;
}*/

ofstream outFile("stdout", ios::out);

outFile<<cow.at(size-1)+cow.at(size-2)+cow.at(size-3)+cow.at(size-4)+cow.at(size-5)<<endl;


return 0;
}
