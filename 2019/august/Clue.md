# Clue in Minecraft

On August 13th I started making Clue in Minecraft!

## Game Board
To make Clue, we needed a gameboard. For that I made 9 square rooms around a 
world I was using in Minecraft.

| Room ID | Room Name | Location | Command | 
| ------- | --------- | -------- | ------- |
| 0 | Canyon | -1322,25,179 | Canyon |
| 1 | Water | -2024, 52, 362 | Water |
| 2 | Hill | -1208, 64, 698 | Hill | 
| 3 | Mud | -954, 54, 1060 | Mud  |
| 4 | Swamp | -1477, 57, 2211 | Swamp |
| 5 | Sky | -1303, 152, 650 | Sky |
| 6 | TreeHouse | -1261, 75, 372 | Trees | 
| 7 | Coral Reef | -1829, 54, 400 | Coral | 
| 8 | Cave | -2032, 72, 726 | Cave | 
| 9 | Mountain (starting point) | -1313, 99, 562 | Mountain |

### Setup Code
If you want to build a similar board game to the one I built, you can use this setup code: [https://makecode.com/_icx4dMCs96H0](https://makecode.com/_icx4dMCs96H0)

To get started, make sure you run the code in the Code Simulator. 
1. **Create the arrays.** To do that, type `setup` in the chat.
2. **Find your starting point location.** Identify a mountain that you want to be your starting point. 
3. **Identify the teleportation location.** Stan where you want your players to teleport to on top of the mountain. Then open the code and modify the x, y, and z position arrays with the correct coordinates. (Highly recommended that you write them on paper too as a backup.)
4. **Re-run and setup the code.** Each time you modify the code, re-run it (pressing the green start button) and type `setup` in the chat.
5. **Find your first room location.** Identify where you want to build your first room. If you want to have the same type of rooms as I have, then make sure you know which number (room) it corresponds to (e.g. to build the Coral Reef room, the room id and array position would be 7 and you will be building with blue coral).
6. **Build the room.** In chat, type `build #`, where # is replaced with 0-8 depending on which room you're building. 
7. **Identify the teleportation location.** Go above the room and type `teleport -1` in the chat to get inside the room. Add some torches so that you can see, and find the place within the room where you want your players to teleport to. Then open the code and modify the x, y, and z position arrays with the correct coordinates.
8. **Re-run and setup the code.** Each time you modify the code, re-run it (pressing the green start button) and type `setup` in the chat.
9. **TEST.** Make sure you test your teleportation code to make sure it teleports you to the correct location. You can use `teleport 10` to go above the room to gain perspective on where you are and `teleport -1` to get back into the room if you need.
10. **Repeat steps 5-9 for each room.** Continue adding all of the rooms to your world and noting their coordinates in the code. 

### Important Commands
`setup` - this command will initiliaze the arrays that hold each room, block type, and coordinates.  
`teleport #` - this command will teleport you to the location of the room number that is associated with the number you put in for #.  
`build #` - this command will build a 10x10 cube with a specific block type depending on which room you're making. 

## Game Play Notes
### Ideas
- Only allow one person in a room at a time. 
  - Keep track of where every one is
  - Tricky: Someone could call the command at the same time
- Certain block types that require certain tools
  - Something is hidden within the blocks that you want to collect
  - Hidden Objects: Tools, random things, prizes, final prize
- Clues in the blocks maybe?
  - Reflect the current events we could update signs
  - Certain signs have certain types of clues?
  - The sign in the water room will give a clue to the character?
- Play in the game AND in person
- Do we want to limit players to only being in the rooms?
  - Could be fun to allow players to go anywhere (in survival) and then there would be different strategies for winning 
- Timer?
- Assassin?

### Version 1: Multiple Stages
In this version, we're going to have three stages, where players are going to have a chance to get the master prize, but they will lose *if* the other players determine who they are, what room, and what the prize was. The three stages would be:
  - **Finding the prizes stage**: Make your tools, explore the rooms, collect prizes. When someone collects the master prize, we move to the clue stage.
  - **Finding clues stage**: Explore rooms, you can't collect/create more tools?, Read clues on signs etc?
  - **Guessing stage**: In person/In Minecraft try to figure out who got the prize, what room it was in, and what tool they were using

### Version 2: Find Clues to Find the Prize (RP1)
In this version, we're going to have clues all around the Minecraft world that will give players the coordinates to each room and the necessary tool to find the prize. Players will run around the world, finding clues, making tools, and eventually finding the rooms and trying to find the prize. 
- Some rooms could restrict the number of players in it at a time
- Maybe we have a certain number of blocks required in your inventory to be able to collect the prize

### Resources
[Breaking Blocks](https://minecraft.gamepedia.com/Breaking)
[Block IDs](https://minecraft.gamepedia.com/Java_Edition_data_values/Pre-flattening/Block_IDs)

## Code Documentation
### Tracking Broken Gold Blocks
![Screen Shot 2019-09-05 at 5 29 16 PM](https://user-images.githubusercontent.com/1314285/64392703-c7140200-d002-11e9-9e77-42f64b226b3e.png)
When a gold block is broken (does not have to be collected, can be broken in Survival or Creative mode), the agent will add to the count of gold blocks in it's inventory.

### Determining If All Blocks Needed Have Been Collected
![Screen Shot 2019-09-05 at 5 32 03 PM](https://user-images.githubusercontent.com/1314285/64392816-55888380-d003-11e9-8e66-e39c402144f3.png)
When a yellow concrete block is broken, if a user has broken exactly 5 gold blocks, they "win". "Winning" just has a chat message right now. 
