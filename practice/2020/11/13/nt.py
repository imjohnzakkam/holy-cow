import sys
import json
import requests
import csv
import socket

def trigger_api(ip):
  querystring = {"ip": ip}
  url = "https://geo.ipify.org/api/v1?apiKey=at_LHZrfcs9aoOIVLAmHfZdyGOj9hzKW&ipAddress="+ip

  response =  requests.request('GET', 'http://ip-api.com/json/'+ip)

  if(200 == response.status_code):
    return json.loads(response.text)
  else:
    return None

if __name__ == "__main__":
          
          ip=requests.get('https://api.ipify.org').text #public ip

          print("Getting details for IP: " + ip+".....")
          print("Details:")
          api_response = trigger_api(ip)
          
          
          for x in  api_response:
              print(x,":",api_response[x])

print(socket.gethostbyname(socket.gethostname()))