#pragma once
using namespace std;
class Member{
    list<Member*>follows;
    list<Member*>followers;
    //std::vector<Member*> follows;
    //std::vector<Member*>::iterator pfs;
    //std::vector<Member*> followers;
    //std::vector<Member*>::iterator pfers;
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
