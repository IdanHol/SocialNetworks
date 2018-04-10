#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
class Member{
    list<Member*>follows;
    list<Member*>followers;
    static int counter;
    
    public:
        Member();
        void follow(Member &m);
        void unfollow(Member &m);
        int numFollowers();
        int numFollowing();
       static int count();
       
        ~Member();
};
