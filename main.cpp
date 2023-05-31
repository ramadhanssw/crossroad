#include<graphics.h>
#include<stdio.h>
#include<MMsystem.h>
#include<fstream>

class objek
{
public:
    void mobilplayer (int x, int y)
    {
        //sisi depan dan belakang
        setcolor(LIGHTBLUE);
        ellipse(x,y,0,180,30,15);
        line(x-30,y,x-30,y+110);
        line(x+30,y,x+30,y+110);
        ellipse(x,y+110,180,0,30,10);
        //lampu
        line(x+30,y,x+15,y-7.5); line(x+15,y-10,x+15,y-7.5); line(x-30,y,x-15,y-7.5); line(x-15,y-10,x-15,y-7.5);//lampu depan
        line(x+30,y+110,x+15,y+115); line(x+30,y+115,x+30,y+117.5); line(x-30,y+110,x-15,y+115); line(x-30,y+115,x-30,y+117.5); //lampu belakang
        //kaca
        ellipse(x,y+15,0,180,25,5); ellipse(x,y+35,0,180,20,5); line(x+25,y+15,x+20,y+35); line(x-25,y+15,x-20,y+35); //kaca depan
        ellipse(x+30,y+60,90,270,7,40); ellipse(x-30,y+60,270,90,7,40); line(x+23,y+50,x+30,y+50); line(x-23,y+50,x-30,y+50); //kaca samping
        ellipse(x,y+100,180,0,23.5,5); ellipse(x,y+80,180,0,20,5); line(x+23.5,y+100,x+20,y+80); line(x-23.5,y+100,x-20,y+80); //kaca belakang
        rectangle(x-20,y+45,x+20,y+60);//sunroof
        //ban
        line(x+30,y+15,x+33,y+15); line(x+30,y+30,x+33,y+30); ellipse(x+33,y+22.5,270,90,2,7.5); // depan kanan
        line(x+30,y+72.5,x+33,y+72.5); line(x+30,y+87.5,x+33,y+87.5); ellipse(x+33,y+80.5,270,90,2,7.5); // belakang kanan
        line(x-30,y+15,x-33,y+15); line(x-30,y+30,x-33,y+30); ellipse(x-33,y+22.5,90,270,2,7.5); // depan kiri
        line(x-30,y+72.5,x-33,y+72.5); line(x-30,y+87.5,x-33,y+87.5); ellipse(x-33,y+80.5,90,270,2,7.5); // belakang kanan
    }

    void mobilcom (int u, int v)
    {
        //sisi depan depan dan belakang
        setcolor(LIGHTGRAY);
        ellipse(u+0,v+0,0,180,30,10);
        line(u-30,v+0,u-30,v+105);
        line(u+30,v+0,u+30,v+105);
        ellipse(u+0,v+100,180,0,30,15);
        //lampu
        arc(u+25,v,90,360,5); arc(u-25,v,180,90,5); //lampu belakang
        line(u+30,v+105,u+15,v+107.5); line(u+15,v+107,u+15,v+110);line(u-30,v+105,u-15,v+107.5); line(u-15,v+107,u-15,v+110); //lampu depan
        //kaca
        ellipse(u+0,v+10,0,180,25,5); ellipse(u+0,v+25,0,180,20,5); line(u+25,v+10,u+20,v+25); line(u-25,v+10,u-20,v+25); //kaca belakang
        ellipse(u+30,v+50,90,270,7,30); ellipse(u-30,v+50,270,90,7,30); line(u+23,v+50,u+30,v+50); line(u-23,v+50,u-30,v+50); //kaca samping
        ellipse(u+0,v+75,180,0,23,5); ellipse(u+0,v+60,180,0,20,5); line(u+23,v+75,u+20,v+60); line(u-23,v+75,u-20,v+60); //kaca depan
        //ban
        line(u+30,v+15,u+33,v+15); line(u+30,v+30,u+33,v+30); ellipse(u+33,v+22.5,270,90,2,7.5); // depan kanan
        line(u+30,v+72.5,u+33,v+72.5); line(u+30,v+87.5,u+33,v+87.5); ellipse(u+33,v+80.5,270,90,2,7.5); // belakang kanan
        line(u-30,v+15,u-33,v+15); line(u-30,v+30,u-33,v+30); ellipse(u-33,v+22.5,90,270,2,7.5); // depan kiri
        line(u-30,v+72.5,u-33,v+72.5); line(u-30,v+87.5,u-33,v+87.5); ellipse(u-33,v+80.5,90,270,2,7.5); // belakang kanan
    }

