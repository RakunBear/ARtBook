using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DrawTool
{
    public static void DrawLine(this Texture2D tex, Vector2 p1, Vector2 p2, Color col)
    {
        Vector2 t = p1;
        float frac = 1 / Mathf.Sqrt(Mathf.Pow(p2.x - p1.x, 2) + Mathf.Pow(p2.y - p1.y, 2));
        float ctr = 0;

        while ((int)t.x != (int)p2.x || (int)t.y != (int)p2.y)
        {
            t = Vector2.Lerp(p1, p2, ctr);
            ctr += frac;
            tex.SetPixel((int)t.x, (int)t.y, col);
        }
    }

    public static void DrawLine(this Texture2D tex, Vector2 p1, Vector2 p2, Color col, int tick)
    {
        Vector2 t = p1;
        float frac = 1 / Mathf.Sqrt(Mathf.Pow(p2.x - p1.x, 2) + Mathf.Pow(p2.y - p1.y, 2));
        float ctr = 0;

        while ((int)t.x != (int)p2.x || (int)t.y != (int)p2.y)
        {
            t = Vector2.Lerp(p1, p2, ctr);
            ctr += frac;
            for (int tc = tick; tc > 0; tc--)
            {
                tex.SetPixel((int)t.x + (tick / 2) - tc, (int)t.y + (tick / 2), col);
                for (int tr = tick; tr > 0; tr--)
                {
                    tex.SetPixel((int)t.x + (tick / 2), (int)t.y + (tick / 2) - tr, col);
                }
            }

        }
    }
}