#include <QGuiApplication>

#include <ui/MainForm.hpp>

int main(int argc, char *argv[]) {
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

	QGuiApplication app(argc, argv);

	ui::MainForm main_form;
	main_form.show();

	return app.exec();
}
