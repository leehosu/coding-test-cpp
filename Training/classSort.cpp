#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std; 

class Student {
public:
	string name;
	int score;
	Student(string name, int score){
		this->name = name;
		this->score = score;
	}
	
	bool operator <(Student &student){
		return this->score < student.score;
	}
};

int main(){
	Student students[] = {
	Student("이호수", 90),
	Student("유찬종", 80),
	Student("신대성", 50),
	Student("탐탐", 92)
	};
	
	sort(students, students+5);
	
	for(int i = 0 ; i<5;i++){
		cout << students[i].score << "\n";
	}
	
	return 0;
}
