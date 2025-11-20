!curl -s -O https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgnSC8lEeVgVu4IvlrpTNxMvYjtD02AP8oIZzcSZnbWckuTrgo4FfSUEZWVgckrNOKIFuAc8BMurntev2H1onNkRPdwsJIrQMhI426eFLJk4sVUTIOFJkolt_YfbQgvoYdqYIWJDpKFzueL/s800/halloween_mark_obake.png
import ipywidgets as w
from IPython.display import display

def on_change(change):
    img.width = slider.value

slider = w.IntSlider(min=0,max=500,value=250,continuous_update=False)
img = w.Image.from_file('halloween_mark_obake.png',width=250)
slider.observe(on_change, names='value')
display(slider,img)
