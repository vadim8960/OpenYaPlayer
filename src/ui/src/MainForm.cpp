//
// Created by vadim on 13.03.24.
//

#include <ui/MainForm.hpp>
#include <QDebug>

namespace ui {

MainForm::MainForm(QObject *parent) : QObject(parent) {

	qml_app_engine_ = new QQmlApplicationEngine;
//	filesystemmodel = new FileSystemModel(qml_app_engine_);
////    model->setRootPath(QDir::currentPath());
//
//	qmlRegisterUncreatableType<FileSystemModel>("FileSystemModel", 1, 0,
//												"FileSystemModel",
//												"Cannot create a FileSystemModel instance.");
//	qmlRegisterType<FileHandler>("FileHandler", 1, 0, "FileHandler");
//	qmlRegisterType<Runner>("Runner", 1, 0, "Runner");
}

MainForm::~MainForm() {
	delete qml_app_engine_;
}

void MainForm::show() {
//    filesystemmodel->setRootPath("");
//	filesystemmodel->setResolveSymlinks(true);
//	qml_app_engine_->rootContext()->
//			setContextProperty("fileSystemModel", filesystemmodel);
//    qml_app_engine_->rootContext()->
//            setContextProperty("rootPathIndex",
//                               filesystemmodel->index(filesystemmodel->rootPath()));
	qml_app_engine_->load(QUrl(QStringLiteral("qrc:/qml/ui/main.qml")));
	if (qml_app_engine_->rootObjects().isEmpty()) {
		emit qml_app_engine_->exit(-1);
	}
}

}
