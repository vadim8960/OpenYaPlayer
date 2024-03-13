import QtQuick 2.12

import "colors.js" as Colors

Item
{
    id: root

    property string name: ""
    property int fontSize: 20

    signal clicked();

    width: text.width + 16
    implicitHeight: 32

    Rectangle {
        id: background

        anchors.fill: parent
        color: mouseArea.pressed ? Colors.ButtonColorPressed : Colors.ButtonColorReleased
    }

    Text {
        id: text

        anchors.centerIn: parent
        text: root.name
        font.bold: true
        font.pixelSize: fontSize
        color: mouseArea.pressed ? Colors.ButtonColor : Colors.ButtonTextColor
    }

    MouseArea {
        id: mouseArea

        anchors.fill: parent
        onClicked: function() {
            root.clicked();
        }
    }
}
