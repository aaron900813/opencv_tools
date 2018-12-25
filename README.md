1.install opencv 
  sudo apt-get install libopencv-dev
2.mkdir build && cmake .. && make -j
3.prite chessboard calibration picture 
	./calibration_pic.exe
4.take a movie or at lease 15 of chessboard on a planner scene
3.if use pictures to adjust 
	./imglist_creator.exe imglist.xml PATH_TO_YOUR_DRI/*.png 
	./calibration.exe -w 9 -h 6 -pt chessboard -o camera.yaml -op -oe -su imglist.xml 
4.if use video to adjust
	./calibration.exe -w 9 -h 6 -pt chessboard -o camera.yaml -op -oe -su -V test.mp4
