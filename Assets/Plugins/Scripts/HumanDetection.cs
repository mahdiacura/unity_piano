using UnityEngine;
using System.Collections;
using SenseEngineUnityPlugin;

public class HumanDetection : MonoBehaviour
{
    CSenseEngine _engine;
    public GameObject parentPlane, particlePrefab, humanPrefab;
    Pool m_pool;
    [HideInInspector]
    public SPosition[] myParticles;
    public int particlesCount;

    void Awake()
    {
        _engine = new CSenseEngine();
        _engine.OnRawParticles += _engine_OnRawParticles;
        _engine.OnHumanEnter += _engine_OnHumanEnter;
        _engine.OnHumanExit += _engine_OnHumanExit;
        _engine.OnHumanStay += _engine_OnHumanStay; ;
        _engine.Start();
        m_pool = new Pool();
        m_pool.Init(particlePrefab, parentPlane, 250);
    }

    private void _engine_OnHumanStay(byte _humanId, float _x, float _y, SPosition[] _particles)
    {
        //if (HumanList.d_Humans.ContainsKey(_humanId))
        //{
        //    HumanList.d_HumansGO[_humanId].transform.localPosition = new Vector3(_x - 0.5f, _y - 0.5f, -10);
        //    HumanList.d_HumansGO[_humanId].name = _humanId.ToString();
        //}
        //else
        //{
        //    _engine_OnHumanEnter(_humanId, _x, _y, _particles);
        //}
    }

    private void _engine_OnHumanExit(byte _humanId, float _x, float _y, SPosition[] _particles)
    {
        //if (HumanList.d_Humans.ContainsKey(_humanId))
        //{
        //    HumanList.d_Humans.Remove(_humanId);
        //    Destroy(HumanList.d_HumansGO[_humanId]);
        //    HumanList.d_HumansGO.Remove(_humanId);
        //}
    }

    private void _engine_OnHumanEnter(byte _humanId, float _x, float _y, SPosition[] _particles)
    {

        //if (!HumanList.d_Humans.ContainsKey(_humanId))
        //{
        //    HumanList.d_Humans.Add(_humanId, new HumanList.SHuman(_x, _y));
        //    GameObject g = Instantiate(humanPrefab) as GameObject;
        //    g.transform.parent = parentPlane.transform;
        //    g.transform.eulerAngles = Vector3.zero;
        //    g.transform.localPosition = new Vector3(float.Parse(_x.ToString("0.00")) - 0.5f, float.Parse(_y.ToString("0.00")) - 0.5f, -10);
        //    HumanList.d_HumansGO.Add(_humanId, g);
        //}
    }

    private void _engine_OnRawParticles(SPosition[] particles)
    {
        int Count = particles.Length;
        particlesCount = Count;

        for (int i = 0; i < Count; i++)
        {
            if (Count < m_pool._PoolObjects.Count){
                //m_pool._PoolObjects[i].transform.localPosition = new Vector3(2 * (particles[i].m_X - 0.5f) * 8, 0.5f, 2 * (1 - particles[i].m_Y - 0.5f) * 6);
                m_pool._PoolObjects[i].transform.localPosition = new Vector3(2 * (particles[i].m_X - 0.5f) * 8, 0.5f, 2 * (1 - particles[i].m_Y - 0.5f) * 6) * 1.4f;
            }else{
                m_pool.Init(particlePrefab, parentPlane, Count - m_pool._PoolObjects.Count);
            }
        }

        for (int i = Count; i < m_pool._PoolObjects.Count; i++){
            m_pool._PoolObjects[i].transform.localPosition = new Vector3(1000, 0, 0);
        }

        if (particles.Length == 0){
            m_pool.Reset();
        }
    }

    void Update()
    {
        _engine.Update();
    }

    void OnDestroy()
    {
        _engine.Stop();
        HumanList.d_Humans.Clear();
        HumanList.d_HumansGO.Clear();
    }
}
