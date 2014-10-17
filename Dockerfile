#Move this file back to the folder containing CS4227
#Run with: sudo docker build --no-cache=true -t cs4227 .

FROM walsh06/ubuntu_cs4227:latest

MAINTAINER Liam

ADD CS4227 /opt/CS4227
RUN sudo make release -C /opt/CS4227/
RUN sudo ./opt/CS4227/bin/Release/CS4227_Project