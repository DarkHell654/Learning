#include <iostream>
#include <vector>
/*
std::vector<std::vector<int>> matrix_multiply(std::vector<std::vector<int>> v1,std::vector<std::vector<int>> v2 ,std::vector <std::vector<int>> v3) {
	for (int i{ 0 }; i != v1.size(); i++) {
		for (int j{ 0 }; j != v1.size(); j++) {
			for (int k{ 0 }; k != v1.size(); k++) {
				v3[i][j] = v3[i][j] + (v1[i][k] * v2[k][j]);
			}
		}
	}
	return v3;
}
int main()
{
	std::vector <std::vector<int>> a{ {1,2},{3,4} };
	std::vector <std::vector<int>> b{ {1,2},{3,4} };
	std::vector <std::vector<int>> c{ {0,0},{0,0} };
	std::vector<std::vector<int>> x = matrix_multiply(a, b, c);
	for (int i{ 0 }; i != x.size(); i++) {
		for (int j{ 0 }; j != x.size(); j++) {
			std::cout << x[i][j] << " ";

		}
		std::cout << std::endl;
	}
}
*/



 
int main() {
	

}


/*
std::vector <std::vector<int>> 
MMR(std::vector<std::vector<int>> v1 ,std::vector<std::vector<int>> v2 , std::vector<std::vector<int>> v3) {
	if (v2.size() == 1) {
		v1[0][0] = v1[0][0] + (v2[0][0] * v3[0][0]);
		return;
	}
	std::vector <std::vector<int>> temp1, temp2, temp3;
	temp1[0][0] = v1[0][0]; temp2[0][0] = v2[0][0]; temp3[0][0] = v3[0][0];
	MMR(temp1, temp2, temp3);
	temp1[0][0] = v1[0][0]; temp2[0][0] = v2[0][1]; temp3[0][0] = v3[0][1];
	MMR(temp1, temp2, temp3);
	temp1[0][0] = v1[1][0]; temp2[0][0] = v2[0][0]; temp3[0][0] = v3[1][0];
	MMR(temp1, temp2, temp3);
	temp1[0][0] = v1[1][0]; temp2[0][0] = v2[0][1]; temp3[0][0] = v3[1][1];
	MMR(temp1, temp2, temp3);

	return 5;
}
*/













//binary search
/*std::vector<int> BSInsertionSort(std::vector<int> v1) {
	
	for (int i{ 0 }; i < v1.size(); i++) {
		int mid = i/2;
		int key = v1[i];
		while (v1[mid] > key) {
			v1[i] = v1[mid];
			v1[mid] = key;
			mid = mid/2;
		}
		
			
		
		

	}
	return v1;
}
*/ 
	

//int main(){

 
//-----------------------------------------------C++----------------------------------------------------------	


//CHP3 vectors and arrays etc...
	
