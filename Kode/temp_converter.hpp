using namespace std;

int temp_converter(int temperatur, int tb_asal, int td_asal, int tb_tujuan, int td_tujuan)
{
    return ((temperatur - tb_asal) * (td_asal - tb_asal) / (td_tujuan - tb_tujuan)) - tb_asal;
}