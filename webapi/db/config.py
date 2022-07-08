from pymongo import MongoClient

client = MongoClient('localhost', 27017)

db = client['gabestore']

games = db['games']
users = db['users']
