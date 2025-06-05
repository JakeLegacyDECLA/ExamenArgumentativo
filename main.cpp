#include <iostream>
#include <cmath> // Incluimos la librería cmath ya que tiene el uso de trigonometría
using namespace std;

int main() {
    // Constantes
    double F;              // Fuerza (N)
    double v;                // Velocidad (m/s)
    double B;                  // Campo magnético (T)
    double q = 1.602e-19;            // Carga del protón (C)
    double Ma_PI = 3.141592653589793;


    cout << "Sistema para calcular el angulo que forma la velocidad haciendo uso de: " << endl;
    cout << "velocidad del protón (m/s)" << endl;
    cout << "campo magnetico (T)" << endl;
    cout << "fuerza magnetica (N) \n" << endl;

    cout << "Ingresar velocidad (sin unidad): " << endl;
    cin >> v;
    cout << "Ingresar fuerza magnetica (sin unidad): " << endl;
    cin >> F;  
    cout << "Ingresar campo magnetico (sin unidad): " << endl;
    cin >> B;

    // Cálculo del seno del ángulo
    double sin_theta = F / (q * v * B);

    // Verificamos si el resultado es válido
    if (sin_theta >= -1 && sin_theta <= 1) {
        // Cálculo del ángulo en radianes y luego en grados
        double theta_rad = asin(sin_theta);
        double theta_deg = theta_rad * (180.0 / Ma_PI);

        cout << "El ángulo entre la velocidad y el campo magnético es: " << theta_deg << " grados." << endl;
    } else {
        cout << "El valor de sin(theta) no es válido: " << sin_theta << endl;
    }

    return 0;
}
