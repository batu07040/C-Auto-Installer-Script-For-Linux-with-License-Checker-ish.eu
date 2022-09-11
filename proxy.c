
#include <stdio.h>

// sysctl net.ipv4.ip_forward=1 Bunu aktifleştir önce

int main(int argc,char **argv){

	char sysx[255];
	sprintf(sysx,"iptables -t nat -A PREROUTING -p udp --dport %s -j DNAT --to-destination %s:%s && iptables -t nat -A POSTROUTING -j MASQUERADE",argv[1],argv[2],argv[3]);
	system(sysx);

}


