#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/videoio.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace cv;

int main(int argc, char **argv){
	VideoCapture video(argv[1]);
	if(!video.isOpened())
	{
		cout << "Coud not open file " << argv[1] << endl;
		waitKey(0);
		return -1;
	}

	int count=0;
	char c;
	char name[20];
	int delay = 10;
	if (argc>2) delay = atoi(argv[2]);

	namedWindow("Calib", 0);

	while(true){
		Mat frame;
		if(!video.read(frame))
		{
			cout << "Coud not read file" << endl;
			waitKey(3000);
			break;
		}

		imshow("Calib",frame);
		c=waitKey(delay);

		if(c== 'c'){	
			count++;
			sprintf(name,"calib_%d.tif",count);
			imwrite(name,frame);
		}
		else if(c=='s')
			break;
	}
	return 0;
}
