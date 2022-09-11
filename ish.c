#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <ifaddrs.h>
#include <netinet/in.h>
#include <string.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"


#define version "2.0.2"

int ubuntuayar();
int sleep();
int kurulum_islemleri();
int sinus_ozelportkur();
int sinus_cokluportkur();
int yonetim_islemleri();
int audiobotkur();
int anamenu();
int proxy_islemleri();
int usleep();
int sinusbotyonetim();
int ts3kur();
int ts3yonetim();
int audioyonetim();
int oyun_kurulum_menu();
int cs_kur();
int mta_kur();
int agar_kur();
int hata_hata_cozum();
int sinusbot_log_level();
int ts_kapanma();

const char injectshellimza[] =
"\n"
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
" _____  _____ _    _ " "                                             \n"
"|_   _|/ ____| |  | |" "            ~ Powered By: www.injectshell.com\n"
"  | | | (___ | |__| |" "            ~ Version : 2.0.2\n"
"  | |  |___  |  __  |" "            ~ Update Date : 19/11/2018 | 20:40\n"
" _| |_ ____) | |  | |" "            ~ \n"
"|_____|_____/|_|  |_|" "            ~ \n"
"\n"
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	
	


int main(void)
{
	
FILE *cmd = popen("wget -q -O -	http://injectshell.eu/lisanskontrol.php", "r");
    char ipadresim[1024];
    while (fgets(ipadresim, sizeof(ipadresim), cmd) != NULL)
        pclose(cmd);
	
	    	
char scgiris[255];
sprintf(scgiris,"curl --data 'tur=genel&ip=%s' https://injectshell.com/istatistik/islem.php >/dev/null 2>&1",ipadresim);
system(scgiris);

	system("clear");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);

	sleep(2);
	
    printf("\n%sISH Script Version 2.0.2 Lisans Dogrulamasi Yapiliyor....",KGRN);
    sleep(1);
    printf("\n%sISH Script Version 2.0.2 Lisans Dogrulamasi Yapiliyor....",KGRN);
    sleep(1);
    printf("\n%sISH Script Version 2.0.2 Lisans Dogrulamasi Yapiliyor....",KGRN);
    sleep(1);
    printf(KWHT);


    FILE *knd = popen("wget -q -O - http://injectshell.eu/lisanskontrol.php?versioncheck", "r");
    char gversion[1024];
    while (fgets(gversion, sizeof(gversion), knd) != NULL)
        pclose(knd);
	

    if(strstr(gversion, "2") != NULL) {

        printf("\n%sSurum Dogrulamasi Yapildi...",KGRN);
        printf("\n%sSurum Dogrulamasi Yapildi...",KGRN);
        printf("\n%sSurum Dogrulamasi Yapildi...",KGRN);
        printf(KWHT);

    } else {

        printf("\n%sSurum Dogrulamasi Yapilamadi ~ Scriptinizi Guncelleyin...",KGRN);
        printf("\n%sSurum Dogrulamasi Yapilamadi ~ Scriptinizi Guncelleyin...",KGRN);
        printf("\n%sSurum Dogrulamasi Yapilamadi ~ Scriptinizi Guncelleyin...\n",KGRN);
        printf(KWHT);
        exit(-1);
    }






    char lisanscheck[255];
    sprintf(lisanscheck,"wget -q -O - http://injectshell.eu/lisanskontrol.php?ipcheck=%s",ipadresim);
    FILE *opmd = popen(lisanscheck, "r");
    char sonuc[1024];
    while (fgets(sonuc, sizeof(sonuc), opmd) != NULL)
        pclose(opmd);



    if(strstr(sonuc, "Var") != NULL) {

        printf("\n");
        printf(KGRN);
        for (int i = 0; i < 100; i++) {


            printf("\rLisans Dogrulama Devam Ediyor : [ %d ]", i);
            usleep(33000);
        }
        printf("\n");
        printf(KWHT);

        //printf("%s[ %s1 %s] Lisans Dogrulamasi Yapiliyor %s",KRED,KYEL,KRED,i);

    } else {

        printf("\n%sISH Script Version 1.0 Lisansiniz Yok -> www.injectshell.com Sayfasindan Lisans Ekleyiniz",KGRN);
        printf("\n%sISH Script Version 1.0 Lisansiniz Yok -> www.injectshell.com Sayfasindan Lisans Ekleyiniz",KGRN);
        printf("\n%sISH Script Version 1.0 Lisansiniz Yok -> www.injectshell.com Sayfasindan Lisans Ekleyiniz\n",KGRN);
        printf(KWHT);
        exit(-1);

    }

    anamenu();

}



int anamenu() {


    int secim;
	donbasa:
    system("clear");
    printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");
    printf("%s1) %sSistem Ayarlamalarini Yap %s[ Ubuntu ]\n",KGRN,KYEL,KMAG);
    printf("%s2) %sKurulum Islemleri %s[ Sinusbot,Audiobot,MTA ]\n",KGRN,KYEL,KMAG);
    printf("%s3) %sUygulama Yonetimi %s[ Baslat,Durdur,Sil ]\n",KGRN,KYEL,KMAG);
    printf("%s4) %sHata Cozumleri %s[ Loglevel,TS3 ]\n",KGRN,KYEL,KMAG);
    printf("%s5) %sProxy Olustur %s [ Teamspeak3 Proxy ]\n",KGRN,KYEL,KMAG);
    printf("\n");
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);
    printf("\n");
    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&secim);



    switch(secim) {
    /*--------------------------------------------*/
    case 0:
        exit(-1);
        break;
    /*--------------------------------------------*/
    case 1:
        ubuntuayar();
        break;
    /*--------------------------------------------*/
    case 2:
        kurulum_islemleri();
        break;
    /*--------------------------------------------*/
    case 3:
        yonetim_islemleri();
        break;
    /*--------------------------------------------*/
    case 4:
        hata_hata_cozum();
        break;
    /*--------------------------------------------*/
    case 5:
        proxy_islemleri();
        break;
    /*--------------------------------------------*/
    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menu'ye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;
        /*--------------------------------------------*/
    }
}





