#include <iostream>
#include <SFML/Audio.hpp>
#include <string>

int main() {
     std::string filename;
    // Must specify exact file name including (.wav) at the end
    std::cout << "Enter the filename of the audio file: ";
    std::cin >> filename;

    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile(filename)) {
        std::cout << "Error loading the audio file." << std::endl;
        return 1;
    }

    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();

    // keep the program running while the sound is playing
    while (sound.getStatus() == sf::Sound::Playing) {
       
    } 
    return 0;
}
