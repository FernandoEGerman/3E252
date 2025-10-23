bin/punteros : punteros.cpp
	c++ punteros.cpp -o ../bin/punteros -I ../include

ejecutar: ../bin/punteros
	../bin/punteros

assets/kristally.mp3 : ../assets/kristally.wav
	ffmpeg -i ../assets/kristally.wav -codec:a libmp3lame -qscale:a 2 ../assets/kristally.mp3

../bin/ejemplo : ejemplo.cpp
	g++ ejemplo.cpp -o ../bin/ejemplo -lftxui-screen -pthread
#Enlazando librería compilada

ejemplo: ../bin/ejemplo
	../bin/ejemplo
