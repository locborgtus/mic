# Basic Start #

## Start programming Python ##

### Learn to print ###

Open `IDLE`. Click the berry, then `Programming`, then `Python 2 (IDLE)`. There should be a window called shell.

Enter code to print something:

```python
print("hello world")
```

The text inside the quotes are called strings. They are letter, numbers, or other symbols, like punctuation.

You can use single quoute or double quotes:
```python
print('good morning')
print("neighbor")
```

You can also print many strings by adding them together:

```python
print("Hello " + "you")
```

The computer is pretty dumb. If you don't give it the exact instructions, it doesn't understand. Try printing a string where the single and double quotes don't match up.

```python
print("hello world')
```

These mistakes happen all the time. Get used to dealing with them by fixing them so your program can run.

Let's start using things to keep our data. These things are called variables. Variables holds data that can change over time.

```python
name = "Simon"
age = 5
print("hello world" + name + "my age is" + age)
```

In this case, name is assigned to the string "simon", and age is assigned to the number 5.

`print` is a function. It takes inputs inside the parenthesis, and outputs something on the screen. Functions do things for you, you will use many more functions later on.

### Arithmetic

What are the arithmetic types you know? They are represented by `+ - * /`.

Practice: Create 4 variables called `sum, difference, product, quotient` by making up numbers and using those arithmetic.

There's also something called modulo, represented by `%`. It is the remainder after division is done. Example, 12 % 5 = 2. Try it.

You can change variables by re-assigning them, or by using a shorthand:

```python
sum = sum + 10
sum += 10
```

The short hand is useful because a lot of time we add something to ourselves. Think of an example (Hint: your age).

### Comments

Comments are useful to explain what you did. Some times our statements can be complicated. Use a hastag `#` at the beginning of a line to write comments.

```python
# adding 10 to the variable called sum
sum += 10
```

### Numbers

There are 2 different types of numbers in Python, integers and decimals (called float). Variables can hold these.

By default, a whole number is integer. You can make them decimals by putting a . after them.

```python
print 5
print 5.
```

Practice: calculate the cost of your shopping basket if you have 5 oranges, and they are 25 cents each. Come up with your favorite fruit, give them a price, and how many do you want. Print out the sum of the cost the entire shopping basket with the oranges and your favorite fruit. Hint: use variables to keep the number of fruits and their costs. Then print out the product and the sum.

Dividing is different when the number types are different. If dividing integers, the result are round-down whole numbers. If dividing floats, you will get decimals. Try it yourself.

### Multi-line text

You can also have multi-line strings by using 3 single or double quotes:

```python
text = '''
hi
you
there
'''

print text
```

### Boolean

Boolean data can be `True` or `False`. `True` behaves the same as integer 1, and `False` behaves same is integer 0. Variables can hold Boolean the same as other data types.

Try making a boolean variable, then adding a number to it to see if they are the same as 0 and 1.

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

### Make a new program ###

* Explain what folders and files are, as simple as possible
* Open `File Manager` (3rd icon to the right on top)
* Create a new folder called `Minecraft (name)` in `/home/pi/Documents` by right clicking, select `Create New`.
* Open `IDLE`. Click the berry, then `Programming`, then `Python 2 (IDLE)`
* Create a new file in IDLE, then save it as `hello.py`

### Basic Python ###

Running a program in a file is a little different than in the shell.

Push `F5` to run the program. When asked to save, click `OK` or hit `enter` key.

Practice: name your favorite food. Use variables to keep how much they cost and how many you want to get. Then share the food with your family by printing out how much of that food each person gets.

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

Explain again what a function does. `getTilePos()` is a function. It takes no input, but outputs data that we save into a variable called `pos`.

The dot notation means a sub-part of something. So in this case, position `pos` contains x, y, and z.

Explain coordinate system. X and Z is the flat land. Y is your height.

Ask if `pos` name can be changed.

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

### Exercise

Teleport to your current position, but forward in x by 10. Hint: you can't just use a number. You have to use your current position to start.

Go into flight mode with double space. Post your current location to minecraft by entering this line at the end of your file:

```python
mc.postToChat(pos)
```

It's not posting the position correctly. Why? You need to set your `pos` variable again.

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

### Exercise

Add a block next to you. Remember how to find where you are. Once you've added one, pick another block type and see if the block changes.

You can also get them list from Python.

```python
# get block list
from mcpi import block

# use the ID from the block list. look at the name, it matches the list.
mc.setBlock(10, 10, 10, block.STONE.id)
```

Activity: Add 10 blocks in a row. Use the ID list. You will use 10 lines, each line adding one block. Example:

```python
mc.setBlock(10, 10, 10, block.STONE.id)
mc.setBlock(11, 10, 10, block.STONE.id)
```

And so on.

One day, we will learn to do this in very little lines:

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
