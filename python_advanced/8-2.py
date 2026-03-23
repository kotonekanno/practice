
import sqlite3
import ipywidgets as w
from IPython.display import display

con = sqlite3.connect('/content/drive/MyDrive/Colab Notebooks/zcode.db')
c = con.cursor()
sql = 'SELECT city,ku,town FROM zcode WHERE code==?'

def search(btn):
  result = c.execute(sql, (int(text.value),))
  rows = result.fetchall()
  if len(rows) == 0:
    address.value = '該当するデータはありません'
  else:
    address.value = ' '.join(rows[0])

def close(btn):
  btn_s.disabled = True
  text.value = ''
  address.value = ''
  con.close

label = w.Label('郵便番号で検索します')
text = w.Text(placeholder='郵便番号を入力してください')
btn_s = w.Button(description='検索',button_style='warning')
btn_c = w.Button(description='終了',button_style='danger')
address = w.Label('住所が表示されます')

btn_s.on_click(search)
btn_c.on_click(close)
display(label, w.HBox([text,btn_s,btn_c]),address)