#include <iostream>
#include <vector>
using namespace std;

struct diccionario{
    vector<vector<string>> diccionario;
    int cant_pal;
};

void definir(diccionario &d, string PalEsp, string PalIngl, int cant){
    vector<string>aux;
    if(cant<1000){
        aux=d.diccionario[0];
        aux.push_back(PalEsp);
        d.diccionario[0]=aux;
        aux=d.diccionario[1];
        aux.push_back(PalIngl);
        d.diccionario[1]=aux;
    }
    else{
        cout<<"limite de palabras excedido"<<endl;
    }
}
bool existe(diccionario d, string palabra, int modo){
    bool esta=false;
    vector<string> aux;
    if(modo==1){
        aux=d.diccionario[0];
        for(int i=0; i<aux.size() && !esta; i++){
            if(palabra==aux[i]){
                esta=true;
            }
        }
    }
    else if(modo==2){
        aux=d.diccionario[1];
        for(int i=0; i<aux.size() && !esta; i++){
            if(palabra==aux[i]){
                esta=true;
            }
        }

    }
    else{
        cout<<"modo no existente"<<endl;
    }
    return esta;
}
bool traducir(diccionario d, string palabra, int modo){
    int lugar=-1;
    bool esta=false;
    bool continuar=true;
    string traduccion;
    vector<string> aux;
    if(modo==1){
        aux=d.diccionario[0];
        for(int i=0; i<aux.size() && continuar; i++){
            if(palabra==aux[i]){
                lugar=i;
                continuar=false;
            }
        }
        aux=d.diccionario[1];
        traduccion=aux[lugar];
        esta=true;
    }
    else if(modo==2){
        aux=d.diccionario[1];
        for(int i=0; i<aux.size() && continuar; i++){
            if(palabra==aux[i]){
                lugar=i;
                continuar=false;
            }
        }
        aux=d.diccionario[0];
        traduccion=aux[lugar];
        esta=true;
    }
    else{
        cout<<"modo no existente"<<endl;
    }
    if(lugar<0){
        esta=false;
    }
    else{
        cout<<traduccion<<endl;
    }
    return esta;
}


