//
// Created by vadim on 13.03.24.
//

#ifndef OPENYAPLAYER_MAINFORM_HPP
#define OPENYAPLAYER_MAINFORM_HPP

#include <QQmlApplicationEngine>
#include <QtQml>

namespace ui {

class MainForm final : public QObject {
Q_OBJECT
public:
	MainForm(QObject *parent = nullptr);
	~MainForm();

	void show();

private:
	QQmlApplicationEngine *qml_app_engine_;
	QObject *qml_app_root_object_;

};

}

#endif //OPENYAPLAYER_MAINFORM_HPP