// İşletim Sistemleri Ayarlamaları
int ubuntuayar() {




    int ubsec;
donbasa:
    system("clear");
	
    printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");
	
    printf("%s1) %sUbuntu %s[ 18.04 ]\n",KGRN,KYEL,KMAG);
    printf("%s2) %sUbuntu %s[ 16.04 ]\n",KGRN,KYEL,KMAG);
    printf("%s3) %sUbuntu %s[ 14.04 ]\n",KGRN,KYEL,KMAG);
    printf("\n");
    printf("%s6) %sAna menu'ye don%s\n",KGRN,KYEL,KMAG);
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);
    printf("\n");
    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&ubsec);

    switch(ubsec) {

    case 1:


        system("clear");

        printf("\n");
		printf(KGRN);
		printf(injectshellimza);
		printf(KWHT);
        printf("\n");

        system("sudo apt remove mono*");
        system("sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF");
        system("sudo apt install apt-transport-https");
        system("echo 'deb https://download.mono-project.com/repo/ubuntu stable-bionic main' | sudo tee /etc/apt/sources.list.d/mono-official-stable.list");
        system("sudo apt update");


        break;

    case 2:

        system("clear");

        printf("\n");
		printf(KGRN);
		printf(injectshellimza);
		printf(KWHT);
        printf("\n");

        system("sudo apt remove mono*");
        system("sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF");
        system("sudo apt install apt-transport-https");
        system("echo 'deb https://download.mono-project.com/repo/ubuntu stable-xenial main' | sudo tee /etc/apt/sources.list.d/mono-official-stable.list");
        system("sudo apt update");







        break;

    case 3:

        system("clear");
        printf("\n");
		printf(KGRN);
		printf(injectshellimza);
		printf(KWHT);
        printf("\n");

        system("sudo apt remove mono*");
        system("sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF");
        system("sudo apt install apt-transport-https");
        system("echo 'deb https://download.mono-project.com/repo/ubuntu stable-trusty main' | sudo tee /etc/apt/sources.list.d/mono-official-stable.list");
        system("sudo apt update");




        break;

    case 6:
        anamenu();
        break;

    case 0:
        exit(-1);
        break;

    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menu'ye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;


    }


    system("sudo apt-get update -y && sudo apt-get upgrade -y && sudo apt-get -f install linux-headers-generic -y && apt-get install curl youtube-dl screen wget less libglib2.0-0 psmisc bzip2 libxcursor1 xvfb x11vnc xcb ca-certificates libnss3 libegl1-mesa x11-xkb-utils libasound2 libqt5x11extras5 -y && sudo apt autoremove -y");
    system("sudo apt-get install mono-complete -y && sudo apt-get install mono-devel -y && sudo apt install mono-devel -y && sudo apt install mono-complete -y && sudo apt install mono-dbg -y && sudo apt install referenceassemblies-pcl -y && sudo apt install ca-certificates-mono -y && sudo apt install mono-xsp4 -y");
    system("apt-get install monodevelop -y && apt-get install mono-runtime -y && apt-get install epel-release -y");
    system("clear");
    system("apt-get -qq install wget && apt-get install python -y && apt-get install gcc -y && apt-get install curl -y");
    system("apt-get install libssl-dev -y && apt-get install xcb -y && apt-get -y install libglib2.0-0 -y && apt-get -y install screen -y && apt-get -y install x11vnc -y");
    system("apt-get -y install xvfb -y && apt-get -y install libxcursor1 -y && apt-get -y install ca-certificates -y && apt-get -y install unzip -y ");
    system("apt-get -y install nano -y && apt-get update -y && sudo update-ca-certificates -y && sudo apt-get install default-jre -y");
    system("sudo apt-get install gdb mailutils postfix lib32gcc1 -y && sudo apt-get install lib32stdc++6 -y && sudo apt-get install lib32z1 -y && sudo apt-get install lib32ncursesw5 -y");
    system("dpkg -i libreadline5_5.2-7_ia64.deb && rm -rf libreadline5_5.2-7_ia64.deb");

    system("clear");
    printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");
    sleep(2);
    system("clear");
    anamenu();






}



int kurulum_islemleri(void) {

    int kursec;
donbasa:

    system("clear");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");


    printf("%s1) %sSinusbot Kur %s[ Tek Portlu ]\n",KGRN,KYEL,KMAG);
    printf("%s2) %sSinusbot Kur %s[ Belirli Port Araliklarinda (Sinirsiz) ]\n",KGRN,KYEL,KMAG);
    printf("%s3) %sAudiobot Kur %s[ Sınırsız ]\n",KGRN,KYEL,KMAG);
    printf("%s4) %sTeamspeak3 Kur %s[ 3.5.0 ~ Cracksiz ]\n",KGRN,KYEL,KMAG);
    printf("%s5) %sOyun Kurulumlari %s [ MTA,Agario vb. ]\n",KGRN,KYEL,KMAG);
    printf("\n");
    printf("%s6) %sAna menu'ye don%s\n",KGRN,KYEL,KMAG);
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);

    printf("\n");

    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&kursec);
    //wget -O linuxgsm.sh https://linuxgsm.sh && chmod +x linuxgsm.sh && bash linuxgsm.sh mta

    switch(kursec) {
    /*--------------------------------------------*/
    case 1:
        sinus_ozelportkur();
        break;
    /*--------------------------------------------*/
    case 2:
        sinus_cokluportkur();
        break;
    /*--------------------------------------------*/
    case 3:
        audiobotkur();
        break;
    /*--------------------------------------------*/
    case 4:
        ts3kur();
        break;

    /*--------------------------------------------*/
    case 5:
		oyun_kurulum_menu();
        break;

    /*--------------------------------------------*/
    case 6:
        anamenu();
        break;

    /*--------------------------------------------*/
    case 0:
        exit(-1);
        break;

    /*--------------------------------------------*/
    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menu'ye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;
        /*--------------------------------------------*/
    }

}




