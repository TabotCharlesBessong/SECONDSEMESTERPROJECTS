
# This program constitute of  fetching a json file from google map 

import urllib , urllib3 

try:
    import json
except ImportError :
    # pass
    import simplejson as json

params = {'q':'207 N. Defiance St , Archold,OH','output':'json','oe':'utf8'}

url = 'http://maps.google.com/maps/geo?' + urllib.urlencode(params)

rawreply = urllib3.urlopen(url).read()
reply = json.loads(rawreply)

print (reply['Placemark'][0]['Point']['coordinates'][:-1])