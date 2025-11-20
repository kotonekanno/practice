! pip install janome
! curl -s -O https://www.aozora.gr.jp/cards/000148/files/773_ruby_5968.zip
! unzip -o -q 773_ruby_5968.zip
from janome.analyzer import Analyzer
from janome.tokenfilter import *

print('** 解析開始 **')
with open('kokoro.txt', encoding='shift-jis') as f:
  text = f.read()

filter = [ POSKeepFilter('名詞'), TokenCountFilter() ]
a = Analyzer(token_filters = filter)
results = a.analyze(text)

s = sorted(results, key=lambda x:x[1], reverse=True)
for i, wc in enumerate(s):
  if i >= 30: break
  print((i + 1), ':', wc)