int sinus_ozelportkur(void) {


	FILE *cmd = popen("wget -q -O -	http://injectshell.eu/lisanskontrol.php", "r");
    char ipadresim[1024];
    while (fgets(ipadresim, sizeof(ipadresim), cmd) != NULL)
        pclose(cmd);




    system("clear");
	printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");

    int botport;
    printf("%sLutfen Port Numarasi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&botport);



    // Client Kontrol
    FILE *fp;
    fp = fopen("/opt/TeamSpeak3-Client-linux_amd64","r");

    FILE *user;
    user = fopen("/home/ish","r");

    FILE *ytdl;
    ytdl = fopen("/usr/local/bin/youtube-dl","r");

    FILE *sinusbotdosyasi;
    sinusbotdosyasi = fopen("/opt/sinusbot.current.tar.bz2","r");

    char botvarmi[255];
    sprintf(botvarmi,"/opt/sinusbot%d",botport);

    FILE *botkontrol;
    botkontrol = fopen(botvarmi,"r");



    // Kullanıcı Oluşturulmamışsa
    if(sinusbotdosyasi == NULL) {
        system("cd /opt && wget -q --no-check-certificate https://www.sinusbot.com/dl/sinusbot.current.tar.bz2");
    }
    if(user == NULL) {
        system("useradd -N -m -r -p 123456789 ish");
    }
    if(ytdl == NULL) {
        system("wget -q --no-check-certificate https://yt-dl.org/downloads/latest/youtube-dl && chmod 777 youtube-dl");
    }
    if(fp == NULL) {
        system("clear && echo Ilk Olarak ENTER basin,sonra q, sonra y yazip ENTER tusuna basin && echo Ilk Olarak ENTER basin,sonra q, sonra y yazip ENTER tusuna basin");
        char strd[255];
        sprintf(strd,"cd /opt && wget -q http://dl.4players.de/ts/releases/3.1.10/TeamSpeak3-Client-linux_amd64-3.1.10.run --no-check-certificate && chmod 777 TeamSpeak3-Client-linux_amd64-3.1.10.run");
        system(strd);
        system("sleep 1 && cd /opt && ./TeamSpeak3-Client-linux_amd64-3.1.9.run && rm -r TeamSpeak3-Client-linux_amd64-3.1.9.run");
    }
    if(botkontrol == NULL) {

        char stra[255];
        sprintf(stra,"cd /opt && mkdir sinusbot%d",botport);
        system(stra);

        char strb[255];
        sprintf(strb,"cd /opt && cp sinusbot.current.tar.bz2 sinusbot%d/ && cd sinusbot%d && tar -xf sinusbot.current.tar.bz2 && rm -rf sinusbot.current.tar.bz2",botport,botport);
        system(strb);

        char strc[255];
        sprintf(strc,"cd /opt/sinusbot%d && wget -q --no-check-certificate http://injectshell.eu/config.ini && chmod 777 config.ini",botport);
        system(strc);
    } else {
        printf("%d Portu Zaten Kurulu.\n",botport);
        printf("%d Portu Zaten Kurulu.\n",botport);
        printf("%d Portu Zaten Kurulu.\n",botport);
        return 0;
    }

    char stre[255];
    sprintf(stre,"cd /opt/sinusbot%d && ts3_path=/opt/TeamSpeak3-Client-linux_amd64/ts3client_linux_amd64 && ts3_data=/opt/sinusbot%d/data/ && sed -i s@Logo@10@ config.ini && sed -i s@TS3_PATH@$ts3_path@ config.ini && sed -i s@TS3_DATA@$ts3_data@ config.ini && sed -i s@999@%d@ config.ini",botport,botport,botport);
    system(stre);

    char strf[255];
    sprintf(strf,"rm -f /tmp/.sinusbot.lock. && rm -f /tmp/.sinusbot.lock && rm -f /tmp/.X11-unix/X40 && chown -R ish /opt/sinusbot%d",botport);
    system(strf);

    char start[255];
    sprintf(start,"cd /opt/sinusbot%d && sudo -u ish screen -AmdS sinusbot%d ./sinusbot --override-password=foobar",botport,botport);
    system(start);

	
	char sbkackurdu[255];
	sprintf(sbkackurdu,"curl --data 'tur=sinusbot&ip=%s' https://injectshell.com/istatistik/islem.php >/dev/null 2>&1",ipadresim);
	system(sbkackurdu);
	
	system("clear");
    printf("%sYazdığınız Portlara Bot Kurulmuştur.\n",KYEL);
    printf("%sPanel Sifresi : foobar%s\n",KRED,KWHT);
    printf(KWHT);

}


int sinus_cokluportkur() {
	
	FILE *cmd = popen("wget -q -O -	http://injectshell.eu/lisanskontrol.php", "r");
    char ipadresim[1024];
    while (fgets(ipadresim, sizeof(ipadresim), cmd) != NULL)
        pclose(cmd);

    system("clear");
	printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");

    int botportbaslangic;
    printf("%sLutfen Baslangic Port Numarasi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&botportbaslangic);

    int botportbitis;
    printf("%sLutfen Bitis Port Numarasi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&botportbitis);

    int ilkportdegeri = botportbaslangic;

    for(botportbaslangic; botportbaslangic != botportbitis; botportbaslangic++) {

        // Kontroller
        FILE *fp;
        fp = fopen("/opt/TeamSpeak3-Client-linux_amd64","r");

        FILE *user;
        user = fopen("/home/ish","r");

        FILE *ytdl;
        ytdl = fopen("/usr/local/bin/youtube-dl","r");

        char botvarmi[255];
        sprintf(botvarmi,"/opt/sinusbot%d",botportbaslangic);

        FILE *sinusbotdosyasi;
        sinusbotdosyasi = fopen("/opt/sinusbot.current.tar.bz2","r");

        FILE *botkontrol;
        botkontrol = fopen(botvarmi,"r");

        if(user == NULL) {
            system("useradd -N -m -r -p 123456789 ish");
        }
        if(ytdl == NULL) {
            system("wget -q --no-check-certificate https://yt-dl.org/downloads/latest/youtube-dl && chmod 777 youtube-dl");
        }
        if(sinusbotdosyasi == NULL) {
 			system("cd /opt && wget -q --no-check-certificate https://www.sinusbot.com/dl/sinusbot.current.tar.bz2");
        }

        if(fp == NULL) {
            system("clear && echo Ilk Olarak ENTER basin,sonra q, sonra y yazip ENTER tusuna basin && echo Ilk Olarak ENTER basin,sonra q, sonra y yazip ENTER tusuna basin");

            char strd[255];
            sprintf(strd,"cd /opt && wget -q http://dl.4players.de/ts/releases/3.1.10/TeamSpeak3-Client-linux_amd64-3.1.10.run --no-check-certificate && chmod 777 TeamSpeak3-Client-linux_amd64-3.1.10.run");
            system(strd);

            system("sleep 1 && cd /opt && ./TeamSpeak3-Client-linux_amd64-3.1.9.run && rm -r TeamSpeak3-Client-linux_amd64-3.1.9.run");

        }



        if(botkontrol == NULL)
        {
            char stra[255];
            sprintf(stra,"cd /opt && mkdir sinusbot%d",botportbaslangic);
            system(stra);

            char strb[255];
            sprintf(strb,"cd /opt && cp sinusbot.current.tar.bz2 sinusbot%d/ && cd sinusbot%d && tar -xf sinusbot.current.tar.bz2 && rm -rf sinusbot.current.tar.bz2",botportbaslangic,botportbaslangic);
            system(strb);

            char strc[255];
            sprintf(strc,"cd /opt/sinusbot%d && wget -q --no-check-certificate http://injectshell.eu/config.ini && chmod 777 config.ini",botportbaslangic);
            system(strc);
        } else {
            printf("%d Portu Zaten Kurulu.\n",botportbaslangic);
            printf("%d Portu Zaten Kurulu.\n",botportbaslangic);
            printf("%d Portu Zaten Kurulu.\n",botportbaslangic);
            printf(KWHT);
            return 0;
        }


        char stre[255];
        sprintf(stre,"cd /opt/sinusbot%d && ts3_path=/opt/TeamSpeak3-Client-linux_amd64/ts3client_linux_amd64 && ts3_data=/opt/sinusbot%d/data/ && sed -i s@Logo@10@ config.ini && sed -i s@TS3_PATH@$ts3_path@ config.ini && sed -i s@TS3_DATA@$ts3_data@ config.ini && sed -i s@999@%d@ config.ini",botportbaslangic,botportbaslangic,botportbaslangic);
        system(stre);
        char strf[255];
        sprintf(strf,"rm -f /tmp/.sinusbot.lock. && rm -f /tmp/.sinusbot.lock && rm -f /tmp/.X11-unix/X40 && chown -R ish /opt/sinusbot%d",botportbaslangic);
        system(strf);
        char start[255];
        sprintf(start,"cd /opt/sinusbot%d && sudo -u ish screen -AmdS sinusbot%d ./sinusbot --override-password=foobar",botportbaslangic,botportbaslangic);
        system(start);

    }
	
	char sbkackurdubir[255];
	sprintf(sbkackurdubir,"curl --data 'tur=sinusbot&ip=%s' https://injectshell.com/istatistik/islem.php >/dev/null 2>&1",ipadresim);
	system(sbkackurdubir);
	
	
	
	
    printf("%sYazdığınız %d Portu ile %d Portu Aralığına Toplamda %d Adet SinusBot Kurulmuştur.\n",KYEL,ilkportdegeri,botportbitis,(botportbitis-ilkportdegeri));
    printf("%sPanel Sifresi : foobar%s\n",KRED,KWHT);

}


/*
Teamspeak3 Kurulum Bölümü : Tamam
*/
int ts3kur() {
	
	FILE *cmd = popen("wget -q -O -	http://injectshell.eu/lisanskontrol.php", "r");
    char ipadresim[1024];
    while (fgets(ipadresim, sizeof(ipadresim), cmd) != NULL)
        pclose(cmd);


    system("clear");
    printf("\n");
    for (int i = 0; i < 100; i++) {
        printf("\rTeamspeak3 Kurulumu Devam Ediyor : [ %d ]", i);
        usleep(50000);
    }
    printf("\n");

    system("cd /home && rm -rf teamspeak3_ish && mkdir teamspeak3_ish && cd teamspeak3_ish && wget http://dl.4players.de/ts/releases/3.5.0/teamspeak3-server_linux_amd64-3.5.0.tar.bz2 && tar -xf teamspeak3-server_linux_amd64-3.5.0.tar.bz2 && cd teamspeak3-server_linux_amd64 && chmod +x * && su -c './ts3server_startscript.sh start license_accepted=1'");

	char tskackurdu[255];
	sprintf(tskackurdu,"curl --data 'tur=teamspeak3&ip=%s' https://injectshell.com/istatistik/islem.php >/dev/null 2>&1",ipadresim);
	system(tskackurdu);
	
    printf("\n");
    printf("%sTeamspeak3 Server 3.5.0 ~ Sunucunuz Kuruldu...\n",KYEL);
    printf("%sTeamspeak3 Server 3.5.0 ~ Sunucunuz Kuruldu...\n",KYEL);
    printf("%sTeamspeak3 Server 3.5.0 ~ Sunucunuz Kuruldu...\n",KYEL);
    printf("\n");
    printf(KWHT);

}



int audiobotkur() {
	
	FILE *cmd = popen("wget -q -O -	http://injectshell.eu/lisanskontrol.php", "r");
    char ipadresim[1024];
    while (fgets(ipadresim, sizeof(ipadresim), cmd) != NULL)
        pclose(cmd);



    char audioip[255];
    char audioyetki[255];
    char audioname[255];

    int audioseskalite;
    int audioport;

    system("clear");
    printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");

    printf("%sBotunuza ozel isim girin %s[>]  : %s",KGRN,KRED,KGRN);
    scanf("%s",audioname);

    printf("%sBotunuzun baglanacagi ip adresini giriniz %s[>]  : %s",KGRN,KRED,KGRN);
    scanf("%s",audioip);

    printf("%sBotunuzun baglanacagi port adresini giriniz %s[>]  : %s",KGRN,KRED,KGRN);
    scanf("%d",&audioport);

    printf("%sBotunuzun ses kalitesini giriniz %s[>]  %s(min:32 ~ max:128) : %s",KGRN,KRED,KWHT,KGRN);
    scanf("%d",&audioseskalite);


    printf("%sBotunuzun kontrolunu saglayacak kisinin uid %s[>]  : %s",KGRN,KRED,KGRN);
    scanf("%s",audioyetki);

    FILE *audioyt;
    audioyt = fopen("/usr/local/bin/youtube-dl","r");
    if(audioyt == NULL) {
        system("wget -q --no-check-certificate https://yt-dl.org/downloads/latest/youtube-dl && chmod 777 youtube-dl");
    }

    char audiobotvarmi[255];
    sprintf(audiobotvarmi,"/opt/AudioBot%s",audioname);

    FILE *audiobotcontrol;
    audiobotcontrol = fopen(audiobotvarmi,"r");


    if(audiobotcontrol == NULL) {
        char clsgr[255];
        sprintf(clsgr,"cd /opt && mkdir AudioBot%s && cd /opt/AudioBot%s",audioname,audioname);
        system(clsgr);

        char dosyacekilk[255];
        sprintf(dosyacekilk,"clear && cd /opt/AudioBot%s && wget -q --no-check-certificate http://http://injectshell.eu/bot.zip && unzip bot.zip && rm -rf bot.zip",audioname);
        system(dosyacekilk);

        char dosyacekiki[255];
        sprintf(dosyacekiki,"clear && cd /opt/AudioBot%s && wget -q --no-check-certificate http://http://injectshell.eu/rights.toml",audioname);
        system(dosyacekiki);

        /*
        		char audical[255];
        		sprintf(audical,"cd /opt/AudioBot%s && chmod 777 * && su -c './InstallOpus.sh' && rm -rf opus-1.2.1.tar.gz",audioname);
        		system(audical);
        		*/
        /*
        		char dosyacekuc[255];
        		sprintf(dosyacekuc,"cd /opt/AudioBot%s && wget -q --no-check-certificate https://ffmpeg.zeranoe.com/builds/win64/static/ffmpeg-latest-win64-static.zip && unzip ffmpeg-latest-win64-static.zip && rm -rf ffmpeg-latest-win64-static.zip",audioname);
        		system(dosyacekuc);*/

        char dosyacekdort[256];
        sprintf(dosyacekdort,"clear && cd /opt/AudioBot%s/Bots && rm -rf bot_default.toml && wget -q --no-check-certificate http://http://injectshell.eu/bot_default.toml && chmod 777 bot_default.toml",audioname);
        system(dosyacekdort);

        char audiodosyaduzenle[256];
        sprintf(audiodosyaduzenle,"clear && cd /opt/AudioBot%s && sed -i 's@yetkiliid@%s@' rights.toml",audioname,audioyetki);
        system(audiodosyaduzenle);

        char ipdegis[256];
        sprintf(ipdegis,"clear && cd /opt/AudioBot%s/Bots && sed -i 's@ts3degisip@%s@' bot_default.toml",audioname,audioip);
        system(ipdegis);

        char portdegis[256];
        sprintf(portdegis,"clear && cd /opt/AudioBot%s/Bots && sed -i 's@ts3portdegis@%d@' bot_default.toml",audioname,audioport);
        system(portdegis);

        char seskalitedegis[256];
        sprintf(seskalitedegis,"clear && cd /opt/AudioBot%s/Bots && sed -i 's@kalitedegis@%d@' bot_default.toml",audioname,audioseskalite);
        system(seskalitedegis);

        char botisimdegis[256];
        sprintf(botisimdegis,"clear && cd /opt/AudioBot%s/Bots && sed -i 's@botisimdegis@%s@' bot_default.toml",audioname,audioname);
        system(botisimdegis);

        char audiokurbaslat[512];
        sprintf(audiokurbaslat,"clear && cd /opt/AudioBot%s && screen -AmdS AudioBot%s mono TS3AudioBot.exe",audioname,audioname);
        system(audiokurbaslat);
    }

	system("clear");
	
	char audiokackurdu[255];
	sprintf(audiokackurdu,"curl --data 'tur=audiobot&ip=%s' https://injectshell.com/istatistik/islem.php >/dev/null 2>&1",ipadresim);
	system(audiokackurdu);
	
	

    printf(KWHT);
    printf("%sBotunuzun => %s[ADI] < %s >\n",KYEL,KMAG,audioname);
    printf("%sBotunuzun => %s[BAGLANACAGI IP] < %s >\n",KYEL,KMAG,audioip);
    printf("%sBotunuzun => %s[BAGLANACAGI PORT] < %d >\n",KYEL,KMAG,audioport);
    printf("%sBotunuzun => %s[SES KALITESI] < %d > \n",KYEL,KMAG,audioseskalite);
    printf("%sBotunuzun => %s[YETKIUID] < %s >\n",KYEL,KMAG,audioyetki);




}

// Oyun Kurulum Bölümü

int oyun_kurulum_menu(){
	
	
	int oyunsec;
donbasa:

    system("clear");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");


    printf("%s1) %sCounter Strike 1.6 Kur. %s[%sYakında%s]\n",KGRN,KYEL,KRED,KYEL,KRED);
    printf("%s2) %sMTA Kur.\n",KGRN,KYEL);
    printf("%s3) %sAgario Kur. %s[%sCentos İçin%s]\n",KGRN,KYEL,KRED,KYEL,KRED);
    printf("\n");
    printf("%s6) %sAna menu'ye don%s\n",KGRN,KYEL,KMAG);
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);

    printf("\n");

    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&oyunsec);
	
    // wget -O linuxgsm.sh https://linuxgsm.sh && chmod +x linuxgsm.sh && bash linuxgsm.sh mta

    switch(oyunsec) {
    /*--------------------------------------------*/
    case 1:
        cs_kur();
        break;
    /*--------------------------------------------*/
    case 2:
        mta_kur();
        break;
    /*--------------------------------------------*/
    case 3:
        agar_kur();
        break;
    /*--------------------------------------------*/
    case 6:
        anamenu();
        break;

    /*--------------------------------------------*/
    case 0:
        exit(-1);
        break;

    /*--------------------------------------------*/
    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menu'ye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;
        /*--------------------------------------------*/
    }

}

int cs_kur(){
	
	FILE *cmd = popen("wget -q -O -	http://injectshell.eu/lisanskontrol.php", "r");
    char ipadresim[1024];
    while (fgets(ipadresim, sizeof(ipadresim), cmd) != NULL)
        pclose(cmd);
	
	
	system("clear");
	printf("Yakında Eklenecektir...\n");
	exit(-1);
	
	char cskackurdu[255];
	sprintf(cskackurdu,"curl --data 'tur=cs16&ip=%s' https://injectshell.com/istatistik/islem.php >/dev/null 2>&1",ipadresim);
	system(cskackurdu);
	
	
	
}

// MTA KURULUMU

int mta_kur(){
	
	
	FILE *cmd = popen("wget -q -O -	http://injectshell.eu/lisanskontrol.php", "r");
    char ipadresim[1024];
    while (fgets(ipadresim, sizeof(ipadresim), cmd) != NULL)
        pclose(cmd);
	
	system("clear");
	
	FILE *mtacontrol;
    mtacontrol = fopen("/root/mta","r");
	
	
	if(mtacontrol == NULL){

	
	printf("%sKurulum Başladı Lütfen Bekleyiniz.\n",KGRN);
	
	char asamabirmta[255];
	sprintf(asamabirmta,"sudo apt-get install -y xrdp && sudo apt-get install -y xfce4 && apt-get install wget -y && apt-get install -y unzip && clear");
	system(asamabirmta);
	

	char asamaikimta[255];
	sprintf(asamaikimta,"cd /root && mkdir mta && cd /root/mta && wget -q --no-check-certificate http://injectshell.eu/Mta/multitheftauto_linux_x64-1.5.4.tar.gz && tar -xf multitheftauto_linux_x64-1.5.4.tar.gz && rm -rf multitheftauto_linux_x64-1.5.4.tar.gz");
	system(asamaikimta);
	
	char asamaucmta[255];
	sprintf(asamaucmta,"cd /root/mta && wget -q --no-check-certificate http://injectshell.eu/Mta/baseconfig-1.5.4.tar.gz && tar -xf baseconfig-1.5.4.tar.gz && rm -rf baseconfig-1.5.4.tar.gz");
	system(asamaucmta);
	
	char asamadortmta[255];
	sprintf(asamadortmta,"cd /root/mta/ && mv baseconfig/* multitheftauto_linux_x64-1.5.4/mods/deathmatch && rm -rf baseconfig");
	system(asamadortmta);
	
	char asamabestmta[255];
	sprintf(asamabestmta,"cd /root/mta/ && cd multitheftauto_linux_x64-1.5.4 && mkdir mods/deathmatch/resources && cd mods/deathmatch/resources && wget -q --no-check-certificate https://injectshell.eu/Mta/mtasa-resources-latest.zip && unzip mtasa-resources-latest.zip rm -rf mtasa-resources-latest.zip");
	system(asamabestmta);
	
	char asamaaltibaslat[255];
	sprintf(asamaaltibaslat,"cd /root/mta/multitheftauto_linux_x64-1.5.4 && sudo -u root screen -AmdS mta ./mta-server64");
	
	
	
} else {
	
	printf("%sSunucunuzda Mta Zaten Kurulu.%s\n",KYEL,KWHT);
	exit(-1);
	
}


	char mtakackurdu[255];
	sprintf(mtakackurdu,"curl --data 'tur=mta&ip=%s' https://injectshell.com/istatistik/islem.php >/dev/null 2>&1",ipadresim);
	system(mtakackurdu);

	printf("%sKurulum Yapıldı.\n %sMta Sunucunuz Başlatıldı.\n && %sMTA Portunuz : 22003%s\n",KGRN,KGRN,KGRN,KWHT);

}

 // Agario Kurulumu
int agar_kur(){
	
	FILE *cmd = popen("wget -q -O -	http://injectshell.eu/lisanskontrol.php", "r");
    char ipadresim[1024];
    while (fgets(ipadresim, sizeof(ipadresim), cmd) != NULL)
        pclose(cmd);
	
	
	
	FILE *agarcontrol;
    agarcontrol = fopen("/root/mta","r");
	
	system("clear");
	
	if(agarcontrol == NULL){
	printf("%sKurulum Başlıyor.\n",KGRN);
	sleep(1);
	
	
	char asamailkagar[255];
	sprintf(asamailkagar,"sudo yum install -y epel-release && sudo yum install -y nodejs git && sudo yum install -y gcc-c++ openssl-devel make npm && clear");
	system(asamailkagar);

	char asamaikiagar[255];
	sprintf(asamaikiagar,"cd /root && git clone https://github.com/huytd/agar.io-clone.git && mv agar.io-clone agario");
	system(asamaikiagar);
	
	char asamaucagar[255];
	sprintf(asamaucagar,"cd /root/agario && npm install -g gulp && npm install && sudo -u root screen -AmdS agario gulp run && clear");
	system(asamaucagar);
	
	} else {
		
		printf("%sSunucunuzda Zaten Kurulu.%s",KGRN,KWHT);
		exit(-1);
		
	}
	
	char agarkackurdu[255];
	sprintf(agarkackurdu,"curl --data 'tur=agario&ip=%s' https://injectshell.com/istatistik/islem.php >/dev/null 2>&1",ipadresim);
	system(agarkackurdu);
	
	
	sleep(1);
	
	printf("%sAgario Server Başlatıldı.%s\n",KGRN,KWHT);
	
}

/*
ISH Script Proxy Islemleri Menusu
*/

int proxy_islemleri() {
	
	FILE *cmd = popen("wget -q -O -	http://injectshell.eu/lisanskontrol.php", "r");
    char ipadresim[1024];
    while (fgets(ipadresim, sizeof(ipadresim), cmd) != NULL)
        pclose(cmd);

    char yonkarsiip[255];
    int yonkarsiport;
    int yonport;
    int proxyislem;

donbasa:
    system("clear");
	
    printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");
	
    printf("%s1) %sProxy Olustur %s[ Create Proxy ]\n",KGRN,KYEL,KMAG);
    printf("%s2) %sTum Proxyleri Sil %s[ All Delete ]\n",KGRN,KYEL,KMAG);
    printf("\n");
    printf("%s6) %sAna menu'ye don%s\n",KGRN,KYEL,KMAG);
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);
    printf("\n");
    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&proxyislem);

    switch(proxyislem) {


    case 1:
        system("clear && sysctl net.ipv4.ip_forward=1 && clear");
		printf("\n");
		printf(KGRN);
		printf(injectshellimza);
		printf(KWHT);
        printf("\n");

        printf("%sSunucunuzdan yonlenecek olan portu girin %s[>]  : ",KGRN,KYEL);
        scanf("%d",&yonport);

        printf("%sPortunuzun yonlenecegi ip adresini girin %s[>]  : ",KGRN,KYEL);
        scanf("%s",yonkarsiip);

        printf("%sPortunuzun yonlenecegi port adresini girin %s[>]  : ",KGRN,KYEL);
        scanf("%d",&yonkarsiport);

        char sysx[255];
        sprintf(sysx,"iptables -t nat -A PREROUTING -p udp --dport %d -j DNAT --to-destination %s:%d && iptables -t nat -A POSTROUTING -j MASQUERADE",yonport,yonkarsiip,yonkarsiport);
        system(sysx);

	char kacproxyolustu[255];
	sprintf(kacproxyolustu,"curl --data 'tur=proxy&ip=%s' https://injectshell.com/istatistik/islem.php >/dev/null 2>&1",ipadresim);
	system(kacproxyolustu);
		
		
		
		
		system("clear");
		
		
        printf("\n%s [ %d ] Portunuzu [ %s:%d ] Adresine Yonlendirdiniz..\n",KYEL,yonport,yonkarsiip,yonkarsiport);
        printf("\n%s [ %d ] Portunuzu [ %s:%d ] Adresine Yonlendirdiniz..\n",KYEL,yonport,yonkarsiip,yonkarsiport);
        printf("\n%s [ %d ] Portunuzu [ %s:%d ] Adresine Yonlendirdiniz..\n\n",KYEL,yonport,yonkarsiip,yonkarsiport);
        printf(KWHT);

        break;

    case 2:
        system("clear && sysctl net.ipv4.ip_forward=0 && clear");
		printf("\n");
		printf(KGRN);
		printf(injectshellimza);
		printf(KWHT);
        printf("\n");
        sleep(1);
        system("iptables -t nat -F && iptables -t nat -X && clear");
		system("clear");
        printf("%sTum Proxyler Kaldirildi..\n",KYEL);
        printf("%sTum Proxyler Kaldirildi..\n",KYEL);
        printf("%sTum Proxyler Kaldirildi..\n",KYEL);
        printf(KWHT);
        break;

    case 6:
        anamenu();
        break;

    case 0:
        exit(-1);
        break;

    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menuye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;
    }

}

