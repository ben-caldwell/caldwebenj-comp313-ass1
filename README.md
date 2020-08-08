# COMP313 Assignment 1
Ben Caldwell  
ID 300445756

## Roller Racer Game
The aim of the game is to finish the race track as fast as possible while collecting as many coins as you can. You control a rolling ball that can gain momentum and collide with the track and obstacles that are thrown at you. The track does not have any edges, similar to rainbow road from Mario Kart, this along with the bumpy nature of the track adds a layer of difficulty to the game. If the player falls off, presses R or selects restart from the menu, the level will restart and they can try again.

The hardest part about making the was developing the 3D assests for the track and creating an enjoyable track that still created a challenge. My experience in 3D modelling is limited so the track segments definitely could have been made smoother however I actually enjoyed the bumpyness of the track, it encourage some cautiousness when reaching new parts of the track. Also using the 3D editor to seemlessly connect tracks together was quite difficult, I imagine there is a way to make this process a lot easier by carefully crafting each track segment to be perfectly modulor and use snap to grid in the editor.

For the rolling ball I adapted the code from the template game. Because we needed to code a c++ node I made the project a c++ project. This meant the template rolling ball functionality was all in a .cpp file. So another one of the hardest parts was one, figuring out where the rolling ball functionality was (it took me far too long to realise it wasn't in a blueprint somewhere) and two learning enough of the UE4 c++ to parse and adapt the template code so that it acted how I wanted it to. I ended up changing some camera values, its mass for physics calculations, its jump impulse, its max speed and I added a restart function that responds to the R keyboard input.

The aspect that I think is most interesting about the game is the custom track that emphasises the momentum factor of the player movement and turns it into a mechanic that can drastically increase the time you complete the level but is also the cause of nearly every failure. I am also proud of the games overall aesthetic, the colours, materials, menus, HUD amd music all feel cohesive in my opinion.
