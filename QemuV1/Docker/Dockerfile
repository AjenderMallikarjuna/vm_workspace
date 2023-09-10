FROM ubuntu:22.04


RUN \
  DEBIAN_FRONTEND=noninteractive \
  apt-get update && \
  apt-get install -y --no-install-recommends qemu-utils bridge-utils dnsmasq uml-utilities iptables wget net-tools iproute2 && \
  apt-get autoremove -y && \
  apt-get install -y python3-pip && \
  apt-get install -y python3.8-dev && \
  apt-get install -y python3-venv && \
  apt-get install -y apt-utils && \
  apt-get install -y glib-2.0 && \
  apt-get update && \
  apt-get purge -y --auto-remove

RUN ln -s /usr/bin/python3 /usr/bin/python

# Install Python 3.8 and pip

RUN apt-get  install -y ninja-build && \
    apt-get  install -y libpixman-1-0 && \
    apt-get install -y libpixman-1-dev && \
    apt-get install -y flex && \
    apt-get install -y bison
    

# Set Python 3.8 as the default

RUN useradd -ms /bin/bash ajender

# Set the working directory inside the container
USER ajender
WORKDIR /home/ajender









#ENTRYPOINT ["/bin/bash"]