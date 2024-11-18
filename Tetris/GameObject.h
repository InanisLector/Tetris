#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_
#include <vector>
#include "Vector2i.h"
#include "MonoBehaviour.h"

class GameObject {

private:
	Vector2i _position;
	short _rotation; // 0 - 4
	std::vector<MonoBehaviour> _scripts;

public:

	GameObject(Vector2i position = {0, 0}, short rotation = 0) {
		_position = position;
		_rotation = rotation;
	}

	virtual ~GameObject() { 
		for (MonoBehaviour script : _scripts) {
			script.OnDestroy();
		}
	}

	inline void AddScript(MonoBehaviour script) {
		_scripts.push_back(script);
		_scripts.back().SetParent(*this);
		_scripts.back().Start();
	}

	GameObject& operator<< (MonoBehaviour script) {
		AddScript(script);
		return *this;
	}

	inline void Update() {
		for (MonoBehaviour script : _scripts) {
			script.Update();
		}
	}
};

#endif