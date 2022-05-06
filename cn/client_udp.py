import socket

UDP_IP = "localhost"
UDP_PORT = 8080
MESSAGE = "A UDP Connection"

print("message:",MESSAGE)

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
sock.sendto(bytes(MESSAGE,"utf_8"),(UDP_IP,UDP_PORT))