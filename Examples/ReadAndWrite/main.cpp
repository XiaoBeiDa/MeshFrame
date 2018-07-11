#include <MeshFrame/core/Mesh/MeshCoreHeaders.h>

typedef MeshLib::CBaseMesh<MeshLib::CVertex, MeshLib::CEdge, MeshLib::CFace, MeshLib::CHalfEdge> CMesh;

int main() {
	CMesh mesh;
	mesh.read_obj("face.obj");

	mesh.write_obj("face1.obj");
}