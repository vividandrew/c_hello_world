#alpine ubuntu image used as the os
FROM alpine

#apk is the apt-get of other distros
RUN apk update
RUN apk add --no-cache build-base libstdc++

#make sure the directory exists in home
RUN mkdir -p /home/ubuntu

#copy all the code relevant to the section
COPY ./src/*.c /home/ubuntu/

#build the project during the image building stage
RUN gcc /home/ubuntu/Main.c -o /home/ubuntu/main

#runs the executable when running the container
CMD /home/ubuntu/main
