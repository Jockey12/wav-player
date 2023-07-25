# wav-player
.wav player in c++ using SFML

# How to compile
to compile you must have SFML installed on your linux/WSL machine. 
```sudo apt install libsfml-dev
g++ wav-play.cpp -o wav-player -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
./wav-player```

Can only play wav files, using SFML, must specify the filename exactly including .wav at the end.
