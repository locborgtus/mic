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

### Exercise

Add 10 blocks in a row. Use the ID list. You will use 10 lines, each line adding one block. Example:

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
