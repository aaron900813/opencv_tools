#include <opencv/cv.h>
#include <opencv/highgui.h>
 
#include <iostream>
 
using namespace cv;
using namespace std;
 
int main()
{
	Mat frame = Mat(891, 630, CV_8UC3); // cols*rows = 630*891
 
	int nc = frame.channels();
	
	int nWidthOfROI = 90;
 
	for (int j=0;j<frame.rows;j++)
	{
		uchar* data= frame.ptr<uchar>(j);
		for(int i=0;i<frame.cols*nc;i+=nc)
		{			
			if( (i/nc/nWidthOfROI + j/nWidthOfROI) % 2)
			{
				// bgr
				data[i/nc*nc + 0] = 255 ;
				data[i/nc*nc + 1] = 255 ;
				data[i/nc*nc + 2] = 255 ;				
			}
		}
	}
 
	imshow("test",frame);
	imwrite("calibration.jpeg", frame);
	waitKey(0);
 
	return 0;
}