#include "Asteroid.h"

Asteroid::Asteroid() {
	// Asteroid �̏���������
	// �����ł� Rect �̏������Ȃǂ��s��
	m_isDestroyed = false;
}

Asteroid::~Asteroid() {
	// Asteroid �̏I������
	// �����ł͕K�v�Ȃ�΃��\�[�X�̉���Ȃǂ��s��
}

void Asteroid::move() {
	// Asteroid �̈ړ�����
	// �����ł� Rect ���ړ�������Ȃǂ̏������s��
}

bool Asteroid::checkCollision(const Rect& spaceshipRect) const {
	// Spaceship �Ƃ̏Փ˔�����s��
	// �����ł� Asteroid �� Spaceship �� Rect ���d�Ȃ��Ă��邩�ǂ����𔻒肷��
	// �d�Ȃ��Ă���� true ��Ԃ��A�����łȂ���� false ��Ԃ�
	return m_rect.left < spaceshipRect.left + spaceshipRect.width &&
		m_rect.left + m_rect.width > spaceshipRect.left &&
		m_rect.top < spaceshipRect.top + spaceshipRect.height &&
		m_rect.top + m_rect.height > spaceshipRect.top;
}

void Asteroid::hitSpaceship() {
	// Asteroid �� Spaceship �ɓ��������ۂ̏���
	// �����ł̓_���[�W��^����Ȃǂ̏������s��
	m_isDestroyed = true; // Asteroid ��j�󂷂�
}