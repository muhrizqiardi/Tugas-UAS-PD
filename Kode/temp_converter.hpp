using namespace std;

double temp_converter(double x, double tb_asal, double td_asal, double tb_tujuan, double td_tujuan)
{
    return ((x - tb_asal) * (td_tujuan - tb_tujuan) / (td_asal - tb_asal)) + tb_tujuan;
}