//*Intro to vectors
	//**defining and initializing a vector
		/*
			std::vector<int> A{ 2 , 3 };
			std::vector<int> B(A); // someshit1 initilized with copy of someshit
			std::vector<std::string> S {"this is a palaraphom", " this", "is ", "palaraphom"  }; //list initialization
			std::vector <std::string> IT(6, "hie"); //6 elements each with the string value "hie"
			std::vector <std::string> IT2 (6); //default initilized to empty string
			std::vector<std::string> ST{ 6 , "LOOK!" }; //ST cannot be initiliazed with 6 , therefor it will use this value to construct the vector
			std::vector<std::vector<int>> d; //vectors can contain elements of vectors
			// remember "()" contruct , "{}" list initialize if possible , if not it will try to construct instead
			*/
	//**Adding elements to vector
		/*
			std::vector<int> D;
			for (int i{ 0 }; i != 100; i++) {
				D.push_back(i);              //push_back is a method that takes an input and adds it to the  vector as new element at the end
			}
			//reading words from the user and storing them in a vector
			std::string word;
			std::vector<std::string> Wordywords;
			while (std::cin >> word) {			//reads a full sentence from the user and stored the remaining words in stdd::cin-
												//until cin is empty
				Wordywords.push_back(word);		//inserts each word in the Wordywords vector
			}
			*/
	//**other vector operations
		/*
			std::vector<int> j{ 1 , 2 , 3 , 4 };
			for (auto& i : j) {  //note we made i is a reference so we change the elements in the vector otherwise we would changing i
				i *= i;
			}
			for (auto i : j) {
				std::cout << i << '\n';
			}
					//the empty() and size() memebers behave just like in strings-
					//empty() returns a bool indicating whether the vector is empty or not
					//size() returns the number of elements in a vector
					//The size member returns a value of the size_type defined by the corresponding vector type.
					//a size_type is the type of a value that the type.size() returns depending on the type
					//for example a string.size returns unsigned int which we can find by writing string::size_type
					// note :To use size_type, we must name the type in which it is defined. A
					//vector type always includes its element type(§ 3.3, p. 97) :
					//vector<int>::size_type // ok
					//vector::size_type // error
					//just like arrays we can subscript a vector v like this v[i] where i is defined as decltype(v.size()) i;
					//note subscripting doesn't add elements

					*/
	//**Exercise 3.16
		/*std::vector<int> v1(10);
							std::vector<int>::size_type x = v1.size();
							std::cout << x << '\n';
							for (auto& i : v1) {
								std::cout << i << '\n';
							}*/
		/**Exercise 3.16				//this exercise is good!
			/*std::vector<std::string> V;
									std::string sentance;
									while (getline(std::cin, sentance)) {
										for (decltype(sentance.size()) i{ 0 }; i != sentance.size(); i++) {
											sentance[i] = toupper(sentance[i]);
										}
										V.push_back(sentance);
									}
									for (decltype(V.size()) j{ 0 }; j != V.size(); j++) {
										if (j % 8 == 0) {
											std::cout << std::endl;
										}
										std::cout << V[j];


									}*/
	//**Exercise 3.20			//needs simplifying/adjusting 
		/*
											std::vector<int> A{1 , 2,3,4,5};
											int x;
											while (std::cin >> x) {
												A.push_back(x);
											}
											int sum;
											if (A.size() % 2 != 0) {
												A.push_back(0);
											}

											for (int i{ 0 }; i !=  A.size() ; i = i + 2){
												sum = A[i] + A[i + 1];
												std::cout << sum << '\n';


											}*/
		/*
													if (A.size() % 2 == 0) {
														for (int i{ 0 }; i != A.size(); i++) {
															std::cout << A[i] + A[A.size() -1 - i]<<'\n';
														}
													}
													else {
														int x = ((A.size() + 1) / 2) -1;
														for (int i{ 0 }; i <= x; i++){
															if (i == x) {
																std::cout << A[x] << '\n';
															}
															else {
																std::cout << A[i] + A[A.size() -1 - i] << '\n';
															}
														}
													}
													*/
		/*#include <iostream>
														#include <vector>


														void sum_adjacent(const std::vector<int>& v) {
															if (v.size() < 2) {
																return;
															}
															for (decltype(v.size()) i = 0; i < v.size() - 1; ++i) {
																std::cout << v[i] + v[i + 1] << '\t';
															}
															std::cout << std::endl;
														}
														void sum_symmetric(const std::vector<int>& v) {
															// If the vector has odd size, element in the middle will add to itself.
															auto mid = (v.size() + 1) / 2;
															for (decltype(mid) i = 0; i != mid; ++i) {
																std::cout << v[i] + v[v.size() - 1 - i] << '\t';
															}
															std::cout << std::endl;
														}

														int main() {
															std::vector<int> iv{ 1 , 2 , 3, 4,5};

															sum_adjacent(iv);
															sum_symmetric(iv);

															return 0;
														}
														*/						//github solution		
