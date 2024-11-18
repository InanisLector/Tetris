#ifndef MONOBEHAVIOUR_H_
#define MONOBEHAVIOUR_H_

class MonoBehaviour {
protected:
	GameObject& _parent;

public:
	virtual void Start();
	virtual void Update();
	virtual void OnDestroy();
	inline void SetParent(GameObject parent) { _parent = parent; }
};

#endif