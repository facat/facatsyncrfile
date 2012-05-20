#ifndef FACATSYNCRFILE_H
#define FACATSYNCRFILE_H

#include "ui_facatsyncrfile.h"

class Facatsyncrfile : public QMainWindow, private Ui::Facatsyncrfile
{
    Q_OBJECT
    
public:
    explicit Facatsyncrfile(QWidget *parent = 0);
};

#endif // FACATSYNCRFILE_H
