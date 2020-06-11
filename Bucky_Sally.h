#ifndef BUCKY_SALLY_H
#define BUCKY_SALLY_H

// A member is anything within your class
// A constant variable is one that cant be changed
// Constant variables (in the class) need to be initialized using member syntax
// Member initializers

class  Bucky_Sally {
	// Private section
	public:
		// Public Declarations
		Bucky_Sally(int a,int b);
		void print();
				
		//~Bucky_Sally();
		//void printCrap();
		//void printShiz();
		//void printShiz2() const; 
	protected:
		// Protected Declarations
	private:
		int regVar;
		const int constVar;
		
};

#endif

