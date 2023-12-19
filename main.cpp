

#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>
#include "main.h"

Mat g_maskImage, g_srcImage;

int main()
{
	g_srcImage = imread("fruits.jpg");
	g_maskImage = Mat(g_srcImage.rows, g_srcImage.cols, g_srcImage.type());
	if (g_srcImage.empty()) {
		cout << "g_srcImageͼƬ����ʧ�ܣ���" << endl;
		exit(0);
	}
	Mat maskImage(g_srcImage.size(), CV_32S);
	
	int count = 0;
	HeapNode heap[MAX_AREA_NUM + 1];
	HeapInit(heap);
	

	cout << "�����ݽṹ��ʵ��\n" << endl;

	
	PoissonDisk(maskImage, count);

	AdjacencyList AL;
	Mat highlighted_path_image(maskImage.size(), CV_8UC3);
	GraphColoring(AL, maskImage, count, heap, highlighted_path_image);

	
	Huffman(maskImage, count, heap);

	
	
	HeapSort(heap, count, AL, highlighted_path_image);

	
	cout << "\n���۰���ҡ�" << endl;
	while (1)
	{
		if (BinarySearch(heap, count, maskImage, highlighted_path_image, AL) == EXIT)
			break;
	}

	
	cout << "\n�����ݽṹ��ʵ���Ѿ�ȫ��չʾ���..." << endl;
	return 0;
}