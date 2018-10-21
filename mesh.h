#ifndef MESH_H
#define MESH_H
#include <QVector2D>
#include <QVector3D>

class Mesh
{
public:
    Mesh();
private:
    int *trianglesID;
    QVector3D *positions;
};

#endif // MESH_H
