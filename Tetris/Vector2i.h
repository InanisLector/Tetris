#ifndef VECTOR_H_
#define VECTOR_H_

struct Vector2i {
	int X;
	int Y;

	Vector2i() {
		X = 0;
		Y = 0;
	}

	Vector2i(int x, int y) {
		X = x;
		Y = y;
	}

	Vector2i operator+ (Vector2i v2) {
		return Vector2i(X + v2.X, Y + v2.Y);
	}

	Vector2i operator- (Vector2i v2) {
		return Vector2i(X - v2.X, Y - v2.Y);
	}

	Vector2i operator* (int mult) {
		return Vector2i(X * mult, Y * mult);
	}

	Vector2i operator/ (int mult) {
		return Vector2i(X / mult, Y / mult);
	}

	int operator[] (int i) {
		return i ? Y : X;
	}
};

#endif