//*Introducing Iterators

	//**using iterators to iterate through a string , iterators are just like pointers ...
		/*
			std::string someshit{ "string" };
			for (decltype(someshit.begin()) it = someshit.begin(); it != someshit.end() && !isspace(*it); it++) {
				*it = toupper(*it);
				std::cout << *it <<'\n';

			}
			*/
	//**Iterator types
		/*
			std::vector<int>::iterator a;				//vector iterator
			std::string::iterator b;					//string iterator
			std::vector<int>::const_iterator c;			//a const_iterator may read but not write the element it denotes
			std::string::const_iterator d;				// anobject of type iterator can both readand write
			//...
			*/
	//**The begin and end operations
		/*
			const std::vector<int> V;
			std::string M;
			auto it = V.begin();						//since V is const the type returned by begin and end is const_iterator type , it is const-
			auto it1 = M.end();							//-iterator
			auto it2 = M.cend();						//if the object is not constant they return iterator type , it1 is nonconst iterator
			auto it3 = M.cbegin();						//regardless of wether the container is const of not , cbegin() and cend() will return-
			*/										//-a const_iterator type , therefore it2 & it3 are const iterators we can read but not write
	//**Combining dereference and memeber access
		/*
			//when we dereference an iterator , we get the object that the iterator denotes, if that object has a class type
			//we might want to access a memeber of that object for example :
			std::vector<std::string> V{ "hello" , "there!", "GO!" };	//V has elements of type string which is a class
			std::vector<std::string>::iterator it = V.begin();			//it is an iterator to V
			(*it).empty();												//we derefernce the first element in V and check if it's empty-
			it->empty();												//-by accessing it's class memeber : empty()
																		//note : parantheses are necessary to access the memebers
																		//instead of dereferencing and then accessing we can combine the 2-
																		//-operations together by using the "->" operator like this: it->empty();
			//note1: we cannot add elements to a vector in the range-based for loop
			//note2: any operation such as push_back that changes the size of the vector potentially invalidates all iterators into that-
			//-vector , meaning loops that use iterators should not add elements to the container to which the iterators refer to...
			*/
	//**Exercise 3.21
		/*
			std::vector<int>v1;									//you can adjust the vectors here
			std::cout << "the elements are :\n";
			for (auto it = v1.cbegin(); it != v1.cend(); it++) {

				std::cout << *it << '\n';
			}
			std::cout << "the size is : " << v1.size();
			*/
	//**Exercise 3.22
		/*
			std::vector<std::string> v1{"read","untill","the","empty string" , "","not this"};
			std::cout << std::endl;
			for (auto it{ v1.begin() }; it != v1.end() && !it->empty(); it++) {
				for (auto& i : (*it)) {
					i = toupper(i);
				}
				std::cout << *it << " ";
			}
			*/
	//Exercise 3.23
		/*
			std::vector<int> v1(10, 4);
			for (auto it{ v1.begin() }; it != v1.end(); it++) {
				*it *= 2;
				std::cout << *it << std::endl;
			}
			*/
	//**Iterator Arithmetic
		/*
	std::vector<int> vi(20, 2);
	auto mid = vi.begin() + vi.size() / 2;			//in this operation we move the iterator returned by begin by 10 to the right
													//note we can moving iterators are noted in the table on the note folder
													//we can move iterators right past the end of the container or to the right and left
													//subtracting an iterator from an iterator will yeild an integer if added-
													//to the right iterator will result in the left iterator : t1 -t2 = n , t2 + n = t1-
													//-n's type is the type differenece_type , vector<int>::difference_type n;
	*/
	//A.begin() + (A.end() - A.begin())/2
		/*
	std::vector<int> A{ 2,1,3,6,4,5,8,6,2 };
	int sum;
	for (auto it = A.begin(); it != A.begin() + ((A.end() - A.begin()) / 2)  ; it++) {
	std::cout << *it + (*it)[A.size()-*it] << '\n';
	}
	*/
	
