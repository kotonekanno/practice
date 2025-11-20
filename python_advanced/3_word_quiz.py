import ipywidgets as w
from IPython.display import display

dic = [['apple','リンゴ'],['banana','バナナ'],['orange','オレンジ']]
index = 0

def on_answer(on_click):
    global index
    text.value = dic[index][1]

def on_next(on_click):
    global index

    if index >= 2:
        btn1.disabled = True
        btn2.disabled = True
    else:
        index = index + 1
        text.value = '意味は？'
        textarea.value = dic[index][0]

textarea = w.Text(continuous_update=False,value=dic[0][0])
text = w.Label('意味は？')
btn1 = w.Button(description='解答', button_style='success')
btn2 = w.Button(description='次', button_style='info')

btn1.on_click(on_answer)
btn2.on_click(on_next)

hb = w.HBox(children=[btn1, btn2])
display(textarea, text, hb)
