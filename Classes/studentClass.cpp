//shallow copy and deep copy



class Student
{
	int age;             //private
	char* name;          //since we dont know the size we allocate it dynamic and not give any size;
	
	public:
		Student(int age, char* name)
		{
			this -> age = age;         //here the name of parameter and the data member are same 
			                          //so to differentiate them we use this keyword
			         
		    //shallow copy                 
		//	this -> name = name;////Shallow Copy stores the references of objects to the original memory address.
		
			//deep copy
			this -> name = new char[strlen(name) + 1];
			strcpy(this -> name , name);   //copying the whole data 
		}
		
		void display()
		{
			cout << name << " " << age << endl;
		}
};
