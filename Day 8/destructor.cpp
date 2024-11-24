    #include<iostream>
    using namespace std;

    class Student {
        private:
        int *age;
        string name;
        Student(){// constructor
            *age=new int;// dynamic Memory allocated for pointer variable
            *age=18;// Integer into variable
            name="keshav";// static memory location 
        }
        ~Student(){// Destrctor
            delete  *age;// delete dynamic memory for pointer variable . and static auto delete means name auto delete
            *age=nullptr;// pointer ko khali kar diya 

        }

    };
    int main () {

        Student std1;// yha constructor call hua automatic
        
        //yha destrutor call hua kioki std1 ka scope khatm jo ajayega



        return 0;
    }