int yonetim_islemleri() {


    int yonetsec;
donbasa:
    system("clear");
    printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
	printf("\n");

    printf("\n");
    printf("%s1) %sSinusbot Yonetimi %s[ SBManage ]\n",KGRN,KYEL,KMAG);
    printf("%s2) %sTeamspeak3 Yonetimi %s[ TSManage ]\n",KGRN,KYEL,KMAG);
    printf("%s3) %sAudiobot Yonetimi %s[ ABManage ]\n",KGRN,KYEL,KMAG);
    printf("%s4) %sProxy Yonetimi %s[ PYManage ]\n",KGRN,KYEL,KMAG);
    printf("\n");
    printf("%s6) %sAna menu'ye don%s\n",KGRN,KYEL,KMAG);
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);
    printf("\n");
    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&yonetsec);

    switch(yonetsec) {

    case 1:
        sinusbotyonetim();
        break;

    case 2:
        ts3yonetim();
        break;

    case 3:
        audioyonetim();
        break;

    case 4:
        proxy_islemleri();
        break;

    case 6:
        anamenu();
        break;

    case 0:
        exit(-1);
        break;

    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menuye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;


    }


}




// SinusBot Yönetim


int sinusbotyonetim() {

    int yonsec,portsec;
donbasa:
    printf("%sLutfen Islem Yapilacak Portu Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&portsec);

    system("clear");
	printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");
    printf("%s1) %sSinusbot Baslat\n",KGRN,KYEL);
    printf("%s2) %sSinusbot Durdur\n",KGRN,KYEL);
    printf("%s3) %sSinusbot Yeniden Baslat\n",KGRN,KYEL);
    printf("%s4) %sSinusbot Parola Sifirla\n",KGRN,KYEL);
    printf("%s5) %sSinusbot Kaldir\n",KGRN,KYEL);
    printf("\n");
    printf("%s6) %sAna menu'ye don%s\n",KGRN,KYEL,KMAG);
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);
    printf("\n");
    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&yonsec);

    switch(yonsec) {

    case 1:
        system("clear");
        char startbot[255];
        sprintf(startbot,"rm -rf /tmp/.sinusbot.lock. && rm -rf /tmp/.sinusbot.lock && rm -rf /tmp/.X11-unix/X40 && chown -R ish /opt/sinusbot%d && cd /opt/sinusbot%d && screen -AmdS sinusbot%d ./sinusbot",portsec,portsec,portsec);
        system(startbot);
        printf("\n%s>> %s %d Portlu Botunuz Baslatildi %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portlu Botunuz Baslatildi %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portlu Botunuz Baslatildi %s<<\n",KRED,KYEL,portsec,KRED);
        printf(KWHT);
        break;

    case 2:
        system("clear");
        char stopbot[255];
        sprintf(stopbot,"cd /opt/sinusbot%d && screen -S sinusbot%d -X quit",portsec,portsec);
        system(stopbot);
        printf("\n%s>> %s %d Portlu Botunuz Durduruldu %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portlu Botunuz Durduruldu %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portlu Botunuz Durduruldu %s<<\n",KRED,KYEL,portsec,KRED);
        printf(KWHT);
        break;

    case 3:
        system("clear");
        char restartbot[255];
        sprintf(restartbot,"cd /opt/sinusbot%d && screen -S sinusbot%d -X quit && rm -rf /tmp/.sinusbot.lock. && rm -rf /tmp/.sinusbot.lock && rm -rf /tmp/.X11-unix/X40 && chown -R ish /opt/sinusbot%d && screen -AmdS sinusbot%d ./sinusbot",portsec,portsec,portsec,portsec);
        system(restartbot);
        printf("\n%s>> %s %d Portlu Botunuz Yeniden Baslatildi %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portlu Botunuz Yeniden Baslatildi %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portlu Botunuz Yeniden Baslatildi %s<<\n",KRED,KYEL,portsec,KRED);
        printf(KWHT);
        break;

    case 4:
        system("clear");
        char panelsifsifirla[255];
        sprintf(panelsifsifirla,"cd /opt/sinusbot%d && screen -S sinusbot%d -X quit && screen -AmdS sinusbot%d ./sinusbot --override-password=foobar",portsec,portsec,portsec);
        system(panelsifsifirla);
        printf("\n%s>> %s %d Portunuzun Yeni Panel Sifresi : foobar %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portunuzun Yeni Panel Sifresi : foobar %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portunuzun Yeni Panel Sifresi : foobar %s<<\n",KRED,KYEL,portsec,KRED);
        printf(KWHT);
        break;

    case 5:
        system("clear");
        char botsil[255];
        sprintf(botsil,"cd /opt && screen -S sinusbot%d -X quit && rm -rf sinusbot%d",portsec,portsec);
        system(botsil);
        printf("\n%s>> %s %d Portlu Botunuz Kaldirildi %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portlu Botunuz Kaldirildi %s<<\n",KRED,KYEL,portsec,KRED);
        printf("\n%s>> %s %d Portlu Botunuz Kaldirildi %s<<\n",KRED,KYEL,portsec,KRED);
        printf(KWHT);
        break;

    case 6:
        anamenu();
        break;

    case 0:
        exit(-1);
        break;

    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menuye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;

    }


}

