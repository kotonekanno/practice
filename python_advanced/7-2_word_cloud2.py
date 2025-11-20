! curl -s -O https://moji.or.jp/wp-content/ipafont/IPAfont/ipagp00303.zip
! unzip -o -q ipagp00303.zip
! pip install janome
from janome.tokenizer import Tokenizer
from wordcloud import WordCloud
import matplotlib.pyplot as plt

t = Tokenizer()
tokens = t.tokenize('犬と猫と犬とトリオ猫と犬と犬と犬と犬とウサギがいる', wakati=True)
t_list = list(tokens)
text = ' '.join(t_list)

wc = WordCloud(background_color='white',font_path='ipagp00303/ipagp.ttf')
img = wc.generate(text)
plt.axis('off')
plt.imshow(img)
plt.show()
