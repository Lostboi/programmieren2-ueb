#Makefile 

CXX = g++	# C++ Compiler + Compiler-Flags
CXXFLAGS = -g -std=c++17 -pedantic -Wall -Wextra

LD = g++
LDFLAGS=

# Objekt-Dateien
OBJECTS = article.o lager.o lagerDialog.o
# Quelldateien
SRC = $(OBJECTS:%.o=%.cpp)
#Abhängigkeitsdefinitionen
DEPENDFILE = .depend

LOESCHLISTE = *.o *.exe *stackdump

# Ereugen der Zieldatei(mit gewünschtem Namen)
all: dep mainTest

# Anlegen der Abhängigkeitsdatei
dep: $(SRC)
	$(CXX) -MM $(SRC) > $(DEPENDFILE)

#### Abhängigkeiten(Name des Hauptprogramms)
mainTest: $(OBJECTS)

# Bereinigung des Verzeichnisses
clean:
	@echo "Folgende Dateien werden geloescht"
	@echo $(LOESCHLISTE)
	rm -f $(LOESCHLISTE)

# Regel, um aus .cpp-Dateien .o-Dateien zu erzeugen
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Regel, um aus .o-Dateien eine ausführbare(.exe) Datei zu erzeugen
# $@ ist das zu erzeugende Ziel
%: %.o
	$(LD) $(LDFLAGS) -o $@ $^

-include $(DEPENDFILE)