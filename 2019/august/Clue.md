# Clue in Minecraft

On August 13th I started making Clue in Minecraft!

## Game Board
To make Clue, we needed a gameboard. For that I made 9 square rooms around a 
world I was using in Minecraft.

| Room ID | Room Name | Location | Command | 
| ------- | --------- | -------- | ------- |
| 0 | Canyon | -1322,25,179 | Canyon |
| 1 | Water | -1313, 99, 526 | Water |
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

## Clues for Location
### Canyon
Location: -1322,25,179
In ASCII: 67 97 110 121 111 110
Added together: 616
-706, 641, 795

Sign would read:
```
Canyon.Location = 
(-706, 641, 795) + Canyon.ASCII.Sum
```

### Water
Location: -1313, 99, 526
-1313 in binary: -10100100001
99 in binary: 1100011
526 in binary: 1000001110

Sign would read:
```
Water.Location.Binary = 
-10100100001, 1100011, 1000001110 
```

### Hill
Location: -1208, 64, 698
In ASCII: 72 105 108 108
105 - 72 = 33
108 - 105 = 3
-1208, 64, 698
- 333,- 3,- 33
-1541, 61, 665

-1208 - 33 = -1241
64 - 3 = 61
698 - 0 = 698

Sign would read:
```
Hill.Location - Hill.ASCII.Difference =
-1241, 61, 698
```

### Mud
Location: -954, 54, 1060

In ASCII: 77, 117, 100
-954 + 77 = -877
54 + 117 = 171
1060 + 100 = 1160

Sign would read:
```
Mud.Location + Mud.ASCII =
-877, 171, 1160
```

### Swamp
Location: -1477, 57, 2211
Sum of Location: 791
57 represents 9 in ASCII
2211 in Binary: 100010100011

Sign would read:
```
Swamp.Location.Sum = 791
Swamp.Location.Y = 9.ASCII
Swamp.Location.Z = 100010100011.Decimal
```

### Sky
Location: -1303, 152, 650
S in ASCII - 83
k in ASCII - 107
y in ASCII - 121

Sign would read:
```
Sky.Location =
(-1182, 259, 733) - Sky.Reverse.ASCII
```

### Treehouse
Location: -1261, 75, 372
e in ASCII - 101

-1261 in Binary - -010011101101
75 in Binary - 1001011
372 in Binary - 101110100

101101101 XOR  
000011001
101110100

Sign should read:
```
Tree.Location.X = -1261
Tree.Location.Y = 1001011
Tree.Location.Z = (eee.ASCII XOR 000011001).Decimal
```

### Coral Reef
Location: -1829, 54, 400

Sign should read:
```
Coral.Location = -1829, 54, 400
```

### Cave
Location: -2032, 72, 726

D in ASCII - 68
I in ASCII - 73
G in ASCII - 71

Sign should read:
```
Cave.Location = (-2099, -1, 655) + DIG.ASCII
```

## Clues for Prizes
### The Six Block Types
- Diamond Block
  - Iron or Diamond Pickaxe
- Obsidian Block
  - Diamond Pickaxe
- Iron Block
  - Stone, Iron, or Diamond Pickaxe
- Gold Block
  - Iron or Diamond Pickaxe
- Nether Brick Block
  - Wooden, Stone, Iron, Diamond, Golden Pickaxe
- Redstone Block
  - Wooden, Stone, Iron, Diamond, Golden Pickaxe

Randomly choose which room the blocks will be in. There will be a beacon for each room, next to the beacon there will be four different block types 

### Canyon
Sign should read:
```
Type "discover canyon" into the chat to determine which block to break to get the block type in the Canyon Room. 
```
Blocks:
Wood, 

### Water

### Hill

### Mud

### Swamp

### Sky
In the sky room there are diamonds you have to break.

S - 19th letter
k - 11th letter
y - 25th letter

19 in binary is 10011
11 in binary is 1011
25 in binary is 11001

Tool Needed:
Iron or Diamond Pickaxe

Sign would read:
```
Diamonds in the 
10011 01011 11001
```

### Treehouse

### Coral Reef

### Cave


# Game Goal:
Game Play:
Finding beacons in the world, you will find signs. Signs have clues for:
- Locations of rooms
- Block types in rooms

***OR***
Maybe there won't be clues for the block types in the rooms, instead you just go into each one and keep track of what you find. 

First Place: Collect 5 of type X blocks
X is random, each time the game is played, a different block type is chosen. If you correctly collect 5 of the right type of block, you will be awarded a sea pickle.

Second Place: 
Each player will have to guess which player found the sea pickle in which room by breaking which block type. As the first place winner, you will know when you were awarded the sea pickle. Your goal in this "clue" part of the game is to not give too much information away, but be honest. 

Take turns, each person guesses, Clue-like, the player room, and block type. If they guess a player who broke a certain block type in a certain room, the player confirm or deny the sea pickle. If they do not have the sea pickle, folks will continue to guess taking turns. 

**NOTE**: This second place isn't as "fun" as clue because there aren't as many unknowns, we may want to enhance that later, depending on how fast part 1 happens. 

*Alternative*: First place person is no longer in play, there are other, random prizes along the way and folks have to guess where those were found?

# Save for later
