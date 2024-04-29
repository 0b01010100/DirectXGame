#include "Projectile.h"
#include "MeshManager.h"
#include "RenderSystem.h"

Projectile::Projectile(const Vector3D& position, const Vector3D& direction, float speed)
	: m_position(position), m_direction(direction), m_speed(speed) {
	// ���b�V���̃��[�h�i��Fsphere.obj�j
	m_mesh = MeshManager::getInstance()->createMeshFromFile(L"Assets//Meshes//sphere.obj");
	if (!m_mesh) {
		throw std::exception("Failed to load mesh for projectile.");
	}
}

Projectile::~Projectile() {}

void Projectile::update(float deltaTime) {
	// ���˕��̈ړ�����
	m_position = m_position + (m_direction * m_speed * deltaTime);
}

void Projectile::render() {
	// ���˕��̕`��
	if (m_mesh) {
		// ���b�V���̕`��
		RenderSystem::get()->getImmediateDeviceContext()->drawIndexed(m_mesh->getIndexCount(), 0, 0);
	}
}
