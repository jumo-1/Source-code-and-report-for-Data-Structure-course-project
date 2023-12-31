#pragma once
/**
  ******************************************************************************
  * @file    heap_sort.h
  * @author  柴兆斌
  * @date    2023.11.18
  * @brief   该文件包含了堆排序算法的所有实现函数原型
  * 		 - HeapInit
  * 		 - MaxHeapify
  * 		 - MinHeapify
  * 		 - CreateMaxHeap
  * 		 - CreateMinHeap
  * 		 - AscendingSort
  * 		 - DescendingSort
  * 		 - HeapSort
  ******************************************************************************
  */

#pragma once

#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>

using namespace cv;
using namespace std;

typedef int Status;

Status HeapInit(HeapNode* heap);

Status AscendingSort(HeapNode* heap, unsigned int area_num);

Status DescendingSort(HeapNode* heap, unsigned int area_num);

Status CreateMaxHeap(HeapNode* heap, unsigned int area_num);

Status CreateMinHeap(HeapNode* heap, unsigned int area_num);

Status MaxHeapify(HeapNode* heap, int particular_area_index, unsigned int area_num);

Status MinHeapify(HeapNode* heap, int particular_area_index, unsigned int area_num);

Status HeapSort(HeapNode* heap, unsigned int area_num, AdjacencyList AL, Mat highlighted_path_image);