    void jalanan ()
    {
        setfillstyle(SOLID_FILL,YELLOW);
        bar(245,0,255,1000);
        bar(745,0,755,1000);
        setfillstyle(SOLID_FILL,WHITE);
        bar(348,0,352,100); bar(448,0,452,100); bar(548,0,552,100); bar(648,0,652,100);

        bar(348,150,352,250); bar(448,150,452,250); bar(548,150,552,250); bar(648,150,652,250);

        bar(348,300,352,400); bar(448,300,452,400); bar(548,300,552,400); bar(648,300,652,400);

        bar(348,450,352,550); bar(448,450,452,550); bar(548,450,552,550); bar(648,450,652,550);

        bar(348,600,352,700); bar(448,600,452,700); bar(548,600,552,700); bar(648,600,652,700);

        bar(348,750,352,850); bar(448,750,452,850); bar(548,750,552,850); bar(648,750,652,850);

        bar(348,900,352,1000); bar(448,900,452,1000); bar(548,900,552,1000); bar(648,900,652,1000);
    }

    void sisijalan()
    {
        setfillstyle(SOLID_FILL,GREEN);
        bar(0,0,240,1000);
        bar(760,0,1000,1000);
    }
};

class menu
{
public:
    void openmenu (int highscore)
    {
        settextjustify(CENTER_TEXT,0);
        bar(325,310,675,315);
        bar(325,225,675,325);
        settextstyle(9,0,6); //jenis font //arah //ukuran
        outtextxy(500,300, "CrossRoad");
        settextstyle(9,0,3);
        outtextxy(500,600, "Press SPACE to play the game");
        settextstyle(9,0,1);
        outtextxy(800,775, "How to play? (Press LSHIFT)");
        char a[50];
        sprintf(a,"Highscore : %d", highscore);
        outtextxy(150,775,a);
    }

    void closemenu(int skor, int highscore)
    {
        PlaySound(NULL,0,0);
        setcolor(WHITE);
        settextstyle(BOLD_FONT,0,3);
        char a[50];
        sprintf(a,"Score : %d", skor);
        outtextxy(500,300,a);
        char b[50];
        sprintf(b,"Highscore : %d", highscore);
        outtextxy(500,400,b);
        settextstyle(BOLD_FONT,0,2);
        outtextxy(500,600, "Made by : Ramadhan Sanyoto SW (07211940000058)");
        outtextxy(150,800,"Play Again?(LSHIFT)");
        outtextxy(850,800,"Press SPACE to exit");
    }

    void buttonmenu(int highscore)
    {
        settextjustify(CENTER_TEXT,0);
        settextstyle(9,0,2);
        outtextxy(500, 250, "Rightwards Arrow : Turn Right");
        outtextxy(500, 300, "Leftwards Arrow : Turn Left");
        outtextxy(500, 350, "Upwards Arrow : Move Forward");
        outtextxy(500, 400, "Downwards Arrow : Move Backward");
        outtextxy(500, 600, "Press SPACE to play the game");
        settextstyle(9,0,1);
        outtextxy(800,775, "Back to menu (Press TAB)");
        char a[50];
        sprintf(a,"Highscore : %d", highscore);
        outtextxy(150,775,a);
    }
};

class collision
{
private:
    int mRight, mLeft, mTop, mBottom; //batas mobil player
    int mcRight, mcLeft, mcTop, mcBottom, mc2Right, mc2Left, mc2Top, mc2Bottom; //batas mobilcom
    int side=35, mobtop=15, mobbottom=120, mcomtop=10, mcombottom=115; //M/MO=Mobil Player dan MC=Mobil_Computer
public:
    int collisionutama(int kurang, int x, int y, int u, int v, int* kurangbaru, int* vbaru, int* batas)
    {
        mRight=x+side; mLeft=x-side; mTop=y-mobtop; mBottom=y+mobbottom; //menentukan batas collision mobil
        mcRight=u+side; mcLeft=u-side; mcTop=v-mcomtop; mcBottom=v+mcombottom; //menentukan batas collision mobilcom

        if(mTop<=mcBottom&&mBottom>=mcTop&&mRight>=mcLeft&&mLeft<=mcRight) //colission mobil dan mobilcom
        {
            y=650;
            v=0;
            kurang=kurang+20;
            *batas=kurang-20;
        }
        *vbaru=v;
        *kurangbaru=kurang;
        return y;
    }

