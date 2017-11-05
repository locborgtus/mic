# Basic Start #

## Start Minecraft ##

1. Click the left hand corner
2. Click `games`
3. Click `Minecraft Pi`

Play around. Keys:

* `w` Move the player forward
* `a` Move the player left
* `s` Move the player backwards
* `d` Move the player right
* `mouse` Change the player direction/camera angle tab Release the mouse
* `right` click Place block
* `left` click Smash block
* `scroll` wheel Change selected block
* `space` Jump (fly higher when flying)
* `double tap space` Fly (double tap again to stop flying)
* `shift` Crouch (fly lower when flying)
* `e` Block selection menu
* `1–8` Change block selection from inventory
* `esc` Open the options menu (also releases mouse)

Test all these keys to make sure they work.

Resize the window by using `tab` to about half the screen, on the right side.

Remember to get out using `tab`, or `alt-tab`. If you can't look around in minecraft, make sure to click on the mouse.

## Start programming Python ##

### Make a new program ###

* Explain what folders and files are, as simple as possible
* Open `File Manager` (3rd icon to the right on top)
* Create a new folder called `Minecraft (name)` in `/home/pi/Documents` by right clicking, select `Create New`.
* Open `IDLE`. Click the berry, then `Programming`, then `Python 2 (IDLE)`
* Create a new file in IDLE, then save it as `hello.py`

### Basic Python ###

Enter code to print something:

```python
print "hello world"
```

Push `F5` to run the program. When asked to save, click `OK` or hit `enter` key.

`print` is a function. It does something for us. In this case, prints to a window called "python shell".

Print multiple things:

```python
name = "Simon"
print "hello world", name
```

More complicated:

```python
name = "Simon
age = 39
print "hello world", name, "my age is", age
```

Comments:

```python
# this line gets ignored. this helps us explain what our program does.
print "hello world"
```

The computer is dumb. Try getting rid of a `"` in a print line, and run the program. See what happens.

Close this file when done.

## Hello world in Minecraft ##

We will learn how to write a program that talks to minecraft. We do this by printing "hello world" to minecraft instead of python shell.

Make a new file in IDLE called `hello_minecraft.py`.

```python
# connects our program to minecraft
import mcpi.minecraft as minecraft
mc = minecraft.Minecraft.create()

# print
mc.postToChat("Hello world")
```

We just wrote a program that can talk to minecraft.

## Teleport ##

Make a new file called `teleport.py`

```python
# connects our program to minecraft
import mcpi.minecraft as minecraft
mc = minecraft.Minecraft.create()

# get our position
pos = mc.player.getTilePos()

print pos.x, pos.y, pos.z
print pos
```

Explain coordinate system. X and Z is the flat land. Y is your height.

Let's teleport. Add this line to the bottom of your program:

```python
# teleports us to x = 10, y = 11, z = 12
mc.player.setTilePos(10, 11, 12)
```

Your position is 0.5 off because your head is in the middle of the block.

You can also use variables.

```python
x = 10
y = 11
z = 12

mc.player.setTilePos(x, y, z)
```

Change x, y, z to whatever you want. The number has to be within -127, 127 because minecraft pi world is small. Try positive and negative numbers. Explain how to express ranges using `()` and `[]`.

You can also use arithmetic.

```python
x = 10
y = 11
z = 12

# adding 5 to teleport x coordinate
mc.player.setTilePos(x + 5, y, z)
```

In this case, x doesn't change. How do you prove it didn't change?

Exercise: teleport to your current position, but forward in x by 10. Hint: you can't just use a number. You have to use your current position to start.

Close this file when done.

## Precise teleport ##

Make a new file called "precise_teleport.py".

```python
# connects our program to minecraft
import mcpi.minecraft as minecraft
mc = minecraft.Minecraft.create()

pos = mc.player.getPos()
print pos
```

What's the difference between getPos() and getTilePos()? If unsure, input the line and compare.

```python
tilePos = mc.player.getTilePos()
print tilePos
```

Difference is decimal vs. whole numbers. Explain the difference, if the concept.

Try to teleport again, but this time precisely:

```python
x = 10.2
y = 11.7
z = 12.3

mc.player.setPos(x, y, z)
```

Change the position slightly (a small decimal value) and see what happens.

## Add a block ##

We can write a program to add a block for us.

We need to give it the position of the block and the block type.

```python
# connects our program to minecraft
import mcpi.minecraft as minecraft
mc = minecraft.Minecraft.create()

# x, y, z, then block type. 1 is stone.
# use coordinates near you, from the screen, so you can see the new block
mc.setBlock(10, 11, 12, 1)
```

This is a list of the block types.

```
AIR                   0
STONE                 1
GRASS                 2
DIRT                  3
COBBLESTONE           4
WOOD_PLANKS           5
SAPLING               6
BEDROCK               7
WATER_FLOWING         8
WATER                 8
WATER_STATIONARY      9
LAVA_FLOWING         10
LAVA                 10
LAVA_STATIONARY      11
SAND                 12
GRAVEL               13
GOLD_ORE             14
IRON_ORE             15
COAL_ORE             16
WOOD                 17
LEAVES               18
GLASS                20
LAPIS_LAZULI_ORE     21
LAPIS_LAZULI_BLOCK   22
SANDSTONE            24
BED                  26
COBWEB               30
GRASS_TALL           31
WOOL                 35
FLOWER_YELLOW        37
FLOWER_CYAN          38
MUSHROOM_BROWN       39
MUSHROOM_RED         40
GOLD_BLOCK           41
IRON_BLOCK           42
STONE_SLAB_DOUBLE    43
STONE_SLAB           44
BRICK_BLOCK          45
TNT                  46
BOOKSHELF            47
MOSS_STONE           48
OBSIDIAN             49
TORCH                50
FIRE                 51
STAIRS_WOOD          53
CHEST                54
DIAMOND_ORE          56
DIAMOND_BLOCK        57
CRAFTING_TABLE       58
FARMLAND             60
FURNACE_INACTIVE     61
FURNACE_ACTIVE       62
DOOR_WOOD            64
LADDER               65
STAIRS_COBBLESTONE   67
DOOR_IRON            71
REDSTONE_ORE         73
SNOW                 78
ICE                  79
SNOW_BLOCK           80
CACTUS               81
CLAY                 82
SUGAR_CANE           83
FENCE                85
GLOWSTONE_BLOCK      89
BEDROCK_INVISIBLE    95
STONE_BRICK          98
GLASS_PANE          102
MELON               103
FENCE_GATE          107
GLOWING_OBSIDIAN    246
NETHER_REACTOR_CORE 247
```

Activity: Add a block next to you. Remember how to find where you are. Once you've added one, pick another block type and see if the block changes.

You can also get them list from Python.

```python
# get block list
from mcpi import block

# use the ID from the block list. look at the name, it matches the list.
mc.setBlock(10, 10, 10, block.STONE.id)
```

Activity: Add 10 blocks in a row. Use the ID list.

```python
# advanced! optional, to show how we can do this very quickly
for i in range(0, 20):
  mc.setBlock(10, 10 + i, 10, block.STONE.id)
```

You can also make a cube of blocks.

```python
# x1, y1, z1, x2, y2, z2, type
mc.setBlocks(10, 10, 10, 15, 15, 15, 1)
```

Try changing these numbers, and make different sorts of rectangular blocks.

So now you've added a lot of these blocks. How do we erase them? (hint: what does "empty space" have?)
