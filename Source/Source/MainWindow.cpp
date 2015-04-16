#include <MainWindow.h>
#include <GitVersion.h>
#include <QAction>
#include <QMenuBar>

MainWindow::MainWindow( )
{
    this->CreateActions( );
    this->CreateMenus( );

    char Title[ 1024 ];

    memset( Title, '\0', sizeof( Title ) );
    sprintf( Title, "ZED Texture Tool [%s] %s //Build date: %s%s",
        GIT_BUILD_VERSION, GIT_COMMITHASH, GIT_COMMITTERDATE,
#if defined BUILD_DEBUG
           " [DEBUG]"
#else
            ""
#endif
        );

    setWindowTitle( tr( Title ) );
    setMinimumSize( 1024, 768 );
}

MainWindow::~MainWindow( )
{
}

void MainWindow::CreateActions( )
{
    m_pNewTexture = new QAction( tr( "&New Texture" ), this );
    m_pQuitAction = new QAction( tr( "&Quit" ), this );
    m_pQuitAction->setShortcuts( QKeySequence::Quit );

    connect( m_pNewTexture, SIGNAL( triggered( ) ), this,
        SLOT( NewTexture( ) ) );
    connect( m_pQuitAction, SIGNAL( triggered( ) ), this, SLOT( close( ) ) );
}

void MainWindow::CreateMenus( )
{
    m_pFileMenu = menuBar( )->addMenu( tr( "&File" ) );
    m_pFileMenu->addAction( m_pNewTexture );
    m_pFileMenu->addAction( m_pQuitAction );
}

void MainWindow::CreateWidgets( )
{
}
