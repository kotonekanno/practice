! curl -s -O https://www.aozora.gr.jp/cards/000148/files/773_ruby_5968.zip
! unzip -o -q 773_ruby_5968.zip
! curl -s -O https://moji.or.jp/wp-content/ipafont/IPAfont/ipagp00303.zip
! unzip -o -q ipagp00303.zip
! pip install janome
from janome.tokenizer import Tokenizer
from janome.analyzer import Analyzer
from janome.tokenfilter import *
from wordcloud import WordCloud
import matplotlib.pyplot as plt

with open('kokoro.txt', encoding='shift-jis') as f:
  text = f.read()

filter = [ POSKeepFilter(['形容詞']) ]
a = Analyzer(token_filters=filter)
tokens = a.analyze(text)

adj = []
for token in tokens:
  adj.append(token.base_form)
text = ' '.join(adj)

wc = WordCloud(background_color='white',font_path='ipagp00303/ipagp.ttf')
img = wc.generate(text)
plt.axis('off')
plt.imshow(img)
plt.show()