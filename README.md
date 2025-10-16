https://github.com/Hoaqim1/Assignment-1---Programing#

# **Datainsamlare**

Readme för datainsamlare som samlar, analyserar och visar statistik för mätvärden via en meny.

**Funktionskrav**

**Datainmatning**

Användaren ska kunna ange ett antal mätvärden manuellt - Add_Value

Programmet ska hantera ogiltig input på ett robust sätt

Tillåt både hel- och decimaltal

**Databehandling**

Beräkna och visa:

Antal värden - Show_Value

Summa - Calc_Sum

Medelvärde - Calc_mdlv

Min- och max-värde - Calc_Min/Calc_Max

Varians och standardavvikelse - Calc_Var/Calc_stdav

**Menygränssnitt (UI)**

Användaren ska kunna välja vad de vill göra via en meny:

Lägg till nya mätvärden - Add_Value

Visa statistiken - Show_Value

Söka efter ett visst värde - Search_Func

Sortera listan av mätvärden (valfritt: stigande/fallande) - Sort_Func_Asc/Sort_Func_Desc

Avsluta programmet

**Struktur**

*main.cpp*  
Huvudfil som kallar på main och sedan anropar meny funktionen

*Menu_Func.cpp*

Menyfunktion som ger användaren möjlighet att lägga in inputs beroende på vad för data dom har och hur dom vill hantera den.

*Calc_Func.cpp*  
Här är alla funktioner som hanterar data, exempelvis summa och varians.

*Problems.md*  
Textfil som jag skapade senare i projektet för att göra en lista av problem och liknande som jag bokade av. Då den skapades senare så är det en ganska sen extra dokumentation av saker jag behövt lösa.

**README.md** - Denna fil.

**Installation**

1. Klona repot  
git clone https://github.com/Hoaqim1/Assignment-1---Programing.git

2. Hitta projektmappen  
cd //…./Assignment-1---Programing

3. Kompilera programmet  
g++ main.cpp Menu_Func.cpp Calc_Func.cpp -o Uppgift

4. Kör programmet  
./Uppgift

**Arbetsgång**

*Commits 1-8*

Började med att skapa README och main fil. Skapade en grundläggande meny som loopar och fungerar så jag kunde börja på annat och uppdatera menyn senare. La till en array för att lagra värden och en funktion som räknar summan, minsta, största, och medelvärdet. En enkel grund att jobba vidare på. Ändrade filnamn för att minska på svengelska.

*Commits 9-12*

Märkte snabbt att jag borde ha alla datafunktioner i samma fil för att göra projektet mindre rörigt. La in varians och standardavvikelser, det tog tid då jag behövde researcha hur man skriver det i c++. Fick inkludera cmath för sqrt och pow. Ändrade så programmet kan ta in decimaltal också.

*Commits 13-21*

Fick code-review av en klasskamrat som gav bra input, strukturerade om programmet efter det. Gjorde menyn till en egen fil och skapade en textfil där jag skrev ner förändringar som behövde ske. Ändrade så varje beräkning blev en egen funktion istället för att visa allt på en gång. La till sorteringsfunktion och sökfunktion. Forward deklarerade alla funktioner i main och meny, det tog ett tag då info på nätet var lite svår att tolka. Testade med AI för att spara tid men lät inte AI göra ändringar på själva koden. Hittade en stor bug jag nästan missade - glömde hantera om användaren skriver text istället för siffror. Fick hitta en lösning på nätet.

*Commits 21-28*

Gjorde om så att användare får välja mellan att sortera i fallande eller stigande ordning. Add_Value och Menu choice hanterar ogiltig inmatning

**Slutsats**

*Lärdomar*

*Projekthantering:* Har en bättre ide på hur man strukturerar projekt nu

*Git/Github:* Fått grundlig koll men behöver definitivt lära mig mer

*Funktioner:* Spenderat mycket tid på att lära mig skapa funktioner och implementera dem i en meny, speciellt matematiska funktioner

*Forward Declaration:* Känner mig ganska säker på att använda det nu vilket är skönt

*Problemlösning:* Blivit bättre på problemlösning i C/C++ genom att jobba i små steg, det gjorde det lättare att hitta info och sedan testa själv

*Mest utmanande*

Git/Github var svårt i början, tog flera irriterande timmar att få till ett repo som funkade. Min arbetsprocess blev till slut att skapa en lokal mapp och sedan flytta över till repot, känns som det går att göra mycket bättre. Blev stora commits istället för mindre vilket gjorde det svårare att se en kontinuerlig förändring. Överväldigad när jag började men det blev mycket lättare när jag började smått och enkelt.

Variansfunktionen var riktigt jobbig, fick referera till många källor för att få till det rätt.

Irriterande med buggar är att jag ofta inte kollar liknande delar av koden när jag fixar en bug. Exempel: fixade invalid input i Add_Value men inte i menyn. Måste standardisera hur jag testar program bättre och testa själv mer istället för att simulera med AI, var mest tidspress som ledde till det här men det var dumt i längden.

*Eventuella förbättringar*

Kodens struktur kan bli mycket bättre, känns lite kaos just nu. Måste börja med projekt tidigare och strukturera bättre. Testa kod mer ordentligt också, siktar mest på att det ska fungera utan att se vad som kan förbättras eller saknas vilket jag ångrar.

Det finns garanterat buggar jag inte fixat som jag vet om och inte hinner fixa just nu. Måste skriva kod bättre från grunden och lära mig mer för att undvika dessa problem.

Skriva readme:n i engelska/kompilera text. För mycket text, gjorde detta just denna gång så jag kan gå tillbaka och reflektera i framtiden. Kan behöva feedback för bättre readme.

*Buggar*

Inget svar från search_func om den inte hittar talet.

Lyckats bryta programmet ett par gånger men har inte hittat en konsistent metod så har svårt att hitta lösningar. Exempel är om man försöker spamma add_value funktionen med värden så kan jag ibland få riktigt konstiga svar när jag använder andra funktioner

