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
