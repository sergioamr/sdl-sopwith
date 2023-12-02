import socket

def create_tcp_server(host, port):
    # Create a socket object
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Bind the socket to the host and port
    server_socket.bind((host, port))

    # Listen for incoming connections
    server_socket.listen(1)
    print(f"Server listening on {host}:{port}")

    # Accept a connection
    connection, address = server_socket.accept()
    print(f"Connected by {address}")

    # You can now send or receive data
    # data = connection.recv(1024)
    # connection.send(b'Your response here')

    # Close the connection when done
    connection.close()
    server_socket.close()

# Example usage
create_tcp_server('0.0.0.0', 3847)