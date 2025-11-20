import matplotlib.pyplot as plt
import ipywidgets as w
from IPython.display import display
import random

maze = [[2,2,2,2,2,2,2,2,2,2,2],
        [2,0,0,0,0,0,0,0,0,0,2],
        [2,0,2,0,2,0,2,0,2,0,2],
        [2,0,0,0,0,0,0,0,0,0,2],
        [2,0,2,0,2,0,2,0,2,0,2],
        [2,0,0,0,0,0,0,0,0,0,2],
        [2,0,2,0,2,0,2,0,2,0,2],
        [2,0,0,0,0,0,0,0,0,0,2],
        [2,0,2,0,2,0,2,0,2,0,2],
        [2,0,0,0,0,0,0,0,0,5,2],
        [2,2,2,2,2,2,2,2,2,2,2],]

x = 1
y = 1

def show():
  global maze
  maze[y][x] = 10
  with output:
    output.clear_output(wait=True)
    ax.matshow(maze)
    display(fig)

def make():
  global maze
  for y in [2,4,6,8]:
    for x in [2,4,6,8]:
      while True:
        wall_x = x
        wall_y = y
        dir = random.randrange(0, 4) if wall_y == 2 else random.randrange(1, 4)
        match dir:
          case 0: wall_y -= 1
          case 1: wall_y += 1
          case 2: wall_x -= 1
          case 3: wall_x += 1
        if maze[wall_y][wall_x] != 2:
          maze[wall_y][wall_x] = 2
          break
  show()

def on_click(btn):
  global x, y, maze
  pre_x = x
  pre_y = y
  maze[y][x] = 0
  match btn.description:
    case 'UP':    y -= 1
    case 'DOWN':  y += 1
    case 'LEFT':  x -= 1
    case 'RIGHT': x += 1
  if maze[y][x] == 2:
     x = pre_x
     y = pre_y
     return
  maze[y][x] = 10
  show()

up = w.Button(description='UP', button_style='info')
up.on_click(on_click)
down = w.Button(description='DOWN', button_style='info')
down.on_click(on_click)
left = w.Button(description='LEFT', button_style='success')
left.on_click(on_click)
right = w.Button(description='RIGHT', button_style='success')
right.on_click(on_click)

output = w.Output()
display(w.HBox(children=[up, down]), w.HBox(children=[left, right]), output)

fig, ax = plt.subplots(figsize=(3.0, 3.0))
plt.close()
make()