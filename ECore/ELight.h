#pragma once

#include "ECommon.h"
#include "EVector.h"

namespace E3D
{
	enum  LIGHT_TYPE
	{
		LIGHT_AMBLENT = 0,			// ������
		LIGHT_DIRECTION = 1,		// ƽ�й�
		LIGHT_POINT = 2,			// ��ƹ�

	};


	struct ELight
	{
		EInt id;						// �ƹ�ķ���id��ȫ��Ψһ
		EBool lightOn;					// �ƹ��Ƿ�����

		LIGHT_TYPE lightType;			// �ƹ�����

		EFloat power;					// �ƹ��ǿ��,Ĭ��Ϊ1.0f
		EFloat shadowFactor;			// �ƹⱳ���ǿ��,Ĭ��Ϊ0.05f
		EColor ambient;					// �ƹ�Ļ���ɫ��������ʹ�ã�
		EColor diffuse;					// �ƹ���������ɫ
		EColor specular;				// �ƹ�߹���ɫ


		EVector4D position;				// �ƹ����������λ��
		EVector4D direction;			// ��Դ����,��ƹ���Ч
		EVector4D transPosition;		// �ƹ����������ϵλ��
		EVector4D transDirection;		// ���������ϵ��Դ����,���Դ��Ч

		EFloat kc, kl, kq;				// ˥������

		EFloat spot_inner;				// �۹����׶��
		EFloat spot_outer;				// �۹����׶��
		EFloat spot_pf;					// �۹��ָ������

		ELight(EInt lightId, LIGHT_TYPE type);

	};
	
	// ���ƹ���
	#define MAX_LIGHTS 8

	// ȫ�ֵƹ����
	extern std::vector<ELight*> *Glights;

	typedef std::vector<ELight*>::iterator LightItr;

	//����һ���µĵƹ�,�����ɹ����صƹ�ID(ȫ��Ψһ),����ʧ���򷵻�-1
	//����������Դ��Ϊ MAX_LIGHTS
	extern EInt CreateLight(LIGHT_TYPE lightType);
	extern EInt GetLight(EInt id);
	extern EInt GetLightSize();

	//���ȫ����Դ
	extern void DestroyAllLight();

}
