
import http.client  

try:
    import json
except ImportError:
    # pass
    import simplejson as json 

path = ('/maps/geo?q=207+N.+Defiance+St%2C+Archbold%2C+OH' '&output=json&oe=utf8') 

connection = http.client.HTTPConnection('maps.google.com')
connection.request('GET',path)
rawreply = connection.getresponse().read()

reply = json.loads(rawreply)
print (reply['Placemark'][0]['Point']['coordinates'][:-1]) 
