! curl -s -O https://www.gutenberg.org/cache/epub/69584/pg69584.txt
from wordcloud import WordCloud
import matplotlib.pyplot as plt

with open('pg69584.txt') as f:
  text = f.read()
wc = WordCloud(background_color='white')
img = wc.generate(text)
plt.axis('off')
plt.imshow(img)
plt.show()