#include <iostream>
using namespace std;

/* Miembros del equipo:
Emilio Salas Porras               A01178414
Bruno Fernando Zabala Peña        A00838627
Edgar Antonio Larios Rodríguez    A01286078
Diego Hernández Herrera           A01198786
*/

class Personalidad {
private:
    string id_personalidad;
    string caracter;
    string temperamento;
    int sociabilidad;
    int extroversion;

public:
    Personalidad();
    Personalidad(string, string, string, int, int);

    void muestra_personalidad();
    void aplicar_test();
    int sumar_puntos();
    void obtener_perfil_lider();
};

Personalidad::Personalidad() {
    id_personalidad = "N/A";
    caracter = "Nervioso";
    temperamento = "Flemático";
    sociabilidad = 5;
    extroversion = 3;
}

Personalidad::Personalidad(string id, string car, string temp, int soc,
                           int ext) {
    id_personalidad = id;
    caracter = car;
    temperamento = temp;
    sociabilidad = soc;
    extroversion = ext;
}

void Personalidad::muestra_personalidad() {
    cout << "ID: " << id_personalidad << endl;
    cout << "Caracter: " << caracter << endl;
    cout << "Temperamento: " << temperamento << endl;
    cout << "Sociabilidad: " << sociabilidad << endl;
    cout << "Extroversion: " << extroversion << endl << endl;
}

