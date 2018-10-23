using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public static class HumanList
{
    public struct SHuman
    {
        public SHuman(float _x, float _y)
        {
            this.m_X = _x;
            this.m_Y = _y;
        }
        public float m_X;
        public float m_Y;
    }

    public static Dictionary<byte, SHuman> d_Humans = new Dictionary<byte, SHuman>();
    public static Dictionary<byte, GameObject> d_HumansGO = new Dictionary<byte, GameObject>();

}
