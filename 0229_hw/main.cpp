#include <GL/glut.h> ///��18��d�U�A�ϥ�GLUT�~��

void display()
{
    glColor3f(226/255.0,128/255.0,79/255.0);
    glBegin(GL_POLYGON);///�}�l�e(�h�䫬)
        glVertex2f((23-200)/200.0,-(23-200)/200.0);
        glVertex2f((51-200)/200.0,-(19-200)/200.0);
        glVertex2f((50-200)/200.0,-(67-200)/200.0);
    glEnd();///�����e

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

    /*glColor3f(197/255.0,122/255.0,83/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((96-200)/200.0,-(29-200)/200.0);
        glVertex2f((132-200)/200.0,-(89-200)/200.0);
        glVertex2f((145-200)/200.0,-(55-200)/200.0);
    glEnd();

    glColor3f(197/255.0,122/255.0,83/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((96-200)/200.0,-(29-200)/200.0);
        glVertex2f((132-200)/200.0,-(89-200)/200.0);
        glVertex2f((145-200)/200.0,-(55-200)/200.0);
    glEnd();

    glColor3f(197/255.0,122/255.0,83/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((96-200)/200.0,-(29-200)/200.0);
        glVertex2f((132-200)/200.0,-(89-200)/200.0);
        glVertex2f((145-200)/200.0,-(55-200)/200.0);
    glEnd();
    */

    glutSwapBuffers();
}
int main(int argc, char *argv[])///��138��,main()�禡
{
    glutInit(&argc, argv);///140,�}��GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��,�]�w��ܼҦ�
    glutCreateWindow("week02_color_teapot");///145��,�}�@��GLUT����
    glutDisplayFunc(display);///148��,�n��display()�禡�ӵe��

    glutMainLoop();///174��,�D�n���j��,�b�o�̤@���B�@,������
}
