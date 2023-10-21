#ifndef STUDENT_H
#define STUDENT_H

class Student
{
	private:
		int studid;
		string name;
		int marks1,marks2,marks3;
		
	public:
		Student();
		~Student();
		void getStudid(int id ){};
		void getName(string nm){};
		void getMarks1(int m1){
		};
		void getMarks2(int m2){
		};
		void getMarks3(int m3){
		};
		int getStudid(){};
		void getName(){};
		void getMarks1(){
		};
		void getMarks2(){
		};
		void getMarks3(){
		};
		void calcTotalMarks();
		void calcPercentage();
	protected:
};

#endif
