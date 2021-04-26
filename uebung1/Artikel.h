class Artikel{
public:
    int artikelNr;
    string bezeichnung;
    int bestand;

    int getartikelNr() const{
        return artikelNr;
    };
    string getbezeichnung() const{
        return bezeichnung;
    };

    int getbestand() const{
        return bestand;
    };

    void setartikelNr(int nummer){
        this ->artikelNr = nummer;
    };

    void setbezeichnung(string bez){
        this ->bezeichnung = bez;
    };

    void setbestand(int nummer){
        this ->bestand = nummer;
    };

    void bucheZugang (int menge){
        this ->bestand = bestand + menge;
    };

    void bucheAbgang (int menge) {
        this ->bestand = bestand - menge;
    };
};