    int collisionmusuh(int u, int v, int u2, int v2, int* ubaru, int* vbaru, int* u2baru, int* v2baru)
    {
        mcRight=u+side; mcLeft=u-side; mcTop=v-mcomtop; mcBottom=v+mcombottom; //menentukan batas collision mobilcom
        mc2Right=u2+side; mc2Left=u2-side; mc2Top=v2-mcomtop; mc2Bottom=v2+mcombottom; //menentukan batas collision mobilcom2

        if(mcTop<=mc2Bottom&&mcBottom>=mc2Top&&mcRight>=mc2Left&&mcLeft<=mc2Right) //colission mobilcom 1 dan 2
        {
            if(v>=v2) //geser kiri
            {
                v2=v2-15;
                if(u2<=300)
                {
                    u2=u2+10;
                }
                else
                {
                    u2=u2-10;
                }
            }
            else if(v2>v) //geser kanan
            {
                v=v-15;
                if(u>=700)
                {
                    u=u-10;
                }
                else
                {
                    u=u+10;
                }
            }
        }
        *ubaru=u;
        *vbaru=v;
        *u2baru=u2;
        *v2baru=v2;
    }
};

class fitur
{
public:
    void score(int skor)
    {
        char a[50];
        sprintf(a,"Score : %d", skor);
        settextstyle(BOLD_FONT,0,1);
        outtextxy(100,70,a);
    }

    void nyawa(int kurang)
    {
        setcolor(WHITE);
        rectangle(799,69,901,101);
        setfillstyle(SOLID_FILL,RED);
        bar(800,70,900-kurang,100);
        settextstyle(COMPLEX_FONT,0,1);
        outtextxy(820,67,"HP");
    }
    int pergerakanmusuh(int v)
    {
        return v=v+10;
    }
};