void Personalidad::aplicar_test() {
    string url = "// https://www.16personalities.com/es/test-de-personalidad";

    cout << "¿Quieres tomar el test (1) o introducir resultados (cualquier otro "
            "número)?"
         << endl;
    int opcion;
    cin >> opcion;

    if (opcion == 1) {
        int respuestas[61];
        cout << "Test de personalidad" << endl;
        cout << "Contesta las siguientes preguntas introduciendo un número del 1 "
                "(completamente en desacuerdo) al 5 (completamente de acuerdo)"
             << endl;
        cout << endl;
        cout << "Haces amigos con regularidad" << endl;
        cin >> respuestas[0];
        cout << "Dedicas gran parte de tu tiempo libre a explorar temas aleatorios "
                "que despiertan tu interés"
             << endl;
        cin >> respuestas[1];
        cout << "Ver llorar a otras personas puede hacer que sientas ganas de "
                "llorar tú también"
             << endl;
        cin >> respuestas[2];
        cout << "Sueles hacer un plan de reserva para un plan de reserva" << endl;
        cin >> respuestas[3];
        cout << "Sueles mantener la calma, incluso bajo mucha presión" << endl;
        cin >> respuestas[4];
        cout << "En los actos sociales, rara vez intentas presentarte a gente "
                "nueva y sueles hablar con los que ya conoces"
             << endl;
        cin >> respuestas[5];
        cout << "Prefieres terminar por completo un proyecto antes de empezar otro"
             << endl;
        cin >> respuestas[6];
        cout << "Eres muy sentimental" << endl;
        cin >> respuestas[7];
        cout << "Te gusta utilizar herramientas de organización como agendas y "
                "listas"
             << endl;
        cin >> respuestas[8];
        cout << "Incluso un pequeño error puede hacerte dudar de tus capacidades y "
                "conocimientos generales"
             << endl;
        cin >> respuestas[9];
        cout << "Te sientes cómodo acercándote a alguien que te parece interesante "
                "y entablando una conversación"
             << endl;
        cin >> respuestas[10];
        cout << "No te interesa demasiado discutir las diversas interpretaciones y "
                "análisis de las obras creativas"
             << endl;
        cin >> respuestas[11];
        cout << "Te gusta más seguir a tu cabeza que a tu corazón" << endl;
        cin >> respuestas[12];
        cout << "Sueles preferir hacer lo que te apetece en cada momento en lugar "
                "de planificar una rutina diaria concreta"
             << endl;
        cin >> respuestas[13];
        cout << "Rara vez te preocupas por causar una buena impresión a las "
                "personas que conoces"
             << endl;
        cin >> respuestas[14];
        cout << "Te gusta participar en actividades de grupo" << endl;
        cin >> respuestas[15];
        cout << "Te gustan los libros y las películas que te hacen pensar en tu "
                "propia interpretación del final"
             << endl;
        cin >> respuestas[16];
        cout << "Tu felicidad proviene más de ayudar a los demás a conseguir cosas "
                "que de tus propios logros"
             << endl;
        cin >> respuestas[17];
        cout << "Te interesan tantas cosas que te resulta difícil elegir qué "
                "probar a continuación"
             << endl;
        cin >> respuestas[18];
        cout << "Eres propenso a preocuparte de que las cosas empeoren" << endl;
        cin >> respuestas[19];
        cout << "Eres propenso a preocuparte de que las cosas empeoren" << endl;
        cin >> respuestas[20];
        cout << "Evitas el liderazgo en grupos" << endl;
        cin >> respuestas[21];
        cout << "No eres una persona artística" << endl;
        cin >> respuestas[22];
        cout << "Crees que el mundo sería mejor si la gente se basara más en la "
                "racionalidad y menos en sus sentimientos"
             << endl;
        cin >> respuestas[23];
        cout << "Prefieres hacer tus tareas antes de permitirte relajarte" << endl;
        cin >> respuestas[24];
        cout << "Te gusta ver discutir a la gente" << endl;
        cin >> respuestas[25];
        cout << "Tiendes a evitar llamar la atención" << endl;
        cin >> respuestas[26];
        cout << "Tu humor puede cambiar muy rápidamente" << endl;
        cin >> respuestas[27];
        cout << "Pierdes la paciencia con las personas que no son tan eficientes "
                "como tú"
             << endl;
        cin >> respuestas[28];
        cout << "A menudo acabas haciendo las cosas en el último momento" << endl;
        cin >> respuestas[29];
        cout << "Siempre te ha fascinado la cuestión de qué ocurre después de la "
                "muerte, si es que ocurre algo"
             << endl;
        cin >> respuestas[30];
        cout << "Sueles preferir estar rodeado de otros que solo" << endl;
        cin >> respuestas[31];
        cout << "Te aburres o pierdes el interés cuando la discusión se vuelve muy "
                "teórica"
             << endl;
        cin >> respuestas[32];
        cout << "Te resulta fácil empatizar con una persona cuyas experiencias son "
                "muy diferentes de las tuyas"
             << endl;
        cin >> respuestas[33];
        cout << "Sueles aplazar la toma de decisiones el mayor tiempo posible"
             << endl;
        cin >> respuestas[34];
        cout << "Rara vez reconsideras las decisiones que has tomado" << endl;
        cin >> respuestas[35];
        cout << "Después de una semana larga y agotadora, un acto social animado "
                "es justo lo que necesitas"
             << endl;
        cin >> respuestas[36];
        cout << "Te gusta ir a museos de arte" << endl;
        cin >> respuestas[37];
        cout << "Te cuesta comprender los sentimientos de los demás" << endl;
        cin >> respuestas[38];
        cout << "Te gusta tener una lista de tareas para cada día" << endl;
        cin >> respuestas[39];
        cout << "Rara vez te sientes inseguro" << endl;
        cin >> respuestas[40];
        cout << "Evitas llamar por teléfono" << endl;
        cin >> respuestas[41];
        cout << "Sueles pasar mucho tiempo intentando comprender puntos de vista "
                "muy diferentes a los tuyos"
             << endl;
        cin >> respuestas[42];
        cout << "En tu círculo social, sueles ser tú quien contacta con tus amigos "
                "e inicia las actividades"
             << endl;
        cin >> respuestas[43];
        cout << "Si tus planes se ven interrumpidos, tu máxima prioridad es "
                "retomarlos lo antes posible"
             << endl;
        cin >> respuestas[44];
        cout << "Todavía te molestan los errores que cometiste hace mucho tiempo"
             << endl;
        cin >> respuestas[45];
        cout << "Rara vez contemplas las razones de la existencia humana o el "
                "sentido de la vida"
             << endl;
        cin >> respuestas[46];
        cout << "Tus emociones te controlan más que tú a ellas" << endl;
        cin >> respuestas[47];
        cout << "Te cuidas mucho de no hacer quedar mal a la gente, incluso cuando "
                "es completamente culpa suya"
             << endl;
        cin >> respuestas[48];
        cout
                << "Tu estilo personal de trabajo se acerca más a las explosiones "
                   "espontáneas de energía que a los esfuerzos organizados y constantes"
                << endl;
        cin >> respuestas[49];
        cout << "Cuando alguien tiene una buena opinión de ti, te preguntas cuánto "
                "tardará en sentirse decepcionado contigo"
             << endl;
        cin >> respuestas[50];
        cout << "Te encantaría un trabajo en el que tuvieras que trabajar solo la "
                "mayor parte del tiempo"
             << endl;
        cin >> respuestas[51];
        cout << "Crees que reflexionar sobre cuestiones filosóficas abstractas es "
                "una pérdida de tiempo"
             << endl;
        cin >> respuestas[52];
        cout << "Te sientes más atraído por lugares con ambientes bulliciosos y "
                "ajetreados que por lugares tranquilos e íntimos"
             << endl;
        cin >> respuestas[53];
        cout << "Sabes a primera vista cómo se siente una persona" << endl;
        cin >> respuestas[54];
        cout << "A menudo te sientes abrumado" << endl;
        cin >> respuestas[55];
        cout << "Completas las cosas metódicamente sin saltarte ningún paso"
             << endl;
        cin >> respuestas[56];
        cout << "Te intrigan mucho las cosas tachadas de controvertidas" << endl;
        cin >> respuestas[57];
        cout << "Dejarías pasar una buena oportunidad si pensaras que otra persona "
                "la necesita más"
             << endl;
        cin >> respuestas[58];
        cout << "Te cuesta cumplir los plazos" << endl;
        cin >> respuestas[59];
        cout << "Confías en que las cosas te saldrán bien" << endl;
        cin >> respuestas[60];
        cout << endl;
        cout << "Para obtener tu ID de personalidad, introduce las siguientes "
                "respuestas en la siguiente liga: "
                "https://www.16personalities.com/es/test-de-personalidad"
             << endl;

        for (int i = 0; i < 60; i++) {
            if (respuestas[i] > 5) {
                cout << i << "- " << 5 << endl;
            } else if (respuestas[i] < 1) {
                cout << i << "- " << 1 << endl;
            } else {
                cout << i << "- " << respuestas[i] << endl;
            }
        }
    }

    cout << "Introduce los resultados del test" << endl;
    cout << "ID de personalidad: ";
    cin >> id_personalidad;
    cout << endl;
    cout << "Nivel de extroversion: ";
    cin >> extroversion;
}

