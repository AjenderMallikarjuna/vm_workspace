import subprocess
import queue
import threading 

def enqueue_output(out, queue):
    for line in iter(out.readline, b''):
        queue.put(line)
    out.close()

q = queue.Queue()

proc = subprocess.Popen(['candump', 'vcan0'], 
                        stdout=subprocess.PIPE,
                        stderr=subprocess.PIPE)

t = threading.Thread(target=enqueue_output, args=(proc.stdout, q))
t.daemon = True 
t.start()

while True:
    try:
        line = q.get_nowait()
        # Process line here 
        print(line)
        
    except queue.Empty: 
        pass # Get next line  

proc.terminate()