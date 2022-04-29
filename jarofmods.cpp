#include "jarofmods.h"
#include "ui_jarofmods.h"

#include <set>

JarOfMods::JarOfMods(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JarOfMods)
{
    ui->setupUi(this);

    connect(ui->addModButton, &QPushButton::released, this, &JarOfMods::handleAddModButton);
    connect(ui->removeModButton, &QPushButton::released, this, &JarOfMods::handleRemoveModButton);
    connect(ui->newGroupButton, &QPushButton::released, this, &JarOfMods::handleCreateGroupButton);
    connect(ui->deleteGroupButton, &QPushButton::released, this, &JarOfMods::handleDeleteGroupButton);
    connect(ui->selectModsFolderButton, &QPushButton::released, this, &JarOfMods::handleSelectModFolderButton);
}

JarOfMods::~JarOfMods()
{
    delete ui;
}

void JarOfMods::handleRemoveModButton()
{

}

void JarOfMods::handleAddModButton()
{

}

void JarOfMods::handleDeleteGroupButton()
{

}

void JarOfMods::handleCreateGroupButton()
{

}

void JarOfMods::handleSelectModFolderButton()
{

}





