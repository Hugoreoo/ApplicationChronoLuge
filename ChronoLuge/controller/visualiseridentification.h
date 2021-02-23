#ifndef VISUALISERIDENTIFICATION_H
#define VISUALISERIDENTIFICATION_H

#include <QObject>

#include "boundary/presenter/presenteridentification.h"
#include "boundary/data/ComHTTP/comhttp.h"

#include "entity/utilisateur.h"

class VisualiserIdentification : public QObject
{
    Q_OBJECT
public:

    // Constructeur
        explicit VisualiserIdentification(PresenterIdentification *monPresenter, ComHTTP *communicationHTTP, QObject *parent = nullptr);

    // Méthodes
        int getIdUtilisateur() { return 1/*monUtilisateur->getIdUtilisateur()*/; }

        void setStatistiques(int nmbrDescente, double vitesseMoy, double vitesseMin, double vitesseMax, QString tempsMoy, QString tempsMin, QString tempsMax) {
            monUtilisateur->setStatistiques(new Statistiques(nmbrDescente, vitesseMoy, vitesseMin, vitesseMax, tempsMoy, tempsMin, tempsMax));
        }

private:

    // Attributs

        // Presenter
            PresenterIdentification *monPresenter;

        // Entity
            Utilisateur *monUtilisateur;

        // Data
            ComHTTP *communicationHTTP;

signals:

};

#endif // VISUALISERIDENTIFICATION_H
