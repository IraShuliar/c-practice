
#include <list>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
   list<string> slist;
   vector<string> svec;
   
   int i = 0;
   string word;
   while(word != "end") {
       cout<<"Give word, after last word - text \"*end\" : ";
       
       cin>>word;
       if(word == "*end") {
           break;
       }
       slist.push_back(word);
       svec.push_back(word);
   }
   string searchingWord, result = "The word not found ";
   int listLocation = false;
   int vecLocation = false;
   cout<<"Give the word what do you want to search: ";
   cin>>searchingWord;
   
   
   list<string>::iterator listIt;
   
   for(listIt = slist.begin(); listIt!= slist.end(); ++listIt) {
       if(*listIt == searchingWord) {
           result="In list the word found in location: ";
           listLocation = distance(slist.begin(), listIt);
       }
       cout<< *listIt<<endl;
   }
   
   cout<<endl;
   cout<<result<<listLocation;
   cout<<endl;
   for(vector<string>::iterator vecIt=svec.begin(); vecIt != svec.end(); ++vecIt) {
       if(*vecIt == searchingWord) {
           result="In vector the word found in location: ";
           vecLocation = distance(svec.begin(), vecIt);
       }
       cout<< *vecIt<<endl;
   }
   
   cout<<result<<vecLocation;
   
    system("pause");
    return 0;
}
