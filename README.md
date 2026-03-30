Sentiment Analysis Using Bayes

This is a project that uses Machine Learning to figure out how someone feels about something they wrote. The Naive Bayes algorithm looks at what the person said. Decides if they are happy, sad or feel nothing about it.

Features:

Classifies what people write into Positive Neutral feelings

Tells you how it feels about what you wrote away

Shows how sure it is about its decision

Makes the text easier to understand by making everything lowercase and removing punctuation

Easy to learn and do

Tech Stack:

Python

Scikit-learn

Natural Language Processing (NLP)

How It Works:

We start with a group of sentences that we already know how people feel about. We make all the text the same size and remove punctuation. Then we turn the text into numbers that the computer can understand. The Naive Bayes model learns from these sentences. Then it can tell us how someone feels about what they wrote and how sure it is.

Project Structure:

sentiment-analysis/

│── main.py

│── README.md

│── requirements.txt

Installation & Setup:

Get a copy of the project
git clone https://github.com/your-username/sentiment-analysis.git

cd sentiment-analysis

Get all the tools you need
pip install -r requirements.txt

Start the project
python main.py

Example Usage:

Enter a sentence: I love this product

Sentiment: Positive

Confidence: 0.85

Limitations:

The project does not use a lot of sentences to learn from so it is not always right. It also cannot tell if someone is being sarcastic or using language. It is a way of understanding what people write.

Future Improvements:

We can use sentences to make it smarter like the ones from IMDb or Twitter. We can also use ways of turning text into numbers like TF-IDF. Adding advanced models like LSTM or BERT can help too. Maybe we can even make a web page, for it using Streamlit.

Author:

Biswarup Das

25BAI10692
