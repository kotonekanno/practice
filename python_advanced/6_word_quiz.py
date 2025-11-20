import ipywidgets as w
from IPython.display import display
import matplotlib.pyplot as plt

dic = [['紫陽花','あじさい'],['竜胆','りんどう'],['譲葉','ゆずりは']]
index = 0
o_count = 0

def show_result():
  plt.figure(figsize=(5,1))
  plt.barh(['OK','NG'],[o_count, len(dic) - o_count])
  plt.show()

def show_kanji():
  if index >= len(dic):
    print('正解数: ' + str(o_count))
    show_btn.disabled = True
    o_btn.disabled = True
    x_btn.disabled = True
    show_result()
    return
  kanji.value = dic[index][0]

def show_on_click(btn):
  read.value = dic[index][1]

def go_next():
  global index
  index += 1
  show_kanji()
  read.value = '読みは？'

def o_on_click(btn):
  global o_count
  o_count += 1
  go_next()

def x_on_click(btn):
  print(dic[index][0] + ':' + dic[index][1])
  go_next()

kanji = w.Text()
read = w.Label('読みは？')
show_btn = w.Button(description='表示',button_style='success')
o_btn = w.Button(description='合ってた', button_style='info')
x_btn = w.Button(description='間違っていた', button_style='info')

show_btn.on_click(show_on_click)
o_btn.on_click(o_on_click)
x_btn.on_click(x_on_click)

hb = w.HBox(children=[show_btn, o_btn, x_btn])
display(kanji, read, hb)
show_kanji()