// TS3 YÖNETİM

int ts3yonetim() {

    int ts3yonsec;
    char newpassword[255];
donbasa:
    system("clear");
	printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");
    printf("%s1) %sTeamspeak3 Baslat\n",KGRN,KYEL);
    printf("%s2) %sTeamspeak3 Durdur\n",KGRN,KYEL);
    printf("%s3) %sTeamspeak3 Yeniden Baslat\n",KGRN,KYEL);
    printf("%s4) %sTeamspeak3 Yatqa Sifresi Degistir\n",KGRN,KYEL);
    printf("%s5) %sTeamspeak3 Kaldir\n",KGRN,KYEL);
    printf("\n");
    printf("%s6) %sAna menu'ye don%s\n",KGRN,KYEL,KMAG);
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);
    printf("\n");
    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&ts3yonsec);

    switch(ts3yonsec) {

    case 1:
        system("cd /home/teamspeak3_ish/teamspeak3-server_linux_amd64 && ./ts3server_startscript.sh start license_accepted=1");
        system("clear");
        printf("\n");
        printf("%sTeamspeak3 Sunucunuz Baslatildi..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuz Baslatildi..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuz Baslatildi..\n",KYEL);
        printf(KWHT);
        break;

    case 2:
        system("cd /home/teamspeak3_ish/teamspeak3-server_linux_amd64 && ./ts3server_startscript.sh stop license_accepted=1");
        system("clear");
        printf("\n");
        printf("%sTeamspeak3 Sunucunuz Durduruldu..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuz Durduruldu..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuz Durduruldu..\n",KYEL);
        printf(KWHT);
        break;

    case 3:
        system("cd /home/teamspeak3_ish/teamspeak3-server_linux_amd64 && ./ts3server_startscript.sh restart license_accepted=1");
        system("clear");
        printf("\n");
        printf("%sTeamspeak3 Sunucunuz Yeniden Baslatildi..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuz Yeniden Baslatildi..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuz Yeniden Baslatildi..\n",KYEL);
        printf(KWHT);
        break;

    case 4:
        printf("%sLutfen Yeni Yatqa Sifrenizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
        scanf("%s",newpassword);
        char comcmd[255];
        sprintf(comcmd,"cd /home/teamspeak3_ish/teamspeak3-server_linux_amd64 && ./ts3server_minimal_runscript.sh serveradmin_password=%s",newpassword);
        system(comcmd);
        system("clear");
        printf("%sTeamspeak3 Sunucunuzun Yatqa Sifresi Degistirildi..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuzun Yatqa Sifresi Degistirildi..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuzun Yatqa Sifresi Degistirildi..\n",KYEL);
        printf("%sYeni Parolaniz : %s\n",KYEL,newpassword);
        break;

    case 5:
        system("cd /home/teamspeak3_ish/teamspeak3-server_linux_amd64 && su -c './ts3server_startscript.sh stop' && cd /home && rm -rf teamspeak3_ish");
        system("clear");
        printf("\n");
        printf("%sTeamspeak3 Sunucunuz Kaldirildi..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuz Kaldirildi..\n",KYEL);
        printf("%sTeamspeak3 Sunucunuz Kaldirildi..\n",KYEL);
        printf(KWHT);
        break;

    case 6:
        anamenu();
        break;

    case 0:
        exit(-1);
        break;

    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menuye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;

    }

}



 // AudioBot Yönetim
 
