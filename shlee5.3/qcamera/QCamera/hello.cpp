// ======================================================================
//  main.cpp
// ======================================================================
//                   This file is a part of the book 
//             "Qt 5.3 Professional programming with C++"
// ======================================================================
//  Copyright (c) 2014 by Max Schlee
//
//  Email : Max.Schlee@neonway.com
//  Blog  : http://www.maxschlee.com
//
//  Social Networks
//  ---------------
//  FaceBook : http://www.facebook.com/mschlee
//  Twitter  : http://twitter.com/Max_Schlee
//  2Look.me : http://2look.me/NW100003
//  Xing     : http://www.xing.com/profile/Max_Schlee
//  vk.com   : https://vk.com/max.schlee
// ======================================================================

#include <QCoreApplication>
#include <QCamera>
#include <QCameraInfo>
#include <QVideoFrame>
#include <QCameraViewfinderSettings>

int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);
    qDebug()<<"After app";
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    foreach( const QCameraInfo &cameraInfo, cameras )
    {
	qDebug()<<cameraInfo.deviceName();
        QCamera qCamera( cameraInfo );
	qDebug()<<qCamera.captureMode();
        QList<QVideoFrame::PixelFormat> pf = qCamera.supportedViewfinderPixelFormats();
	foreach( const QVideoFrame::PixelFormat& pixelFormat, pf )
        {
	    qDebug()<<"PixelFormat: "<<pixelFormat;
        }
    }
//    return app.exec();
}
