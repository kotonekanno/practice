! pip install janome
from janome.tokenizer import Tokenizer
from sklearn.feature_extraction.text import CountVectorizer
from sklearn.metrics.pairwise import cosine_similarity

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

cv = CountVectorizer(token_pattern='(?u)\\b\\w+\\b')
cv.fit(doc2)
print(cv.get_feature_names_out())
v = cv.transform(doc2)
bow = v.toarray()
cs = cosine_similarity(bow, bow)
print(cs)