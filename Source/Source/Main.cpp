#include <QApplication>
#include <MainWindow.h>

int main( int p_Argc, char **p_ppArgv )
{
	QApplication Application( p_Argc, p_ppArgv );

    MainWindow QtWindow;

    QtWindow.show( );

	return Application.exec( );
}

