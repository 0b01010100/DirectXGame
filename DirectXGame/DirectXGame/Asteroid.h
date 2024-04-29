#pragma once
#include "Rect.h"

class Asteroid {
public:
	Asteroid(); // �R���X�g���N�^
	~Asteroid(); // �f�X�g���N�^

	// ���̑��̃����o�֐��⃁���o�ϐ���ǉ�����
	void move(); // �ړ��֐�
	Rect getRect() const { return m_rect; } // Asteroid �� Rect ���擾����֐�

	// Spaceship �Ƃ̏Փ˔�����s���֐�
	bool checkCollision(const Rect& spaceshipRect) const;

	// Asteroid �� Spaceship �ɓ��������ۂɃ_���[�W��^����֐�
	void hitSpaceship();

	// Asteroid ���j�󂳂ꂽ���ǂ�����Ԃ��֐�
	bool isDestroyed() const { return m_isDestroyed; }
private:
	// Asteroid �N���X�̃����o�ϐ�
	Rect m_rect; // Asteroid �� Rect
	bool m_isDestroyed; // Asteroid ���j�󂳂ꂽ���ǂ����������t���O
};