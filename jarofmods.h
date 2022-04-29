#ifndef JAROFMODS_H
#define JAROFMODS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class JarOfMods; }
QT_END_NAMESPACE

class JarOfMods : public QMainWindow
{
    Q_OBJECT

public:
    JarOfMods(QWidget *parent = nullptr);
    ~JarOfMods();

private slots:
    void handleRemoveModButton();
    void handleAddModButton();
    void handleDeleteGroupButton();
    void handleCreateGroupButton();
    void handleSelectModFolderButton();
private:
    Ui::JarOfMods *ui;
};
#endif // JAROFMODS_H
