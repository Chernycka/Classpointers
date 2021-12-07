#include<iostream>

using namespace std;

class Point {
  private:
	  int x;
	  int _y;
  public:
	  Point() { cout << "Point" << x << ", " << _y << ") constructed" << endl; };
	  Point(int x, int y) {
		  this->x = x;
		  _y = y;
		  cout << "Point" << x << ", " << _y << ") constructed" << endl;
	  }
	  ~Point() {
		  cout << "Point" << x << ", " << _y << ") destroyed" << endl;
	  }
	  int getX() { return x; }
	  int getY() { return _y; }
	  void setX(int x) {this->x = x; }
	  void setY(int y) { _y = y; }
	  void yoString() {
		  cout << "(" << x << "," << _y  <<")" << endl;
	  }
};


int main() {
	Point a(1,2);
	a.yoString();
	Point c;
	c = a;
	c.yoString();
	a.setX(10);
	a.setY(20);
	cout << a.getX()<<endl;
	cout << a.getY()<<endl;
	a.yoString();
	
}