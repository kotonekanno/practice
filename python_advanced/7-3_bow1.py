from sklearn.feature_extraction.text import CountVectorizer

doc = ['Dog like cats, but cats do not like dogs.',
       'I have a dog.']
cv = CountVectorizer()
cv.fit(doc)
print(cv.get_feature_names_out())

v = cv.transform(doc)
bow = v.toarray()
print(bow)