#include <iostream>
#include <vector>
#include <string>
#include <fstream>
class person {
    private: 
        std::string m_name;
        int m_age;
        std::string m_s_id;
    public:
        person(std::string name,int age,std::string s_id)
        {
            m_name = name;
            m_age = age;
            m_s_id = s_id;
        }
        std::string get_name()const
        {
            return m_name;
        }
        int get_age()const
        {
            return m_age;
        }
        std::string get_s_id()const
        {
            return m_s_id;
        }
        void set_name(std::string other)
        {
            m_name = other;
        }
        void set_age(int other)
        {
            m_age = other;
        }
        void set_s_id(std::string other)
        {
            m_s_id = other;
        }
};
void wright(const std::vector<person>& K)
{
    std::ofstream ob("person.txt");
    
    for(int i = 0 ; i < K.size(); ++i)
    {
        ob << "name: " << K[i].get_name()<<std::endl;
         ob << "age: " << K[i].get_age()<<std::endl;
          ob << "s_id: " << K[i].get_s_id()<<std::endl;
          ob << "~ \n";
    }
}
std::ostream& operator<<(std::ostream& os, const person& other)
{
    os<<other.get_name()<< "-" << other.get_age()<<"-"<<other.get_s_id()<<std::endl;
    return os;
}
std::vector <person>read()
{
    std::vector<person> vec;
    person ob("Jon",38,"2225");
    std::ifstream file("person.txt");
    std::string tmp;
    while(!file.eof())
    {
        file >> tmp;
       
        if(tmp=="name:")
        {
            file >> tmp;
           ob.set_name(tmp); 
           file >> tmp;
        }
         if(tmp=="age:")
        {
            file >> tmp;
           ob.set_age(stoi(tmp)); 
           file >> tmp;
        }
         if(tmp=="s_id:")
        {
            file >> tmp;
           ob.set_s_id(tmp); 
           file >> tmp;
        }
        
        vec.push_back(ob);
    }
    for(int i=0; i<vec.size();++i)
        {
            std::cout<< vec[i];
        }
    return vec;
}
int main()
{
    std::vector<person> vec;
    person obj("Rafo",27,"ac7776");
    person obj1("Rafo",24,"ac7776");
    person obj2("Rafo",23,"ac7776");
    person obj3("Rafo",22,"ac7776");

    vec.push_back(obj);
    vec.push_back(obj1);
    vec.push_back(obj2);
    vec.push_back(obj3);
    wright(vec);
    read();


}