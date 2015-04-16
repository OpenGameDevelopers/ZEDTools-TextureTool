#ifndef __ZEDTOOL_TEXTURETOOL_MAINWINDOW_H__
#define __ZEDTOOL_TEXTURETOOL_MAINWINDOW_H__

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow( );
    ~MainWindow( );

private:
    void CreateActions( );
    void CreateMenus( );
    void CreateWidgets( );

    QMenu   *m_pFileMenu;
    QAction *m_pNewTexture;
    QAction *m_pQuitAction;
};

#endif // __ZEDTOOL_TEXTURETOOL_MAINWINDOW_H__

