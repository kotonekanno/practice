! pip install janome
from janome.tokenizer import Tokenizer
from sklearn.feature_extraction.text import TfidfVectorizer

doc = [
  '私は犬と白熊が好きです',
  '私は猫が好きです',
  '私は犬と猫が好きです',
]
doc2 = []

t = Tokenizer()
for d in doc:
  tokens = t.tokenize(d, wakati=True)
  t_list = list(tokens)
  doc2.append(' '.join(t_list))

tv = TfidfVectorizer(token_pattern='(?u)\\b\\w+\\b')
tv.fit(doc2)
print(tv.get_feature_names_out())
v = tv.transform(doc2)
tfidf = v.toarray()
print(tfidf)