int main()
{
    bool ex;
    bool seguir=true;
    diccionario d;
    string PalEsp, PalIngl, palabra;
    int eleccion, CantPal, modo;
    vector<vector<string>> matriz;
    vector <string> a= {"a", "capacidad", "poder", "acerca de", "encima", "acceso", "aceptar", "acuerdo", "cuenta", "lograr", "a través de", "acto", "acción", "actividad", "actualmente", "añadir", "adición", "dirección", "adulto", "avanzar", "ventaja", "afectar", "después", "tarde", "otra vez", "en contra", "años", "agencia", "agente", "hace", "de acuerdo", "acuerdo", "adelante", "objetivo", "aire", "todos", "permitir", "casi", "solo", "a lo largo", "ya", "además", "a pesar de que", "siempre", "entre", "cantidad", "análisis", "y", "animal", "otro", "responder", "alguna", "nadie", "cualquier cosa", "de todas formas", "Aparecer", "solicitud", "aplicar", "enfoque", "zona", "discutir", "argumento", "brazo", "alrededor", "llegar", "Art º", "artículo", "como", "pedir", "asociar", "asumir", "en", "ataque", "intento", "asistir", "atención", "autor", "disponible", "promedio", "evitar", "lejos", "", "atrás", "malo", "equilibrar", "banco", "bar", "base", "BASIC", "base", "ser o estar", "oso", "hermoso", "porque", "volverse", "cama", "antes de", "empezar", "comportamiento", "detrás", "creer", "abajo", "beneficio", "Entre", "más allá", "grande", "cuenta", "poco", "negro", "azul", "tablero", "cuerpo", "libro", "ambos", "caja", "niño", "descanso", "traer", "hermano", "construir", "autobús", "negocio", "pero", "comprar", "por", "llamada", "Campaña", "puede", "capital", "coche", "tarjeta", "cuidado", "carrera", "llevar", "caso", "captura", "porque", "célula", "centavo", "centrar", "central", "siglo", "cierto", "ciertamente", "reto", "oportunidad", "cambio", "personaje", "cargar", "comprobar", "niño", "elección", "escoger", "Iglesia", "ciudad", "Reclamación", "clase", "limpiar", "claro", "claramente", "reloj", "cerrar", "ropa", "club", "frío", "Universidad", "color", "ven", "comentario", "común", "comunicación", "comunidad", "empresa", "comparar", "competencia", "completar", "completamente", "computadora", "preocupación", "conclusión", "condición", "considerar", "contacto", "Contiene", "continuar", "contrato", "controlar", "conversacion", "costo", "podría", "país", "Pareja", "curso", "Corte", "cubrir", "crear", "crédito", "cruzar", "cultura", "corriente", "cliente", "cortar", "diario", "dañar", "", "oscuro", "datos", "fecha", "hija", "día", "muerto", "acuerdo", "muerte", "debate", "decidir", "decisión", "profundo", "definir", "la licenciatura", "demanda", "Departamento", "depender", "describir", "diseño", "A pesar de", "detalle", "determinar", "desarrollar", "desarrollo", "morir", "diferencia", "diferente", "difícil", "dificultad", "directo", "dirección", "director", "descubrir", "discutir", "discusión", "enfermedad", "hacer", "doctor", "documento", "perro", "dólar", "puerta", "duda", "abajo", "dibujar", "sueño", "vestido", "beber", "conducir", "soltar", "fármaco", "debido", "durante", "cada", "temprano", "ganar", "fácilmente", "fácil", "comer", "económico", "economía", "educación", "efecto", "esfuerzo", "ya sea", "elección", "más", "empleado", "animar", "fin", "energía", "disfrutar", "suficiente", "entrar", "ambiente", "especialmente", "establecer", "Estimado", "incluso", "noche", "evento", "siempre", "cada", "todos", "todo el mundo", "todo", "evidencia", "exactamente", "ejemplo", "excepto", "ejercicio", "existe", "esperar", "experiencia", "explique", "exprimir", "ampliar", "ojo", "cara", "instalaciones", "hecho", "factor", "fallar", "otoño", "familia", "lejos", "rápido", "padre", "favorito", "temor", "característica", "sensación", "hembra", "pocos", "campo", "lucha", "figura", "expediente", "llenar", "película", "final", "finalmente", "financiero", "encontrar", "multa", "terminar", "fuego", "firma", "primero", "pez", "ajuste", "fijar", "piso", "volar", "atención", "seguir", "comida", "pie", "para", "fuerza", "exterior", "olvidar", "formar", "ex", "adelante", "gratis", "amigo", "desde", "frente", "completo", "divertido", "función", "financiar", "promover", "futuro", "ganancia", "juego", "jardín", "general", "generalmente", "Generacion", "obtener", "niña", "dar", "ir", "Gol", "bueno", "gobierno", "genial", "verde", "suelo", "grupo", "crecer", "crecimiento", "adivinar", "chico", "pelo", "mitad", "mano", "ocurrir", "feliz", "difícil", "tener", "él", "cabeza", "salud", "oír", "corazón", "ayuda", "aquí", "Ella misma", "alto", "él mismo", "historia", "golpear", "sostener", "vacaciones", "casa", "esperanza", "hospital", "caliente", "hotel", "hora", "casa", "cómo", "sin embargo", "enorme", "humano", "marido", "yo", "idea", "identificar", "Si", "imagen", "imagina", "inmediatamente", "importante", "mejorar", "en", "incluir", "ingresos", "incrementar", "en efecto", "indicar", "individual", "industria", "influencia", "información", "dentro", "ejemplo", "en lugar", "interesar", "internacional", "entrevista", "dentro", "introducir", "inversión", "implicar", "problema", "eso", "ít", "sí mismo", "trabajo", "unirse", "Juez", "sólo", "mantener", "llave", "niño", "matar", "tipo", "saber", "conocimiento", "ausencia", "tierra", "idioma", "grande", "último", "tarde", "risa", "ley", "dirigir", "líder", "aprender", "menos", "salir", "legal", "Menos", "dejar", "carta", "nivel", "mentira", "vida", "ligero", "me gusta", "probable", "límite", "línea", "enlazar", "lista", "escucha", "pequeño", "vivir", "local", "largo", "Mira", "perder", "pérdida", "mucho", "amor", "bajo", "máquina", "revista", "principal", "mantener", "mayor", "hacer", "masculino", "hombre", "gestionar", "administración", "gerente", "muchos", "marca", "mercado", "casar", "partido", "material", "importar", "mayo", "tal vez", "media", "medida", "medio", "reunirse", "miembro", "memoria", "mencionar", "mensaje", "método", "medio", "podría", "milla", "militar", "mente", "mía", "minuto", "perder", "modelo", "moderno", "momento", "dinero", "mes", "Más", "Mañana", "más", "madre", "movimiento", "movimiento", "película", "mucho", "música", "debe", "mí mismo", "nombre", "nación", "nacional", "natural", "naturaleza", "cerca", "casi", "necesario", "necesitar", "red", "Nunca", "nuevo", "Noticias", "periódico", "siguiente", "agradable", "noche", "no", "ni", "normal", "no", "Nota", "nada", "darse cuenta", "ahora", "número", "objeto", "obviamente", "ocurrir", "de", "apagado", "oferta", "oficina", "oficial", "oficial", "a menudo", "petróleo", "bueno", "antiguo", "en", "una vez", "uno", "solamente", "abierto", "funcionar", "operación", "opinión", "oportunidad", "opción", "o", "orden", "organización", "organizar", "original", "otro", "afuera", "fuera de", "terminado", "propio", "página", "pintar", "papel", "padre", "parque", "parte", "especial", "particularmente", "partido", "pasar", "pasado", "paciente", "modelo", "pausa", "paga", "gente", "por", "por ciento", "realizar", "actuación", "quizás", "período", "persona", "personal", "teléfono", "recoger", "imagen", "trozo", "lugar", "plan", "planta", "jugar", "jugador", "Por favor", "punto", "policía", "política", "político", "pobre", "popular", "población", "posición", "positivo", "posibilidad", "posible", "enviar", "potencial", "libra", "poder", "práctica", "preferir", "preparar", "presente", "presidente", "prensa", "presión", "bonita", "anterior", "precio", "privado", "probablemente", "problema", "proceso", "Produce", "producto", "producción", "profesional", "lucro", "programa", "proyecto", "promesa", "propiedad", "propuesta", "proponer", "proteger", "probar", "proporcionar", "público", "Halar", "comprar", "propósito", "empujar", "poner", "calidad", "trimestre", "pregunta", "con rapidez", "bastante", "carrera", "aumento", "distancia", "tarifa", "más bien", "alcanzar", "leer", "Listo", "real", "darse cuenta de", "De Verdad", "razón", "recibir", "reciente", "recientemente", "reconocer", "grabar", "rojo", "reducir", "referir", "referencia", "reflejar", "considerar", "región", "relacionar", "relación", "relación", "lanzamiento", "permanecer", "recuerda", "Reemplazar", "informe", "representar", "exigir", "investigación", "recurso", "el respeto", "respuesta", "responsabilidad", "descanso", "restaurante", "resultado", "regreso", "revisión", "Correcto", "anillo", "subir", "riesgo", "la carretera", "rock", "papel", "habitación", "redondo", "regla", "correr", "venta", "mismo", "salvar", "decir", "colegio", "ciencia", "Puntuación", "pantalla", "mar", "buscar", "temporada", "asiento", "segundo", "sección", "seguridad", "ver", "buscar", "parecer", "vender", "enviar", "sentido", "separar", "serie", "grave", "servir", "Servicio", "conjunto", "varios", "deberá", "forma", "compartir", "ella", "tienda", "corto", "debería", "espectáculo", "lado", "firmar", "significativo", "similar", "sencillo", "simplemente", "ya que", "canta", "soltero", "hermana", "sentar", "sitio", "situación", "tamaño", "habilidad", "dormir", "pequeña", "sonreír", "entonces", "social", "sociedad", "solución", "algunos", "alguien", "alguien", "alguna cosa", "algunas veces", "hijo", "canción", "pronto", "lo siento", "ordenar", "sonar", "fuente", "espacio", "hablar", "especial", "específico", "habla", "gastar", "deporte", "personal", "escenario", "estar", "estándar", "estrella", "comienzo", "estado", "declaración", "estación", "permanecer", "paso", "todavía", "valores", "detener", "almacenar", "historia", "estrategia", "calle", "Huelga", "fuerte", "estructura", "estudiante", "estudiar", "cosas", "estilo", "tema", "éxito", "exitoso", "tal", "De repente", "sufrir", "sugerir", "verano", "suministro", "apoyo", "suponer", "Por supuesto", "sorpresa", "sistema", "mesa", "tomar", "hablar", "objetivo", "tarea", "impuesto", "enseñar", "profesor", "equipo", "tecnología", "televisión", "contar", "tender", "término", "prueba", "que", "gracias", "ese-eso", "el-la-los-las", "sí mismos", "entonces", "teoría", "ahí", "por lo tanto", "ellos", "cosa", "pensar", "esta", "aunque", "mediante", "en todo", "lanzar", "así", "hora", "a", "hoy", "juntos", "mañana", "también", "parte superior", "total", "toque", "hacia", "pueblo", "pista", "comercio", "Tradicional ", "entrenar", "viaje", "tratar", "tratamiento", "árbol", "viaje", "problema", "cierto", 
    "tratar", "giro", "tipo", "poco claro", "debajo", "entender", "unidad", "Universidad", "hasta", "arriba", "sobre", "utilizar", "útil", "generalmente", "valor", "variedad", "varios", "versión", "muy", "ver", "pueblo", "visitar", "voz", "votar", "Espere", "caminar", "pared", "querer", "guerra", "reloj", "agua", "camino", "nosotros", "vestir", "semana", "fin de semana", "peso", "Bienvenido", "bien", "qué", "lo que sea", "cuando", "dónde", "ya sea", "cual", "mientras", "blanco", "quien", "todo", "por qué", "amplio", "esposa", "será", "ganar", "ventana", "deseo", "con", "dentro", "sin", "mujer", "preguntarse", "palabra", "trabajo", "obrero", "mundo", "preocupación", "valor", "haría", "escribir", "incorrecto", "sí", "año", "sí"};
    vector <string> b= {"a", "ability", "able", "about", "above", "access", "accept", "accord", "account", "achieve", "across", "act", "action", "activity", "actually", "add", "addition", "address", "adult", "advance", "advantage", "affect", "after", "afternoon", "again", "against", "age", "agency", "agent", "ago", "agree", "agreement", "ahead", "aim", "air", "all", "allow", "almost", "alone", "along", "already", "also", "although", "always", "among", "amount", "analysis", "and", "animal", "another", "answer", "any", "anyone", "anything", "anyway", "appear", "application", "apply", "approach", "area", "argue", "argument", "arm", "around", "arrive", "art", "article", "as", "ask", "associate", "assume", "at", "attack", "attempt", "attend", "attention", "author", "available", "average", "avoid", "away", "baby", "back", "bad", "balance", "bank", "bar", "base", "basic", "basis", "be", "bear", "beautiful", "because", "become", "bed", "before", "begin", "behavior", "behind", "believe", "below", "benefit", "between", "beyond", "big", "bill", "bit", "black", "blue", "board", "body", "book", "both", "box", "boy", "break", "bring", "brother", "build", "bus", "business", "but", "buy", "by", "call", "campaign", "can", "capital", "car", "card", "care", "career", "carry", "case", "catch", "cause", "cell", "cent", "center", "central", "century", "certain", "certainly", "challenge", "chance", "change", "character", "charge", "check", "child", "choice", "choose", "church", "city", "claim", "class", "clean", "clear", "clearly", "clock", "close", "clothes", "club", "cold", "college", "color", "come", "comment", "common", "communication", "community", "company", "compare", "competition", "complete", "completely", "computer", "concern", "conclusion", "condition", "consider", "contact", "contain", "continue", "contract", "control", "conversation", "cost", "could", "country", "couple", "course", "court", "cover", "create", "credit", "cross", "culture", "current", "customer", "cut", "daily", "damage", "dance", "dark", "data", "date", "daughter", "day", "dead", "deal", "death", "debate", "decide", "decision", "deep", "define", "degree", "demand", "department", "depend", "describe", "design", "despite", "detail", "determine", "develop", "development", "die", "difference", "different", "difficult", "difficulty", "direct", "direction", "director", "discover", "discuss", "discussion", "disease", "do", "doctor", "document", "dog", "dollar", "door", "doubt", "down", "draw", "dream", "dress", "drink", "drive", "drop", "drug", "due", "during", "each", "early", "earn", "easily", "easy", "eat", "economic", "economy", "education", "effect", "effort", "either", "election", "else", "employee", "encourage", "end", "energy", "enjoy", "enough", "enter", "environment", "especially", "establish", "estimate", "even", "evening", "event", "ever", "every", "everybody", "everyone", "everything", "evidence", "exactly", "example", "except", "exercise", "exist", "expect", "experience", "explain", "express", "extend", "eye", "face", "facility", "fact", "factor", "fail", "fall", "family", "far", "fast", "father", "favorite", "fear", "feature", "feel", "female", "few", "field", "fight", "figure", "file", "fill", "film", "final", "finally", "financial", "find", "fine", "finish", "fire", "firm", "first", "fish", "fit", "fix", "floor", "fly", "focus", "follow", "food", "foot", "for", "force", "foreign", "forget", "form", "former", "forward", "free", "friend", "from", "front", "full", "fun", "function", "fund", "further", "future", "gain", "game", "garden", "general", "generally", "generation", "get", "girl", "give", "go", "goal", "good", "government", "great", "green", "ground", "group", "grow", "growth", "guess", "guy", "hair", "half", "hand", "happen", "happy", "hard", "have", "he", "head", "health", "hear", "heart", "help", "here", "herself", "high", "himself", "history", "hit", "hold", "holiday", "home", "hope", "hospital", "hot", "hotel", "hour", "house", "how", "however", "huge", "human", "husband", "i", "idea", "identify", "if", "image", "imagine", "immediately", "important", "improve", "in", "include", "income", "increase", "indeed", "indicate", "individual", "industry", "influence", "information", "inside", "instance", "instead", "interest", "international", "interview", "into", "introduce", "investment", "involve", "issue", "it", "item", "itself", "job", "join", "judge", "just", "keep", "key", "kid", "kill", "kind", "know", "knowledge", "lack", "land", "language", "large", "last", "late", "laugh", "law", "lead", "leader", "learn", "least", "leave", "legal", "less", "let", "letter", "level", "lie", "life", "light", "like", "likely", "limit", "line", "link", "list", "listen", "little", "live", "local", "long", "look", "lose", "loss", "lot", "love", "low", "machine", "magazine", "main", "maintain", "major", "make", "male", "man", "manage", "management", "manager", "many", "mark", "market", "marry", "match", "material", "matter", "may", "maybe", "mean", "measure", "medium", "meet", "member", "memory", "mention", "message", "method", "middle", "might", "mile", "military", "mind", "mine", "minute", "miss", "model", "modern", "moment", "money", "month", "more", "morning", "most", "mother", "move", "movement", "movie", "much", "music", "must", "myself", "name", "nation", "national", "natural", "nature", "near", "nearly", "necessary", "need", "network", "never", "new", "news", "newspaper", "next", "nice", "night", "no", "nor", "normal", "not", "note", "nothing", "notice", "now", "number", "object", "obviously", "occur", "of", "off", "offer", "office", "officer", "official", "often", "oil", "okay", "old", "on", "once", "one", "only", "open", "operate", "operation", "opinion", "opportunity", "option", "or", "order", "organization", "organize", "original", "other", "out", "outside", "over", "own", "page", "paint", "paper", "parent", "park", "part", "particular", "particularly", "party", "pass", "past", "patient", "pattern", "pause", "pay", "people", "per", "percent", "perform", "performance", "perhaps", "period", "person", "personal", "phone", "pick", "picture", "piece", "place", "plan", "plant", "play", "player", "please", "point", "police", "policy", "political", "poor", "popular", "population", "position", "positive", "possibility", "possible", "post", "potential", "pound", "power", "practice", "prefer", "prepare", "present", "president", "press", "pressure", "pretty", "previous", "price", "private", "probably", "problem", "process", "produce", "product", "production", "professional", "profit", "program", "project", "promise", "property", "proposal", "propose", "protect", "prove", "provide", "public", "pull", "purchase", "purpose", "push", "put", "quality", "quarter", "question", "quickly", "quite", "race", "raise", "range", "rate", "rather", "reach", "read", "ready", "real", "realize", "really", "reason", "receive", "recent", "recently", "recognize", "record", "red", "reduce", "refer", "reference", "reflect", "regard", "region", "relate", "relation", "relationship", "release", "remain", "remember", "replace", "report", "represent", "require", "research", "resource", "respect", "response", "responsibility", "rest", "restaurant", "result", "return", "review", "right", "ring", "rise", "risk", "road", "rock", "role", "room", "round", "rule", "run", "sale", "same", "save", "say", "school", "science", "score", "screen", "sea", "search", "season", "seat", "second", "section", "security", "see", "seek", "seem", "sell", "send", "sense", "separate", "series", "serious", "serve", "service", "set", "several", "shall", "shape", "share", "she", "shop", "short", "should", "show", "side", "sign", "significant", "similar", "simple", "simply", "since", "sing", "single", "sister", "sit", "site", "situation", "size", "skill", "sleep", "small", "smile", "so", "social", "society", "solution", "some", "somebody", "someone", "something", "sometimes", "son", "song", "soon", "sorry", "sort", "sound", "source", "space", "speak", "special", "specific", "speech", "spend", "sport", "staff", "stage", "stand", "standard", "star", "start", "state", "statement", "station", "stay", "step", "still", "stock", "stop", "store", "story", "strategy", "street", "strike", "strong", "structure", "student", "study", "stuff", "style", "subject", "success", "successful", "such", "suddenly", "suffer", "suggest", "summer", "supply", "support", "suppose", "sure", "surprise", "system", "table", "take", "talk", "target", "task", "tax", "teach", "teacher", "team", "technology", "television", "tell", "tend", "term", "test", "than", "thank", "that", "the", "themselves", "then", "theory", "there", "therefore", "they", "thing", "think", "this", "though", "through", "throughout", "throw", "thus", "time", "to", "today", "together", "tomorrow", "too", "top", "total", "touch", "toward", "town", "track", "trade", "traditional", "train", "travel", "treat", "treatment", "tree", "trip", "trouble", "true", "try", "turn", "type", "unclear", "under", "understand", "unit", "university", "until", "up", "upon", "use", "useful", "usually", "value", "variety", "various", "version", "very", "view", "village", "visit", "voice", "vote", "wait", "walk", "wall", "want", "war", "watch", "water", "way", "we", "wear", "week", "weekend", "weight", "welcome", "well", "what", "whatever", "when", "where", "whether", "which", "while", "white", "who", "whole", "why", "wide", "wife", "will", "win", "window", "wish", "with", "within", "without", "woman", "wonder", "word", "work", "worker", "world", "worry", "worth", "would", "write", "wrong", "yeah", "year", "yes"};   
    
    CantPal=a.size();
    d.cant_pal=CantPal;
    matriz.push_back(a);
    matriz.push_back(b); 
    d.diccionario=matriz;
    cout<<d.cant_pal<<endl;
    while(seguir){
        cout<<endl<<endl<<"opciones del programa:"<<endl;
        cout<<"1- definir"<<endl;
        cout<<"2- existe"<<endl;
        cout<<"3- traducir"<<endl;
        cout<<"4- salir"<<endl;
        cin>>eleccion;
        switch (eleccion)
        {
        case 1:
            cout<<"palabra en esp"<<endl;
            cin>>PalEsp;
            cout<<"palabra en ingl"<<endl;
            cin>>PalIngl;
            definir(d, PalEsp, PalIngl, CantPal);
        break;
        case 2:
            cout<<"escribir palabra"<<endl;
            cin>>palabra;
            cout<<"elegir modo"<<endl;
            cout<<"1-Esp"<<endl;
            cout<<"2-Ingl"<<endl;
            cin>>modo;
            ex=existe(d, palabra, modo);
            if (ex){
                cout<<"Existe"<<endl;
            }
            else{
                cout<<"No existe"<<endl;
            }
        break;
        case 3:
            cout<<"elegir modo"<<endl;
            cout<<"1-Palabra Esp "<<endl;
            cout<<"2-Palabra Ingl"<<endl;
            cin>>modo;
            cout<<"escribir palabra (en minuscula)"<<endl;
            cin>>palabra;
            ex=traducir(d, palabra, modo);
            if (ex){
                cout<<"Traduccion realizada"<<endl;
            }
            else{
                cout<<"Traduccion no realizada"<<endl;
            }
        break;
        case 4:
            seguir=false;
        break;
        }
    }
}



