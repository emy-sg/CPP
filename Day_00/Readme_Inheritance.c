				Inheritance in C++
https://www.geeksforgeeks.org/inheritance-in-c/
			-----------------------------------------

A class that is derived from another class is called a "subclass", also a
"derived class", "extended class", or "child class".
The class from which the "subclas" is derived is called a "superclass", also
"base class", or "parent class".
			
			----------------------------------------

 - Inheritance: Is the capability of a class to "derive properties and characteristics from another class".
 "Inheritance": is one of the most important feature of Object Oriented Programming.
 "Sub Class": is the class that inherits properties from another class.
 "Super Class": is the class whose properties are inherited by "Sub Class" is called "Base Class" or "Super Class".

1- Why and When to use inheritance?

 Consider a group of vehicles: Bus, Car and Truck.
 The methods "fuelAmount()", "capacity()", "applyBrakes()" will be same 
 for all of the three classes.
 If we create these three classes avoiding inheritance then we have
 to write all of these functions in each of the three classes.

==> You can clearly see that above process results in duplication of
same code 3 times, this increases the chances of error and data redundancy.

==> To avoid this type of situation, inheritance is used.
 - Using inheritance, we have to write the functions only one time instead
 of three times, and the three classes inherited from the bass class.

" By creating the class Vehicle and write thse three functions in it, and inheriting the three classes from the Vehicule Class, then we did avoid the duplication of data and increase re-usability".

       		---------------------------------------
		  Implementing inheritance in C++

 -For creating a "sub-class" which is inherited from the "base-class" we have
to follow the below syntax.

	Syntax:
		
	 class "subclass_name" : access_mode "base_class_name"
	 {
	 	//body of subclass
	 };

==> Here, "subclass_name" is the name of the sub-class,
 and "access_mode" is the mode in which you want to inherit this sub-class;
	(public, private, or protected).
 and "baseclass_name" is the name of the base class from which you want
 to inherite the sub-class.

- A derived class doesn't inherit "access" to "private data members".
However, it does inherit a full parent object, which contains any 
"private members" which that class declares.

     Example:

	#include <iostream>

     	class Parent
	{
		public:
			int id_p;
	};

	class Child: public Parent
	{
		public:
			int id_c;
	};

	int main()
	{
		child	obj1;

		obj1.id_c = 7;	
		obj1.id_p = 91;
		

		std::cout << "Child id is " << obj1.id_c << std::endl;
		std::cout << "Parent id is " << obj1.id_p << std::endl;
	}



