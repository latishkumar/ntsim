docker run -itd --name NTS_Manager -p 127.0.0.1:8300:830/tcp -e BUILD_TYPE=manager -e NTS_IP="127.0.0.1" -e NETCONF_BASE=40000 -v /var/run/docker.sock:/var/run/docker.sock -v $(pwd):/opt/dev/scripts -v /usr/bin/docker:/usr/bin/docker --label "NTS-manager" ntsimulator
