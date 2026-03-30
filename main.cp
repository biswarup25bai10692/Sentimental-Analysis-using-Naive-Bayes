from sklearn.feature_extraction.text import CountVectorizer
from sklearn.naive_bayes import MultinomialNB
import string

# Dataset
sentences = [
    "I love this product",
    "This is amazing",
    "I feel great",
    "I am very happy",
    "This is bad",
    "I hate this",
    "This is terrible",
    "I am sad",
    "This is okay",
    "It is average"
]

labels = [
    "positive", "positive", "positive", "positive",
    "negative", "negative", "negative", "negative",
    "neutral", "neutral"
]

# Preprocessing function
def clean_text(text):
    text = text.lower().strip()
    text = text.translate(str.maketrans('', '', string.punctuation))
    return text

# Clean dataset
cleaned_sentences = [clean_text(s) for s in sentences]

# Feature extraction
vectorizer = CountVectorizer()
X = vectorizer.fit_transform(cleaned_sentences)

# Train model
model = MultinomialNB()
model.fit(X, labels)

# User input
user_input = input("Enter a sentence: ")

if not user_input.strip():
    print("Please enter valid text.")
else:
    user_input = clean_text(user_input)
    X_test = vectorizer.transform([user_input])

    prediction = model.predict(X_test)[0]
    confidence = model.predict_proba(X_test).max()

    print(f"Sentiment: {prediction}")
    print(f"Confidence: {confidence:.2f}")
