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

## Start programming Python ##

### Make a new program ###

* Explain what folders and files are, as simple as possible
* Open `File Manager` (3rd icon to the right on top)
* Create a new folder called `Minecraft` in `/home/pi/Documents` by right clicking, select `Create New`.
* Open `IDLE`. Click the berry, then `Programming`, then `Python 2 (IDLE)`
* Create a new file in IDLE, then save it as `first.py`

### Basic Python ###

Enter code to print something:

```python
print("hello world")
```

Push `F5` to run the program. When asked to save, click `OK` or hit enter.

`print` is a function. It does something for us. In this case, prints to the screen.

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

## Basic Minecraft with Python ##

```python
# connects our program to minecraft
import mcpi.minecraft as minecraft
mc = minecraft.Minecraft.create()

# get our position
tilePos = mc.player.getTilePos()
pos = mc.player.getPos()

print tilePos
print pos
```

What's the difference between `getTilePos` and `getPos()`?