//*Arrays
	//arrys to pointers:
		/*
		int* ptrs[10]; // ptrs is an array of ten pointers to int
		int& refs[10] = // ?; // error: no arrays of references
		int(*Parray)[10] = &arr; // Parray points to an array of ten ints
		int(&arrRef)[10] = arr; // arrRef refers to an array of ten ints
		*/
		//accessing elements of an array
			/*//When we use a variable to subscript an array, we normally should define that
			//variable to have type size_t.size_t is a machine - specific unsigned type that
			//is guaranteed to be large enough to hold the size of any object in memory.The
			//size_t type is defined in the cstddef header, which is the C++ version of the
			//stddef.h header from the C library*/
			//pointers to arrays
				/*
				//auto ia2 (ia); ... let ia be an arrya then ia2 automatically is a pointer to the first element!
				//pointers are arrays iterators
				//int arr[] = { 10, 12, 15, 14 };
				//int *p = arr;
				//std::cout << *(++p);
				//p = &arr[4]; // pointer to one step past the last element
				//std::begin(arr); //returns a pointer to the first element
				//std::end(arr); //returns a pointer to the last element
				//we can use pointers same way as we use iterators... pointers are like iterators to an array
				//the result of subtracting two pointers is a library type ptrdiff_t defined in cstddef head
				//we cannot use unrelational operators on pointers to unrelated objects
				//pointer arithematic is also valid for null pointers
				//when we subscript an array we are really just dereferencing a pointer to that elemen in the array.
				//int i = arr[2];		//arr is a pointer... arr[2] fetches (dereference) the element to which (arr + 2) points.
				//we can use the subscript operator on any pointer as long as the pointer points to an element in the array
				//int* y = &arr[2];
				//int j = y[1];		//y[2] is equivalent to *(y + 1)
				//int k = p[-2];		// p[-2] is the same element as ia[0]
			//Exercise 3.35
				//int x[] = { 1 , 2, 3, 4 };
				//for (int* p = x; p != p + 4; p++ ) {
					//*p = 0;
				//}
			//Exercise 3.36
				int x[] = { 1,2,3,4,5,6 };
				int arr[] = { 10,2,5,3,6,7 };
				for (int* p{ std::begin(x) }, * j{ std::begin(arr) }; p != std::end(arr); p++, j++) {
					if ((*p != *j) or (sizeof(x) != sizeof(arr)) ) {
						std::cout << "no";
						break;
						}
				}
				*/
				//C-Style Character Strings
					/*char ca[] = { 'C','+','+' , '\0' }; //must always end with a null : \0
				std::cout << strlen(ca) << std::endl; // strlen() returns the length of ca , not counting the null
				*/
				//Using an Array to Initialize a vector
					/*
				int int_Arr[] = { 1,2,3,3,6,6,5,85,4 };
				std::vector<int> ArrHolder(std::begin(int_Arr), std::end(int_Arr)); //in order to initialize a vector with an array , we initialize
				//the vector 2 pointers , the first one pointing to the first element in the array and the second one pointing to one past the last
				//element.
				//The specified range can be a subset of the array:
				std::vector<int> subVec(int_Arr + 1, int_Arr + 4);
				*/
				//*MultiDimensional Arrays
					//Definition etc...
						/*
					//array ia of 3 elements who's elements are also arrays of 4 elements
					//representation :
					//				   | 2 | 3 | 4 | 5 |  <----- first element contains 4 elements
					//                 | 1 | 2 | 6 | 7 |  <----- second element contains 4 elements
					//				   | 8 | 5 | 9 | 0 |  <----- third element contains 4 elements
					//int ia1[3][4] = {
					//	{1,2,3,4},
					//	{5,6,7,8},
					//	{9,10,11,12},
					//};

					//int ia2[3][4] = { 0 , 3,6,9 };	//this code initializes the elements of the first row , the remaining elements are init to 0.
					//for (int i{ 0 }; i != 3; i++) {
						//for (int j{ 0 }; j != 3; j++) {
							//std::cout << ia1[i][j] << std::endl;
						//}
					//}
					//for (auto& a : ia1) {
					//	for (auto& x : a) {
					//		std::cout << x << std::endl;
					//	}
					*/
					//Pointers and Multidimensional Arrays...
						/*
					int ia[3][4];
					int(*p)[4] = ia;	//p points to the first element in ia , which is an array of 4 ints
					p = &ia[2];			//now p points to the second element in ia which is an array of 4 ints
					*/
					//Exercise 3.43
						/*
					constexpr int x = 4;
					constexpr int y = 3;
					int ia[x][y] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };
					for (auto *p = ia; p != std::end(ia);p++) {
						for (auto *j = std::begin(*p); j != std::end(*p);j++){
							std::cout << *j << std::endl;
						}
					}
					*/

