//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "TetrisRandomizer.h"
//
//
//template<class Tetromino>
//inline void TetrisRandomizer<Tetromino>::Shuffle()
//{
//	random_shuffle(m_tetrominoes.begin(), m_tetrominoes.end());
//	it = m_tetrominoes.begin();
//}
//
//template<class Tetromino>
//void TetrisRandomizer<Tetromino>::Initialize(vector<Tetromino> tetrominoes)
//{
//	delete[] m_tetrominoes;
//	m_tetrominoes = tetrominoes;
//	Shuffle();
//}
//
//template<class Tetromino>
//Tetromino TetrisRandomizer<Tetromino>::GetNext()
//{
//	Tetromino temp = *it;
//	it++;
//	if (it == m_tetrominoes.end())
//		Shuffle();
//	return temp;
//}
//
//
//template<class Tetromino>
//void UTetrisRandomizer::Initialize(vector<Tetromino> tetrominoes)
//{
//	
//}
//
//template<class Tetromino>
//Tetromino UTetrisRandomizer::GetNext()
//{
//}
