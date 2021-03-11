#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
	string name;
	int kor;
	int eng;
	int math;

	Student(string name, int kor, int eng, int math) {
		this->name = name;
		this->kor = kor;
		this->eng = eng;
		this->math = math;
	}

	bool operator < (const Student& v) const {
		if (kor == v.kor) {
			if (eng == v.eng) {
				if (math == v.math) {
					return name < v.name;
				}
				return math > v.math;
			}
			return eng < v.eng;
		}
		return kor > v.kor;
	}
};

int main() {
	vector<Student> vec;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int k, e, m;
		string name;
		cin >> name >> k >> e >> m;
		Student student(name, k, e, m);
		vec.push_back(student);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; i++) {
		cout << vec[i].name << '\n';
	}

	return 0;
}