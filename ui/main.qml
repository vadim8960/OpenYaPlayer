import QtQuick 2.12
import QtQuick.Window 2.12

import "components"

Window {
    id: root
    width: 640
    height: 480
    visible: true
    title: "OpenYaProject"

    Rectangle {
        id: background
        anchors.fill: parent


        DefaultButton {
            id: buttonLogin
            name: "Login"
            anchors.top: background.top
            anchors.right: background.right

            onClicked: {
                console.log("Pressed")
            }
        }
    }
}
