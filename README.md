# Calib Capture

A code to capture images in the video file to calib camera in a specific software.

## Usage

Run the code in the terminal passing as a parameter the address of the video file you want to capture the images.
With the code running, press C to capture an image, or S to exit the code.
Use the images in a camera calibration code, for example: cameraCalibrator in MATLAB-MathWorks.

## Compile and Run

Requirements: OpenCV 4 and Cmake (>2.8)

### Download the code and go to folder

    git clone https://github.com/LabRobotica/CalibCapture.git && cd CalibCapture

### Make a build folder and compile code

    cd src && mkdir build ; cd build && cmake .. && make

### Run the code

    ./calibcapture 'put your adress video here' 'put the delay here (optional)'

#### Exemple

    ./calibcapture calib.mp4 5

NOTE: The video file and the binare heve there in the same folder, otherwise you have put the complete address the video file.
