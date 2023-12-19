
/**
  ******************************************************************************
  * @file    main.h
  * @author  柴兆斌
  * @date    2023.11.18
  * @brief   该文件进行了include，宏定义等
  ******************************************************************************
  */

#pragma once

#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>

#include "graclr.h"
#include "heap_sort.h"
#include "randsamp.h"
#include "huffman.h"
#include "dijkstra.h"
#include "binsearch.h"

using namespace cv;
using namespace std;

#define ERROR 0
#define OK 1
#define EXIT 2
#define NONE -1
#define TRUE 1
#define FALSE 0
#define INF 99999999

typedef int Status;
