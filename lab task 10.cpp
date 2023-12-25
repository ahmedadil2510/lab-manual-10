#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    double salary;
    int hours;
};

void increase(Employee& emp) {
    if (emp.hours >= 12) {
        emp.salary += 150.0;} 
		else{
			if (emp.hours >= 10) {
        		emp.salary += 100.0;}
			else{
				if(emp.hours >= 8) {
        			emp.salary += 50.0;}}}	
    }


int main() {
    const int num = 10;

    Employee employees[num];

    for (int i = 0; i < num; i+=1) {
        cout<<"Enter details for Employee " << i + 1 << ":\n";
        cout<<"Name: ";
        cin>>employees[i].name;
        cout<<"Salary: ";
        cin >>employees[i].salary;
        cout<<"Hours of work per day: ";
        cin>>employees[i].hours;
        cout<<endl;
    }

    for (int i = 0; i < num; i+=1) {
        increase(employees[i]);
    }

    cout << "Employee Details after Salary Increase:\n";
    for (int i = 0; i < num; i+=1) {
        cout << "Employee " << i + 1 << ": " << employees[i].name << "\n";
        cout << "Final Salary: $" << employees[i].salary << "\n\n";
    }

    return 0;
}







////	LAB TASK 1
//	vector<int> a;
// 
//    for (int i=0; i<=100; i+=10)
//        {a.push_back(i);}
//	cout << "Vector: ";
//    for (vector<int>::iterator i = a.begin(); i!=a.end(); i+=1)
//        {cout << *i << " ";}
//    cout<<endl;
////	adding integer 5
//	a.push_back(5);
//	cout << "Vector after pushing back integer 5: ";
//    for (vector<int>::iterator i = a.begin(); i!=a.end(); i+=1)
//        {cout << *i << " ";}
//    cout<<endl;
////	removing element at position 5
//	a.erase(a.begin()+4);
//	cout << "Vector after pushing back integer 5 and removing 5th element: ";
//    for (vector<int>::iterator i = a.begin(); i!=a.end(); i+=1)
//        {cout << *i << " ";}

////	LAB TASK 2
//	vector<string> names;
//	vector<int> marks;
//
//	int n;
//	cout<<"Please enter the number of students: "<<endl;
//	cin>>n;
//	float n2=n;
//
//	for (int i=0; i<n; i+=1){
//		string name;
//		int mark=0;
//		cout<<"Name:"<<endl;	
//		cin>>name;
//		cout<<"Mark:"<<endl;
//		cin>>mark;
//		if(mark>100 || mark<0){cout<<"Please enter a valid mark, try again. "; i-=1; continue;}
//		names.push_back(name);
//		marks.push_back(mark);}
//	float mean, median, mode;
//	int sum=0;
//	for (vector<int>::iterator i = marks.begin(); i!=marks.end(); i+=1){
//		sum=sum+*i;}
//	mean = sum/n2;
//	cout<<"The mean mark is: "<<mean<<endl;
//	
////	median calculation:
//	vector<int> bubmarks = marks;
//    for (int i=0; i<n - 1; i+=1) {
//        for (int j=0; j<n-i-1; j+=1) {
//            if (bubmarks[j] > bubmarks[j + 1]) {
//                swap(bubmarks[j], bubmarks[j + 1]);
//            }}}
//	float medpos=(n2/2)-1;
//	if(n%2==0){median = (bubmarks[medpos]+bubmarks[medpos+1])/2;}
//	if(n%2==1){median = bubmarks[medpos+0.5];}
//	cout<<"The median mark is: "<<median<<endl;
//	
////	mode calculation:
//	int d=1;
//	int dmax=1;
//	int modpos;
//	vector<int> modpositions;
//	vector<int> modpositions2;
//	for (int i=0; i<n; i+=1){
//		d=1;
//		modpositions2.push_back(i);
//    	for (int j=0; j<n; j+=1){
//    		if(j==i){continue;}
//        	if(marks[i]==marks[j]){d+=1; modpositions2.push_back(j);}
//			}
//        if(d>dmax){dmax=d; mode=marks[i]; modpos=i; modpositions =modpositions2;}
//        if(d<=dmax){modpositions2.clear();}
//	}
//    if(dmax==1){cout<<"There is no mode mark."; return 0;}
//	cout<<"The mode mark is: "<<mode<<endl;
//	cout<<"The students with the mode as their mark are: "<<endl;
//	for (vector<int>::iterator i=modpositions.begin(); i!=modpositions.end(); i+=1){
//	cout<<names[*i]<< " ";}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class triangle {
//private:
//    double side1, side2, side3;
//
//public:
//    triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
//
//double calculatePerimeter() {
//   	return side1 + side2 + side3;
//    }
//
//double calculateArea() {
//	double s = calculatePerimeter() / 2.0;
//	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
//    }
//
//void output() {
//    cout << "Sides of the triangle: " << side1 << " m, " << side2 << " m, " << side3 << " m\n";
//    cout << "Perimeter: " << calculatePerimeter() << " m\n";
//    cout << "Area: " << calculateArea() << " square meters\n";
//    }
//};
//
//int main() {
//    triangle triangleinput(3, 4, 5);
//    triangleinput.output();
//
//    return 0;
//}