//CHP4 Expressions...
	//{
		//*Fundamentals
			//**Basic Concepts
				/*
				//Unary operators such as address-of (&) and dereference (*) operators, act on one operand.
				//Binary operators, such as equality(==) and multiplication (*), act on two operands.
				//Note there is also ternary operator (that takes three operands), one operator ..., and function call that
				//takes an unlimited number of operands.
				//The language defines what the operators mean when applied to built-in and compound types.
				//We can also define what most operators mean when applied to class
				//types. Because such definitions give an alternative meaning to an existing operator symbol,
				//we refer to them as overloaded operators.
				*/
			//**Lvalues and Rvalues
				/*
				//an Lvalue expression yields an object of a function,
				//however some Lvalues such as const objects may not be the left hand operand of an assignment.
				//When we use an object as an rvalue , we use the object's value(its contents), and we use an object
				//as an lvalue to refer to the object's identity (its location in memory)
				*/
			//**The Relational Operators
				/*
				//int i, j, k;
				//if (i < j < k); // true if k is greater than 1 , because this expression evaluates (i<j) to be true
				// or false, if i<j is true than the expression is set to 1 and k has to be greater than that :
				// i < j < k = (i < j) < k = 1 < k or 0 < k .
				//Note we we cannot compare if an object is nonzero integer or double like this :
				//if (k == true); //because k is not a boolen value... the true operand on the right will be converted into
				//the type of k , in this example k will be converted into integer which is 1... and therefore this condition
				//will check if k is equal to 1 , not nonzero .
				*/
			//**Assignment Has Low Precedence
				/*
				//Assignments often occur in contion...
				//instead of writting the following code...
				//int i = get_value();
				//while (i != 42) {
					//do something
					//i = get_value();
				//}
				//we can write...
				//...
				//while ((i = get_value()) != 42){ // do something } .
				*/
			//**Increament and decremeant operators
				/*
				//There are two forms of these operators : prefix and postfix.So far, we have used
				//only the prefix form.This form increments(or decrements) its operandand yields
				//the changed object as its result.The postfix operators increment(or decrement) the
				//operand but yield a copy of the original, unchanged value as its result :
				//int i = 0, j;
				//j = ++i; // j = 1, i = 1: prefix yields the incremented value
				//j = i++; // j = 1, i = 2: postfix yields the unincremented value
				//the following codes , show the difference between good and bad optimization :
				//std::string someshit{ "hello" };
				//for (auto it = someshit.begin(); it != someshit.end() && !isspace(*it); it++) {
				//	*it = toupper(*it);
				//}
				//better way to do it 
				//auto it = someshit.begin();
				//while (it != someshit.end() && !isspace(*it)){
				//	*it = toupper(*it++);
				//}
				*/
			//**The Conditional Operator
				/*
				int grade;
				std::cin >> grade;
				std::string finalgrade = (grade < 60) ? "fail" : "pass"; // "?" works as a simple if condition logic
				std::cout << finalgrade;
				*/
			//**The Bitwise Operators
				/*int bits = 5;
				std::cout << bits;
				int x = bits << 1;				//the operator "<<" shifts bits 8 bits to the left 
				int y = bits >> 1;				//the operator ">>" shifts bits 8 bits to the right
				int z = ~bits;					//the operator "~" inverts all the bits of its operand
				std::cout << '\n' << z;
												//For each bit position in the result of the bitwise AND operator (the& operator)
				int x1 = 5, y1 = 6;				//the bit is 1 if both operands contain 1; otherwise, the result is 0. 
				std::cout << (x1 ^ y1);			//For the OR(inclusive or ) operator (the | operator), the bit is 1 if either or both operands contain 1;
												//otherwise, the result is 0. For the XOR(exclusive or ) operator (the ^ operator), the
									*/			//bit is 1 if either but not both operands contain 1; otherwise, the result is 0.
			//**The Sizeof Operator


