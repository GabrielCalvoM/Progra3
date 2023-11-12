#include "Restaurantes.h"

void reporte3i(rnodo R, int pais, int ciudad)
{
    if (R == NULL)
        return;
    else
    {

        if ((R->codigop == pais) && (R->codigoc == ciudad))
        {
            ofstream archivo("Reporte_Restaurantes.txt", std::ios::app);
            if (!archivo.is_open())
                cout << "ERROR" << endl;
            else
            {
                archivo << R->codigor << "     " << R->nombre << endl;
                archivo.close();
            }
        }
        reporte3i(R->Hizq, pais, ciudad);
        reporte3i(R->Hder, pais, ciudad);
    }
}

void reporte15i(rnodo R)
{
    if (R == NULL)
        return;
    else
    {
        ofstream archivo("Reporte_Restaurantes_Eliminados.txt", std::ios::app);
        if (!archivo.is_open())
            cout << "ERROR" << endl;
        else
        {
            archivo << R->codigor << "     " << R->codigop << "     " << R->codigoc << "     " << R->nombre << endl;
            archivo.close();
        }

        reporte15i(R->Hizq);
        reporte15i(R->Hder);
    }
}

rnodo rmasbuscado(rnodo R, rnodo MAX)
{
    if (R == NULL)
        return MAX;
    else
    {
        if (MAX == NULL)
            MAX = R;

        if (R->busqueda > MAX->busqueda)
            MAX = R;

        rnodo max1 = rmasbuscado(R->Hizq, MAX);
        rnodo max2 = rmasbuscado(R->Hder, MAX);

        if (max1->busqueda > MAX->busqueda)
            MAX = max1;
        if (max2->busqueda > MAX->busqueda)
            MAX = max2;

        return MAX;

    }

}