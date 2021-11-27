#include <string>
#include <vector>
#include <algorithm>

using namespace std;
struct v{
    int valor;
    int k;
};
int getK(int x){
    //K Es igual a 1 dividido por x
    return (1/x)*100;
}
vector<int> llamadas(vector<int> &a) {
    vector<int> res, af;
    vector<float> ks;
    vector<v> vals;

    int x = a[0];
    int k;

    //Borrar repeticiones de los valores y dejar uno
    for(int i = 0; i < a.size(); i++){
        if(find(af.begin(), af.end(), a[i]) == af.end()){
            af.push_back(a[i]);
        }
    }

    //Generar valores de K
    for(int i = 0; i < af.size(); i++){
        k = getK(af[i]);
        vals.push_back({af[i], k});
    }

    //Ordenar de menor a mayor en funcion de k
    sort(vals.begin(), vals.end(), [](v a, v b){
        return a.k < b.k;
    });

    //Mandar a res
    for(int i = 0; i < vals.size(); i++){
        res.push_back(vals[i].valor);
    }
    
    //Oredenar res de menor a mayor
    sort(res.begin(), res.end());
    return res;
}