int Personalidad::sumar_puntos() { return sociabilidad + extroversion; }

void Personalidad::obtener_perfil_lider() {
    cout << "Perfil de liderazgo: " << endl;
    if ((sociabilidad + (extroversion / 10)) >= 16) {
        cout << "Eres un líder, tienes la competencia de dirigir a tus socios para "
                "llegar a un objetivo en común"
             << endl;
    } else if ((sociabilidad + (extroversion / 10)) >= 10) {
        cout << "Tienes la capacidad de compartir tus ideas y causar un impacto en "
                "los demás, pero no siempre adoptas esta actitud."
             << endl;
    } else if ((sociabilidad + (extroversion / 10)) > 6) {
        cout << "Casi no te involucras en momentos para socializar, ni tampoco "
                "expresas seguido tus ideas y opiniones a los demás. "
             << endl;
    } else {
        cout << "Te enfocas mucho más en ti mismo y prefieres concentrarte en "
                "hacer los labores que te corresponden"
             << endl
             << endl;
    }
}

class Persona {
private:
    string nombre;
    int edad;
    float masa;
    float estatura;
    Personalidad forma_de_ser;

public:
    Persona();
    Persona(string, int, float, float, Personalidad);

    void muestra_persona();
    Personalidad getFormaSer() { return forma_de_ser; }
};

Persona::Persona() {
    Personalidad aux = Personalidad();
    nombre = "Guillermo";
    edad = 20;
    masa = 72;
    estatura = 175;
    forma_de_ser = aux;
}

Persona::Persona(string nom, int ed, float mas, float est, Personalidad forma) {
    nombre = nom;
    edad = ed;
    masa = mas;
    estatura = est;
    forma_de_ser = forma;
}

void Persona::muestra_persona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Masa: " << masa << endl;
    cout << "Estatura: " << estatura << endl << endl;
    cout << "Forma de ser: " << endl;
    forma_de_ser.muestra_personalidad();
}

int main() {
    Persona persona1 = Persona();
    persona1.muestra_persona();
    persona1.getFormaSer().aplicar_test();
    persona1.getFormaSer().obtener_perfil_lider();
    int puntosPersona1 = persona1.getFormaSer().sumar_puntos();
    cout << "La persona #1 obtuvo " << puntosPersona1
         << " puntos al acabar el test de personalidad" << endl
         << endl;

    Personalidad Personalidad2 = Personalidad("101", "Alegre", "Sanguíneo", 8, 7);
    Persona persona2 = Persona("Javier", 31, 82, 189, Personalidad2);
    persona2.muestra_persona();

    persona2.getFormaSer().aplicar_test();
    persona2.getFormaSer().obtener_perfil_lider();
    int puntosPersona2 = persona2.getFormaSer().sumar_puntos();
    cout << "La persona #2 obtuvo " << puntosPersona2
         << " puntos al acabar el test de personalidad" << endl;

    return 0;
}