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
	Student("��ȣ��", 90),
	Student("������", 80),
	Student("�Ŵ뼺", 50),
	Student("ŽŽ", 92)
	};
	
	sort(students, students+5);
	
	for(int i = 0 ; i<5;i++){
		cout << students[i].score << "\n";
	}
	
	return 0;
}
