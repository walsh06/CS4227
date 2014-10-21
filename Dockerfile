#Move this file back to the folder containing CS4227
#Run with: sudo docker build -t cs4227 .

FROM walsh06/ubuntu_cs4227:latest

MAINTAINER Liam

ADD CS4227 /opt/CS4227
RUN sudo make release -C /opt/CS4227/
RUN sudo /bin/bash /opt/CS4227/run_tests.sh
