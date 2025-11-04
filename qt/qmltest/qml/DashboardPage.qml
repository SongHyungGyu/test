import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import qmltest 1.0

Rectangle {
    id: dashboard
    width: parent ? parent.width : 1000
    height: parent ? parent.height : 600
    color: Theme.colorBgDark   // ✅ 다크 배경 유지

    property int accident: 1    // 🔸 사고 상태 변수 (0: 정상, 1 이상: 사고)

    // 🌡💧 온습도 종합 점수 게이지
    GaugeView {
        label: "온습도 점수"
        value: t_point
        from: 0
        to: 100
        unit: "점"

        // ✅ Loader 안에서도 확실히 반영되는 방식
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 50   // ← 왼쪽 메뉴에서 떨어진 거리
        anchors.topMargin: 20    // ← 위쪽에서 떨어진 거리
    }
    GaugeView {
        label: "게이지2"
        value: 50
        from: 0
        to: 100
        unit: "점"

        // ✅ Loader 안에서도 확실히 반영되는 방식
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 300   // ← 왼쪽 메뉴에서 떨어진 거리
        anchors.topMargin: 20    // ← 위쪽에서 떨어진 거리
    }
    //미세먼지 농도
    GaugeView {
        label: "미세먼지 농도"
        value: 90
        from: 0
        to: 100
        unit: "㎍/㎥"

        // ✅ Loader 안에서도 확실히 반영되는 방식
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 550   // ← 왼쪽 메뉴에서 떨어진 거리
        anchors.topMargin: 20    // ← 위쪽에서 떨어진 거리
    }

    Text {
        text: "⚠ A구역 사고 발생!"
        color: "white"
        font.bold: true
        font.pixelSize: 30
        x: 300
        y: 400
        visible: accident
    }
}
