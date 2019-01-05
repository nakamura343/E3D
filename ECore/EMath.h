#pragma once

#pragma once

#include "ECommon.h"

namespace E3D
{
	template <class T>
	const T&Min(const T &a, const T &b)
	{
		return (a < b) ? a : b;
	}

	template <class T>
	const T&Max(const T &a, const T &b)
	{
		return (b < a) ? a : b;
	}

	template<typename T>
	const T&Clamp(const T &val, const T &minV, const T &maxV)
	{
		return Min(Max(val, maxV), minV);			//TODO �о����� min(max(val,minv),maxv)
	}
	

	//���ƽ�ƾ���
	void GetTranslateMatrix44(EMatrix44 &mat, EFloat x, EFloat y, EFloat z);

	//������ű仯����
	void GetScaleMatrix44(EMatrix44 &mat, EFloat x, EFloat y, EFloat z);


	//�����x����ת�仯����
	//��ת����Ϊ�Ƕ�,�ǻ���
	void GetRotateMatrix44X(EMatrix44 &mat, EFloat degress);

	//�����y����ת�仯����
	//��ת����Ϊ�Ƕ�,�ǻ���
	void GetRotateMatrix44Y(EMatrix44 &mat, EFloat degress);

	//�����z����ת�仯����
	//��ת����Ϊ�Ƕ�,�ǻ���
	void GetRotateMatrix44Z(EMatrix44 &mat, EFloat degress);


	//������������ת
	//��ת����Ϊ�Ƕ�,�ǻ���
	void GetRotateMatrix44(EMatrix44 &mat,const EVector4D &normal,EFloat degree);

	void GetVertex4DAddVector4D(const EVertex4D &v,const EVector4D &p,EVertex4D &result);

	//3D����x44����
	void GetVector3DMulMatrix44(const EVector3D &vec,const EMatrix44 &mat,EVector3D &result);

	//4D����x44����
	void GetVertor4DMatrix44(const EVector4D &vec, const EMatrix44 &mat, EVector4D &result);

	//����x44����
	void GetVertex4DMatrix44(const EVertex4D &vec, const EMatrix44 &mat, EVertex4D &result);


}