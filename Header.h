#pragma once
#ifndef HEADER_H
#define HEADER_H

struct Circle {
	Circle(int x0, int y0, int r) {
		this->x0 = x0;

	}

	int x0, y0, r;
	void print(Circle A);

};

struct Vector {
	int x, y;

	void print_2(Vector B);
};

#endif // !HEADER