//---------------------------------------------Algorithms------------------------------------------------------	
	//**Recursion 
	//Exercise 2.1.5
	/*
			int A[5] = { 0,1,0,1,1 };
			int B[5] = { 1,0,1,1,1 };
			int C[6];
			int carry{ 0 };
			for (int i{ 4 }; i >= 0 ; i--) {


				if ( (A[i] == 1) && (B[i] == 1) && (carry == 1)) {
					C[i] = 1;
					carry = 1;
				}
				else if ((((A[i] == 1) && (B[i] == 0)) || ((A[i] == 0) && (B[i] == 1))) && (carry == 1)) {
					C[i] = 0;
					carry = 1;
				}
				else if ((A[i] == 0) && (B[i] == 0) && (carry == 1)) {
					C[i] = 1;
					carry = 0;
				}
				else if ((A[i] == 1) && (B[i] == 1)) {
					C[i] = 0;
					carry = 1;
				}
				else if (((A[i] == 0) && (B[i] == 1)) || ((A[i] == 1) && (B[i] == 0))) {
					C[i] = 1;
					carry = 0;
				}
				else if ((A[i] == 0) && (B[i] == 0)) {
					C[i] = 0;
					carry = 0;
				}
				if (i == 0) {
					C[5] = C[4];
					C[4] = C[3];
					C[3] = C[2];
					C[2] = C[1];
					C[1] = C[0];
					C[0] = carry;
				}

			}
			for (int k{ 0 }; k < 6; k++) {
				std::cout << C[k];
			}

			*/
	//INSERTION SORT ALGORITHM
	/*{
				int list[6] = { 31,41,59,26,41,58 };
					  //
				for (int i{ 1 }; i < 6; i++) {

					int key = list[i];
					int j = i - 1;
					while (j > -1  && list[j] < key) {
						list[j + 1] = list[j];
						j = j - 1;


					}

					list[j + 1] = key;
				}

				for (int k{ 0 }; k < 6; k++) {
					std::cout << '\n' << list[k] << '\n';
				}
			}*/
	//Exercise 2.1-4
	//Exercise 2.2-2
	/*
			int list[5] = { 5,4,3,2,1 }; //n = 5
			for (int i{ 0 }; i < 4; i++) {
				int mini = list[i];
				for (int j{ i + 1 }; j < 5; j++) {
					if (list[i] > list[j]) {
						list[i] = list[j];
						list[j] = mini;
						mini = list[i];
					}
				}
			}
			for (int k{ 0 }; k < 5; k++) {
				std::cout << '\n' << list[k] << '\n';
			}


		}

		*/
	//MERGE algorithm
	/*
		std::vector<int> v1{ 2 , 3 , 5, 7, 8 , 1 , 2 , 3 , 4 , 6 };
		std::vector <int> v2{ 2 , 3 , 5, 7, 8 };
		std::vector <int> v3{ 1 , 2 , 3 , 4 , 6 };
		int i{ 0 };
		int j{ 0 };
		int k{ 0 };
		while ((i < 4) & (j < 5)) {
			if (v2[i] <= v3[j]) {
				v1[k] = v2[i];
				i++;
			}
			else {
				v1[k] = v3[j];
				j++;
			}
			k++;
		}
		while (i < 4) {
			v1[k] = v2[i];
			i++;
			k++;
		}
		while (j < 5) {
			v1[k] = v3[j];
			j++;
			k++;
		}
		for (int x{ 0 }; x != 9; x++) {
			std::cout << v1[x] << " ";
		}






		*/
	//Exercise ???
	/*
		std::vector<int> AddBinary(std::vector<int> v1, std::vector<int> v2) {
			std::vector<int> v3;
			auto carry = 0;
			for (int i(std::max(v1.size(), v2.size()) - 1); i >= 0; i--) {
				v3.push_back((v1[i] + v2[i] + carry) % 2);
				carry = (int)std::floor((v1[i] + v2[i] + carry) / 2);
	
			}
			v3.push_back(carry);
			return v3;

		}
		*/
	//Exercise 2.2-2(fixed)
	//Linear Search 
	
