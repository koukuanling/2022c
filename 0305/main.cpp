#include <GL/glut.h> ///第18行留下，使用GLUT外掛

void display()
{
    glColor3f(226/255.0,128/255.0,79/255.0);
    glBegin(GL_POLYGON);///開始畫(多邊型)
        glVertex2f((23-200)/200.0,-(23-200)/200.0);
        glVertex2f((51-200)/200.0,-(19-200)/200.0);
        glVertex2f((50-200)/200.0,-(67-200)/200.0);
    glEnd();///結束畫

    glColor3f(196/255.0,105/255.0,56/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((51-200)/200.0,-(19-200)/200.0);
        glVertex2f((50-200)/200.0,-(67-200)/200.0);
        glVertex2f((96-200)/200.0,-(29-200)/200.0);
    glEnd();

    glColor3f(147/255.0,77/255.0,52/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((50-200)/200.0,-(67-200)/200.0);
        glVertex2f((96-200)/200.0,-(29-200)/200.0);
        glVertex2f((73-200)/200.0,-(98-200)/200.0);
    glEnd();

    glColor3f(158/255.0,90/255.0,67/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((96-200)/200.0,-(29-200)/200.0);
        glVertex2f((73-200)/200.0,-(98-200)/200.0);
        glVertex2f((132-200)/200.0,-(89-200)/200.0);
    glEnd();

    glColor3f(197/255.0,122/255.0,83/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((96-200)/200.0,-(29-200)/200.0);
        glVertex2f((132-200)/200.0,-(89-200)/200.0);
        glVertex2f((145-200)/200.0,-(55-200)/200.0);
    glEnd();

    glColor3f(198/255.0,82/255.0,26/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((132-200)/200.0,-(89-200)/200.0);
        glVertex2f((145-200)/200.0,-(55-200)/200.0);
        glVertex2f((158-200)/200.0,-(106-200)/200.0);
    glEnd();

    glColor3f(202/255.0,68/255.0,17/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((145-200)/200.0,-(55-200)/200.0);
        glVertex2f((158-200)/200.0,-(106-200)/200.0);
        glVertex2f((168-200)/200.0,-(49-200)/200.0);
    glEnd();

    glColor3f(208/255.0,110/255.0,35/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((158-200)/200.0,-(106-200)/200.0);
        glVertex2f((168-200)/200.0,-(49-200)/200.0);
        glVertex2f((210-200)/200.0,-(75-200)/200.0);
    glEnd();

    glColor3f(214/255.0,109/255.0,28/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((168-200)/200.0,-(49-200)/200.0);
        glVertex2f((210-200)/200.0,-(75-200)/200.0);
        glVertex2f((198-200)/200.0,-(50-200)/200.0);
    glEnd();

    glColor3f(215/255.0,101/255.0,20/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((168-200)/200.0,-(49-200)/200.0);
        glVertex2f((198-200)/200.0,-(50-200)/200.0);
        glVertex2f((186-200)/200.0,-(44-200)/200.0);
    glEnd();

    glColor3f(232/255.0,130/255.0,42/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((198-200)/200.0,-(50-200)/200.0);
        glVertex2f((186-200)/200.0,-(44-200)/200.0);
        glVertex2f((213-200)/200.0,-(36-200)/200.0);
    glEnd();

    glColor3f(202/255.0,91/255.0,21/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((198-200)/200.0,-(50-200)/200.0);
        glVertex2f((210-200)/200.0,-(75-200)/200.0);
        glVertex2f((216-200)/200.0,-(59-200)/200.0);
    glEnd();

    glColor3f(229/255.0,115/255.0,27/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((198-200)/200.0,-(50-200)/200.0);
        glVertex2f((213-200)/200.0,-(36-200)/200.0);
        glVertex2f((216-200)/200.0,-(59-200)/200.0);
    glEnd();

    glColor3f(229/255.0,115/255.0,27/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((230-200)/200.0,-(37-200)/200.0);
        glVertex2f((213-200)/200.0,-(36-200)/200.0);
        glVertex2f((216-200)/200.0,-(59-200)/200.0);
    glEnd();

    glColor3f(234/255.0,135/255.0,36/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((230-200)/200.0,-(37-200)/200.0);
        glVertex2f((244-200)/200.0,-(53-200)/200.0);
        glVertex2f((216-200)/200.0,-(59-200)/200.0);
    glEnd();

    glutSwapBuffers();
}
int main(int argc, char *argv[])///第138行,main()函式
{
    glutInit(&argc, argv);///140,開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行,設定顯示模式
    glutCreateWindow("week02_color_teapot");///145行,開一個GLUT視窗
    glutDisplayFunc(display);///148行,要用display()函式來畫圖

    glutMainLoop();///174行,主要的迴圈,在這裡一直運作,不結束
}
