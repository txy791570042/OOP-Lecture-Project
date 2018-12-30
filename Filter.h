#pragma once
#include <opencv2/opencv.hpp>
#include <process_exception.cpp>

using cv::Mat;

Mat NostalgicHueFilter(Mat src);							//����ɫ���˾�
Mat StrongLightFilter(Mat src);								//ǿ���˾�
Mat DarkTownFilter(Mat src, double DarkDegree = 1.0);		//�����˾���DarkDegreeΪ����
Mat FeatherFilter(Mat src, double VagueRatio = 0.5);		//���˾���VagueRatioֻ��ȡ0��1��Խ�����Եģ������Խ�ߣ�0�൱��δ�𻯣� 
Mat MosaicFilter(Mat src, int size = 5);					//�������˾���sizeԽ�󣬴���Խģ��
Mat SculptureFilter(Mat src);								//�����˾�
Mat DiffusionFilter(Mat src);								//��ɢ��ë�������˾�
Mat WindFilter(Mat src, int strength);						//���˾���strengthΪ���ǿ�ȣ�ǿ��Խ��Ч��Խ����
