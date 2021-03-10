import QtQuick 2.12
import QtQuick.Window 2.2
import QtQuick.Controls 2.12
import ControllerIdentification 1.0

Page {
    id: pageIdentification
    background: null

    Grid {
        columns: 1
        rows: 5
        anchors.fill: parent
        rowSpacing: 10

        Rectangle {
            id: recLogo
            color: "#00ffffff"
            width: parent.width
            height: parent.height / 2.7

            Image {
                id: logoIdentification
                anchors.centerIn: parent
                width: 170
                height: 130
                clip: true
                source: "../../../../image/image/logo.png"
            }
        }

        Rectangle {
            width: parent.width
            color: "#00ffffff"
            height: 40

            TextField {
                anchors.centerIn: parent
                id: champPseudoConnexion
                width: parent.width / 1.3
                height: 40
                selectByMouse: true
                maximumLength: 15
                placeholderText: qsTr("PSEUDO")
                background: Rectangle {
                    color: "#EBEBEB"
                    anchors.fill: parent
                    radius: 7
                }
            }
        }

        Rectangle {
            width: parent.width
            color: "#00ffffff"
            height: 40

            TextField {
                anchors.centerIn: parent
                id: champMdpConnexion
                width: parent.width / 1.3
                height: 40
                echoMode: "Password"
                placeholderText: qsTr("MDP")
                background: Rectangle {
                    color: "#EBEBEB"
                    anchors.fill: parent
                    radius: 7
                }
            }
        }

        Rectangle {
            width: parent.width
            color: "#00ffffff"
            height: 100

            Button {
                id: boutonConnexion
                width: parent.width / 1.5
                height: 40
                anchors.centerIn: parent
                font.pixelSize: 20
                font.bold: true

                Rectangle {
                    id: recChargement
                    width: animationChargement.width; height: animationChargement.height
                    color: "transparent"
                    anchors.centerIn: parent
                    state: "normal"
                    visible: false
                    AnimatedImage { id: animationChargement; source: "../../../../image/image/chargement.gif" }

                    states: [

                        State {
                            name: "chargement"
                            PropertyChanges {target: recChargement; visible: true;}
                            PropertyChanges {target: boutonConnexion; text: "";}
                    },
                        State {
                            name: "normal"
                            PropertyChanges {target: recChargement; visible: false}
                            PropertyChanges {target: boutonConnexion; text: "<font color='#EBEBEB'> CONNEXION </font>";}
                        }
                    ]

                }

                text: "<font color='#EBEBEB'> CONNEXION </font>"
                onClicked: {
                    if((champPseudoConnexion.length < 3) || (champMdpConnexion.length < 2))
                        console.log("Un des champs est incorrecte.")
                    else {
                        //console.log(recChargement.state)
                        recChargement.state = "chargement"
                        //console.log(recChargement.state)
                        presenterIdentification.rechercherCompte(champPseudoConnexion.text, champMdpConnexion.text)
                    }
                }
                background: Rectangle {
                    id: test
                    color: "#6B6B6B"
                    opacity: 0.9
                    radius: 10
                }



            }
        }

        Rectangle {
            width: parent.width
            color: "#00ffffff"
            height: 40


            Button {
                id: boutonConnexionADMIN
                width: parent.width / 1.5
                height: 40
                anchors.centerIn: parent
                font.pixelSize: 20
                font.bold: true
                text: "<font color='#EBEBEB'> ADMIN </font>"

                Rectangle {
                    id: recChargementAdmin
                    width: animationChargementAdmin.width; height: animationChargementAdmin.height
                    color: "transparent"
                    anchors.centerIn: parent
                    state: "normal"
                    visible: false
                    AnimatedImage { id: animationChargementAdmin; source: "../../../../image/image/chargement.gif" }

                    states: [

                        State {
                            name: "chargement"
                            PropertyChanges {target: recChargementAdmin; visible: true;}
                            PropertyChanges {target: boutonConnexionADMIN; text: "";}
                    },
                        State {
                            name: "normal"
                            PropertyChanges {target: recChargementAdmin; visible: false}
                            PropertyChanges {target: boutonConnexionADMIN; text: "<font color='#EBEBEB'> ADMIN </font>";}
                        }
                    ]

                }

                onClicked: {
                    recChargementAdmin.state = "chargement"
                    presenterIdentification.rechercherCompte("admin", "Azerty*123")
                }
                background: Rectangle {
                    color: "#970000"
                    opacity: 0.9
                    radius: 10
                }
            }
        }

    }



    Component.onCompleted: {
        presenterIdentification.getMonController().onPostConnexion.connect(gestionPostConnexion)
        if(presenterVisualiserTempsVitesse.getControllerVisualiserTempsVitesse().getEtatInscription() != "inscrit")
            stack.push("Inscription.ui.qml", StackView.Immediate)
    }

    function gestionPostConnexion(valeurReussite) {
        if (valeurReussite) {
            toolBar.state = "normal"
            stack.pop()
        } else {
            console.log("Erreur lors de la connexion")
            recChargement.state = "normal"
        }
    }
}