int main()
{
    initwindow(1000,1000,"CrossRoad");
    int highscore=0;
    std::ifstream loadfile; //load file highscore
    loadfile.open("highscore.txt");
    loadfile >> highscore;

    PlaySound(TEXT("lagu.wav"),NULL,SND_LOOP | SND_ASYNC);
    menu m;
    m.openmenu(highscore);
    for(;;)
    {
        if (GetAsyncKeyState(VK_LSHIFT))
        {
            cleardevice();
            m.buttonmenu(highscore);
        }
        if (GetAsyncKeyState(VK_TAB))
        {
            cleardevice();
            m.openmenu(highscore);
        }

        if (GetAsyncKeyState(VK_SPACE))
        {
            PlaySound(TEXT("suaragame.wav"),NULL,SND_LOOP | SND_ASYNC);
            break;
        }
    }
    mulai_lagi:

    int x=500,y=650, u=500,v=50, u2=300,v2=-150, u3=700,v3=-150, u4=400,v4=-150, u5=600,v5=-150; //lokasi awal mobil
    int b,i,j; //kelipatan skor menambah nyawa
    int kurangbaru,v1baru,ubaru,vbaru,u2baru,v2baru; //untuk class collision
    int detik=0, skor=0, kurang=0;
    int page=0;
    while(1)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        objek o;
        fitur f;

        if (GetAsyncKeyState(VK_RIGHT))
        {
            o.mobilplayer(x,y);
            x=x+20;
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            o.mobilplayer(x,y);
            x=x-20;
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            o.mobilplayer(x,y);
            y=y+15;
        }
        if (GetAsyncKeyState(VK_UP))
        {
            o.mobilplayer(x,y);
            y=y-15;
        }

        if(x>720) //batas kanan pemain
        {
            x=x-20;
        }
        if(x<280) //batas kiri pemain
        {
            x=x+20;
        }
        if(y>800) //batas bawah pemain
        {
            y=y-15;
        }
        if(y<0) //batas atas pemain
        {
            y=y+15;
        }

        if(v>800) //batas dan skor mobilcom 1
        {
            v=0;
            u=rand()%440+280;
            skor=skor+1;
            f.score(skor);
            j=skor; //untuk pembatas nyawa
        }
        if(v2>800) //batas dan skor mobilcom 2
        {
            v2=0;
            u2=rand()%440+280;
            skor=skor+1;
            f.score(skor);
            j=skor; //untuk pembatas nyawa
        }
         if(v3>800) //batas dan skor mobilcom 3
        {
            v3=0;
            u3=rand()%440+280;
            skor=skor+1;
            f.score(skor);
            j=skor; //untuk pembatas nyawa
        }
        if(v4>800) //batas dan skor mobilcom 4
        {
            v4=0;
            u4=rand()%440+280;
            skor=skor+1;
            f.score(skor);
            j=skor; //untuk pembatas nyawa
        }
        if(v5>800) //batas dan skor mobilcom 5
        {
            v5=0;
            u5=rand()%440+280;
            skor=skor+1;
            f.score(skor);
            j=skor; //untuk pembatas nyawa
        }

        collision c;

        //collision mobil utama
        y=c.collisionutama(kurang,x,y,u,v,&kurangbaru,&v1baru, &b); //colission mobil dan mobilcom
        kurang=kurangbaru; v=v1baru;
        y=c.collisionutama(kurang,x,y,u2,v2,&kurangbaru,&v1baru, &b); //colission mobil dan mobilcom 2
        kurang=kurangbaru; v2=v1baru;
        y=c.collisionutama(kurang,x,y,u3,v3,&kurangbaru,&v1baru, &b); //colission mobil dan mobilcom 3
        kurang=kurangbaru; v3=v1baru;
        y=c.collisionutama(kurang,x,y,u4,v4,&kurangbaru,&v1baru, &b); //colission mobil dan mobilcom 4
        kurang=kurangbaru; v4=v1baru;
        y=c.collisionutama(kurang,x,y,u5,v5,&kurangbaru,&v1baru, &b); //colission mobil dan mobilcom 5
        kurang=kurangbaru; v5=v1baru;

        //collision musuh
        c.collisionmusuh(u,v,u2,v2,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 1 dan 2
        u=ubaru; v=vbaru; u2=u2baru; v2=v2baru;

        c.collisionmusuh(u,v,u3,v3,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 1 dan 3
        u=ubaru; v=vbaru; u3=u2baru; v3=v2baru;
        c.collisionmusuh(u2,v2,u3,v3,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 2 dan 3
        u2=ubaru; v2=vbaru; u3=u2baru; v3=v2baru;

        c.collisionmusuh(u,v,u4,v4,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 1 dan 4
        u=ubaru; v=vbaru; u4=u2baru; v4=v2baru;
        c.collisionmusuh(u2,v2,u4,v4,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 2 dan 4
        u2=ubaru; v2=vbaru; u4=u2baru; v4=v2baru;
        c.collisionmusuh(u3,v3,u4,v4,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 3 dan 4
        u3=ubaru; v3=vbaru; u4=u2baru; v4=v2baru;

        c.collisionmusuh(u,v,u5,v5,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 1 dan 5
        u=ubaru; v=vbaru; u5=u2baru; v5=v2baru;
        c.collisionmusuh(u2,v2,u5,v5,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 2 dan 5
        u2=ubaru; v2=vbaru; u5=u2baru; v5=v2baru;
        c.collisionmusuh(u3,v3,u5,v5,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 3 dan 5
        u3=ubaru; v3=vbaru; u5=u2baru; v5=v2baru;
        c.collisionmusuh(u4,v4,u5,v5,&ubaru,&vbaru,&u2baru,&v2baru); //collision mobilcom 4 dan 5
        u4=ubaru; v4=vbaru; u5=u2baru; v5=v2baru;

        for(i=10;i<=500;i+=10) //penambahan nyawa untuk skor
        {
            j+1;
            if(j==i)
            {
                if(b<=kurang) //b itu batas pertambahannya agar pada level selanjutnya tidak bertambah loncat
                {
                    kurang=kurang-20;
                }
            }
            else if(kurang<0)
            {
                kurang=0;
            }
        }

        for(i=11;i<=500;i+=10) // agar nyawa tidak nambah level terus pada skor tertentu
        {
            j=j-1;
        }

        if(kurang>=100)
        {
            kurang=100;
        }

        detik++;
        v=f.pergerakanmusuh(v);
        if(detik>=25){
            v2=f.pergerakanmusuh(v2);}
        if(detik>=64){
            v3=f.pergerakanmusuh(v3);}
        if(detik>=144){
            v4=f.pergerakanmusuh(v4); detik=145;}
        if(skor>=20){
            v5=f.pergerakanmusuh(v5);}

        cleardevice();
        o.jalanan();
        o.sisijalan();
        f.score(skor);
        f.nyawa(kurang);
        o.mobilcom(u,v);
        o.mobilcom(u2,v2);
        o.mobilcom(u3,v3);
        o.mobilcom(u4,v4);
        o.mobilcom(u5,v5);
        o.mobilplayer(x,y);
        page=1-page;
        delay(50);
        if(kurang==100)
        {
            u=50; v=100,u2=50; v2=300, u3=50; v3=500, u4=150, v4=100, u5=150; v5=300;
            cleardevice();
            if(skor>highscore) //save highscore
            {
                std::ofstream savefile;
                savefile.open("highscore.txt");
                savefile << skor;
                savefile.close();
                highscore=skor;
            }
            m.closemenu(skor,highscore);
            if (GetAsyncKeyState(VK_SPACE))
            {
                closegraph();
            }
            else if (GetAsyncKeyState(VK_LSHIFT))
            {
                PlaySound(TEXT("suaragame.wav"),NULL,SND_LOOP | SND_ASYNC);
                goto mulai_lagi;
            }
        }
    }
}