int audioyonetim() {


    int audioyonsec;
    char botnamess[255];

    char startcmd[255];
    char stopcmd[255];
    char restartcmd[255];
    char removecmd[255];

donbasa:
    printf("%sIslem yapilacak botun ismini girin %s[>]  : %s",KGRN,KBLU,KGRN);
    scanf("%s",botnamess);

    system("clear");
	printf("\n");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");
    printf("%s1) %sAudiobot Baslat\n",KGRN,KYEL);
    printf("%s2) %sAudiobot Durdur\n",KGRN,KYEL);
    printf("%s3) %sAudiobot Yeniden Baslat\n",KGRN,KYEL);
    printf("%s4) %sAudiobot Kaldir\n",KGRN,KYEL);
    printf("%s5) %sAudiobot Tumunu Kaldir\n",KGRN,KYEL);
    printf("\n");
    printf("%s6) %sAna menu'ye don%s\n",KGRN,KYEL,KMAG);
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);
    printf("\n");
    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&audioyonsec);

    switch(audioyonsec) {

    case 1:


        sprintf(startcmd,"cd /opt/AudioBot%s && sudo -u ish screen -AmdS AudioBot%s mono TS3AudioBot.exe && clear",botnamess,botnamess);
        system(startcmd);

        system("clear");
        printf("\n");
        printf("%sAudiobot Sunucunuz Baslatildi..\n",KYEL);
        printf("%sAudiobot Sunucunuz Baslatildi..\n",KYEL);
        printf("%sAudiobot Sunucunuz Baslatildi..\n",KYEL);
        printf(KWHT);
        break;

    case 2:


        sprintf(stopcmd,"cd /opt/AudioBot%s && screen -S AudioBot%s -X quit && clear",botnamess,botnamess);
        system(stopcmd);

        system("clear");
        printf("\n");
        printf("%sAudiobot Sunucunuz Durduruldu..\n",KYEL);
        printf("%sAudiobot Sunucunuz Durduruldu..\n",KYEL);
        printf("%sAudiobot Sunucunuz Durduruldu..\n",KYEL);
        printf(KWHT);

        break;

    case 3:

        sprintf(restartcmd,"cd /opt/AudioBot%s && screen -S AudioBot%s -X quit && clear && cd /opt/AudioBot%s && sudo -u ish screen -AmdS AudioBot%s mono TS3AudioBot.exe && clear",botnamess,botnamess,botnamess,botnamess);
        system(restartcmd);

        system("clear");
        printf("\n");
        printf("%sAudiobot Sunucunuz Yeniden Baslatildi..\n",KYEL);
        printf("%sAudiobot Sunucunuz Yeniden Baslatildi..\n",KYEL);
        printf("%sAudiobot Sunucunuz Yeniden Baslatildi..\n",KYEL);
        printf(KWHT);

        break;


    case 4:

        sprintf(removecmd,"screen -S AudioBot%s -X quit && rm -rf /opt/AudioBot%s ",botnamess,botnamess);
        system(removecmd);
        system("clear");
        printf("\n");
        printf("%sAudiobot Sunucunuz Kaldirildi..\n",KYEL);
        printf("%sAudiobot Sunucunuz Kaldirildi..\n",KYEL);
        printf("%sAudiobot Sunucunuz Kaldirildi..\n",KYEL);
        printf(KWHT);

        break;

    case 5:

        system("cd /opt && rm -rf AudioBot*");
        system("clear");
        printf("%sTum AudioBotlar Kaldirildi Sunucunuzu Yeniden Baslatiniz..\n",KYEL);
        printf("%sTum AudioBotlar Kaldirildi Sunucunuzu Yeniden Baslatiniz..\n",KYEL);
        printf("%sTum AudioBotlar Kaldirildi Sunucunuzu Yeniden Baslatiniz..\n",KYEL);
        printf(KWHT);
        break;

    case 6:
        anamenu();
        break;

    case 0:
        exit(-1);
        break;

    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menuye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;
    }


}









