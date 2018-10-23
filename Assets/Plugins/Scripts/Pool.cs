using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Security.Policy;

public class Pool
{
    public List<GameObject> _PoolObjects = new List<GameObject>();

    public void Init(GameObject PoolObject, GameObject parent, int length)
    {
        for (int i = 0; i < length; i++)
        {
            if (PoolObject != null)
            {
                GameObject q = MonoBehaviour.Instantiate(PoolObject, new Vector3(1000, 0, 0), Quaternion.identity) as GameObject;
                q.transform.eulerAngles = new Vector3(0, 0, 0);
                //q.transform.parent = parent.transform;
                q.transform.SetParent(parent.transform);
                _PoolObjects.Add(q);
            }
        }
    }

    public void Free()
    {
        for (int i = 0; i < _PoolObjects.Count; i++)
        {
            MonoBehaviour.Destroy(_PoolObjects[i]);
        }
    }

    public void Reset()
    {
        for (int i = 0; i < _PoolObjects.Count; i++)
        {
            if (_PoolObjects[i].transform.position.x < 500)
            {
                _PoolObjects[i].transform.position = new Vector3(1000, 0, 0);
            }
        }
    }
}
