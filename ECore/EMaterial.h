#pragma once
#include "ECommon.h"
#include<map>
#include "EGraphics.h"

namespace E3D
{
	struct  EMaterial
	{
		EString name;
		EColor ambient;			// ����ɫ
		EColor diffuse;			// ��������ɫ
		EColor specular;		// ���淴��

		EBitmap *bitmap;

		EMaterial();
		~EMaterial();
		inline bool uesTexture() { return bitmap && bitmap->isValid; }
		EColor getPixel(EFloat u, EFloat v);

	};

	typedef std::map<EString, EMaterial*>::iterator Materiallter;
	extern std::map<EString, EMaterial*>*GMaterial;

	extern EMaterial *GetMaterial(const EString & name);
	extern bool SetMaterial(const EString &name, EMaterial *material);
	extern bool DestroyMaterial(const EString &name);
	extern void DestroyAllMaterial();

	//�������ʽű�����ȡ�������ʺ���ͼ
	//���ʽű������ģ��������ͬ,��ogreHead.mesh ogreHead.material
	extern void ParseMaterialScript(const EString & scriptName);
}