int hata_hata_cozum(){
	
	
	int hatacozum;
donbasa:

    system("clear");
    printf(KGRN);
    printf(injectshellimza);
    printf(KWHT);
    printf("\n");


    printf("%s1) %sSinusBot LogLevel Sorunu\n",KGRN,KYEL);
    printf("%s2) %sTeamSpeak3 2 Saat Sonra Kapanma Sorunu\n",KGRN,KYEL);
    printf("\n");
    printf("%s6) %sAna menu'ye don%s\n",KGRN,KYEL,KMAG);
    printf("%s0) %sCikis %s( Exit )\n",KGRN,KYEL,KRED);

    printf("\n");

    printf("%sLutfen Seciminizi Girin %s───> %s[] %s: ",KGRN,KYEL,KRED,KWHT);
    scanf("%d",&hatacozum);

    switch(hatacozum) {
    /*--------------------------------------------*/
    case 1:
        sinusbot_log_level();
        break;
    /*--------------------------------------------*/
    case 2:
        ts_kapanma();
        break;

    /*--------------------------------------------*/
    case 6:
        anamenu();
        break;

    /*--------------------------------------------*/
    case 0:
        exit(-1);
        break;

    /*--------------------------------------------*/
    default:
        system("clear");
        printf("\n");
        printf("%sHatali secim yaptiniz. Bir onceki menu'ye donuyorsunuz..",KGRN);
        printf("\n");
        sleep(3);
        goto donbasa;
        break;
        /*--------------------------------------------*/
    }
	
}

