import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Text{
        text: qsTr("Hello World")
        anchors.centerIn: parent
        font.pixelSize: 40
        color: "blue"
        font.bold: true

        MouseArea{
            anchors.fill: parent
            onClicked: Qt.quit()
        }
    }
}
