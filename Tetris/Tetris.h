#ifndef TETRIS_H_
#define TETRIS_H_

class Tetris
{
private:
	const int _width = 10;
	const int _height = 20;

public:
	Tetris() { }
	
	~Tetris() { }

	void RunGame();

private:
	void Update();
	void Render();
};

#endif