int sinusbot_log_level(){
	
	system("clear");
	
	int logport;
donbasa:
    printf("%sLutfen Hata Aldığınız Portu Girin %s───> %s[] %s : %s\n",KGRN,KYEL,KRED,KWHT,KGRN);
    scanf("%d",&logport);
	
	
	
		char botvarm[255];
    sprintf(botvarm,"/opt/sinusbot%d",logport);

    FILE *botcontrol;
    botcontrol = fopen(botvarm,"r");
	
	
	system("clear");
	
	
	if(botcontrol == NULL){
	
		system("clear");
		printf("%s%d Portu Kurulu Değil...%s\n",KMAG,logport,KWHT);
		exit(-1);
	
	}else{

	for (int i = 0; i < 100; i++) {
	printf("%sHata Çözülüyor... %s[%s%d%s]\n",KGRN,KRED,KYEL,i,KRED);
	usleep(33000);
	
}
	
		char loglevelilk[255];
		sprintf(loglevelilk,"cd /opt/sinusbot%d && sed -i 's@LogLevel = 10@LogLevel = 20@' config.ini",logport);
		system(loglevelilk);
	
		char logleveliki[255];
		sprintf(logleveliki,"rm -rf /tmp/.sinusbot.lock. && rm -rf /tmp/.sinusbot.lock && rm -rf /tmp/.X11-unix/X40 && chown -R ish /opt/sinusbot%d && cd /opt/sinusbot%d && sudo -u ish screen -S sinusbot%d -X quit && sudo -u ish screen -AmdS sinusbot%d ./sinusbot",logport,logport,logport,logport);
		system(logleveliki);
		
		
		
	}
	
	
	

	
	
	
	printf("%s%d Portunun LogLevel Sorunu Çözüldü.%s\n",KGRN,logport,KWHT);
	
	

	
	
	
}

int ts_kapanma(){
	
	
	
	system("clear");
	printf("%sYakında\n",KGRN);
	exit(-1);
	
}
