import sqlite3
import csv

with sqlite3.connect('/content/drive/MyDrive/Colab Notebooks/zcode.db') as con:#, open('/KEN_ALL.CSV', encoding='shift-jis') as f:
  #data = csv.reader(f, delimiter=',')
  c = con.cursor()
  #sql = 'CREATE TABLE zcode (code INTEGER, city TEXT, ku TEXT, town TEXT)'
  #c.execute(sql)
  #sql = 'PRAGMA table_info("zcode")'
  #rows = c.execute(sql)
  #for row in rows:
  #  print(row)
  #sql = 'INSERT INTO zcode(code, city, ku, town) VALUES(?, ?, ?, ?)'
  #for d in data:
  #  c.execute(sql, (int(d[2]), d[6], d[7], d[8]))
  #con.commit()
  #results = c. execute('SELECT * FROM zcode')
  #for n, row in enumerate(results):
  #  if n == 5: break
  #  print(row)
  sql = 'SELECT city, ku, town FROM zcode WHERE code == ?'
  while True:
    print('郵便番号で検索します')
    code = int(input('郵便番号を入力してください：'))
    if code == 0:
      break
    results = c.execute(sql, (code,))
    rows = results.fetchall()
    if len(rows) == 0:
      print('該当するデータがありません\n')
    else:
      print(' '.join(rows[0]))