/*
Vamos a crear un diccionario Espaniol-Ingles. Una de las muchas formas de representar un 
diccionario de forma muy basica es creando una diccionario de 2xN. De esta forma", "habra tantas
 palabras como N y se puede tomar como convencion que la primera fila sean las palabras 
 espaniolas y la segunda sus traducciones inglesas. Crear un diccionario de maximo 1000 
 palabras (que tenga una variable tamanio que vaya indicando como se llena).Una vez hecho 
 esto", "implementar las siguientes funciones: 
 
 a. void definir(Diccionario miDiccionario", "string palabraEsp", "string palabraIng) que toma el 
 diccionario y define una nueva entrada.


  b. bool existe(Diccionario miDiccionario", "string palabra", "int modo) que indica si la 
  palabra existe dependiendo del modo (si modo vale 1 indica que es espaniola", "si vale 2 
  sera inglesa). c. bool traducir(Diccionario miDiccionario", "string palabra", "int modo) 
  que imprime por pantalla la traduccion de la palabra dependiendo del modo que se ingrese.
   Ademas", "se indicara con un booleano si es que la traduccion se realizo 
   satisfactoriamente o no.







   diccionario Español-Inglés. Una diccionario de 2xN, tantas palabras como N , las palabras de la primera
    fila españolas y la segunda sus traducciones inglesas. Máximo 1000 palabras (que tenga una 
    variable tamaño que vaya indicando cómo se llena). funciones:             

 a. void definir: que toma el diccionario y define una nueva entrada.     

 b. bool existe: que indica si la palabra existe dependiendo del modo (si modo vale 1 español,  
    2  ingles).                 

 c. bool traducir: que imprime por pantalla la traducción de la palabra dependiendo del modo que se 
    ingrese. Además, se indicará con un booleano si es que la traducción se realizó satisfactoriamente
    o no.





*/