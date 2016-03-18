#pragma once
#ifndef BOARD_H
#define BOARD_H

class Board
{
public:
	Board(uint16_t score = 501);
	~Board();

	friend std::ostream& operator<<(std::ostream& os, const Board& Board);

	void SetScore(int16_t& score);
	void SubtractScore(int16_t points);
	int16_t* GetScore();
	const uint16_t GetAtPosition(uint16_t x, uint16_t y) const;
	/*const Matrix& GetBoard() const;
	const Matrix::iterator& GetFirst();*/
	void Display();
	void Populate();

protected:
	/*Row(columns);
	Matrix _board(int rows, Row());*/
	//std::vector<int> _columns;
	//std::vector< std::vector<int> > _board;
	/*Column::iterator col_iter;
	Matrix::iterator row_iter;
	Matrix _board;*/

	int16_t _score;

	uint16_t _bd[X][Y];
};

#endif /* BOARD_H*/
