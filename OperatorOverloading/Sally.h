#ifndef SALLY_H
#define SALLY_H


class Sally
{
    public:
        int num;
        Sally();
        Sally(int);
        //Function would return a Sally obj
        // Whenever you are using an overloaded operator,  you have to start it
        // with the name operator
        //And after it, the name of the operator you wanna overload e.g +,/*
        Sally operator+(Sally);


};

#endif // SALLY_H
