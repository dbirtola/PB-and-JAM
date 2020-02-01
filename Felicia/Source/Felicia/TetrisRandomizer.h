//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "UObject/NoExportTypes.h"
//#include <algorithm>
//#include <vector>
//#include "TetrisRandomizer.generated.h"
//
//using namespace std;
//
///**
// * 
// */
//template<class Tetromino>
//class TetrisRandomizer
//{
//	vector<Tetromino>::iterator it;
//	vector<Tetromino> m_tetrominoes;
//	void Shuffle();
//	void Initialize(vector<Tetromino> tetrominoes);
//	Tetromino GetNext();
//
//	friend class UTetrisRandomizer;
//};
//
//UCLASS()
//class FELICIA_API UTetrisRandomizer : public UObject
//{
//	GENERATED_BODY()
//	
//private:
//	template<class Tetromino>
//	TetrisRandomizer<int> test;
//
//	UObject test;
//
//public:
//	UFUNCTION(BlueprintCallable, meta = (DisplayName = "InitializeTetrisRandomizer", ToolTip = "Feed array of anything.", ShortToolTip = "", KeyWords = "Tetris Tetromino Tetrominoes"), Category = "TetrisStyleRandomizer")
//	template<class Tetromino>
//	void Initialize(vector<Tetromino> tetrominoes);
//
//	template<class Tetromino>
//	Tetromino GetNext();
//	
//};
//
