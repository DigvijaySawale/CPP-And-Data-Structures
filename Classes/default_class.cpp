class student{

	public:
		int rollno;

		private: 
		int age;

	public:
		
		
		student()
	    {	               //this is default constructor 
	        cout << "Default constructor called!" << endl;
	    }

	    student(int r)
	    {	        //this is parameterised constructor 
	        cout << "Parameterised constructor called!" << endl;
	        rollno = r;
	    }

	    student(int a, int r)
	    {
	        //this is parameterised constructor with two parameters
	        cout << "Parameterised constructor 2 called! " << endl;
	        age = a;
	        rollno = r;
	    }
	    
    	~student()
    	{
    		cout << "Destructor called ! " << endl;
		}

		void display()
		{
			cout << age << " " << rollno <<endl;
		}

		int getAge()             // getter function 
		{
			return age;
		}
		
		void setAge(int a)       //setter function
		{
			age = a;
		}
		
};
