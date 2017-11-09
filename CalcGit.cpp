#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i = 0, y , cont=1, x=1, lung=70, alt=24, esp;
    while(cont!=0){
        double numero1 = 0.0, numero2 = 0.0, risultato = 0.0, media, z=0.0, grad, senx, radx, cosx ;
        cout<<"\n\n\n";
        cout<<char(32)<<char(32)<<char(32)<<char(201);
        for (int z=0; z<lung; z++){
        	cout<<char(205);
		}
		cout<<char(187)<<endl; 
		for(int j=0;j<alt;j++){
			cout<<char(32)<<char(32)<<char(32)<<char (186);
			switch(j){
				case 3: cout<<"                      CALCOLATRICE (STABLE, 2.0)                      ";
				        break;
				case 5: cout<<"      (1) Addizione                                                   ";
				        break;
				case 7: cout<<"      (2) Sottrazione                                                 ";
				        break;
				case 9: cout<<"      (3) Moltiplicazione                                             ";
				        break;
				case 11:cout<<"      (4) Divisione                                                   ";
				        break;
				case 13:cout<<"      (5) Media                                                       ";
				        break;
				case 15:cout<<"      (6) Radice                                                      ";
				        break;
				case 17:cout<<"      (7) Seno E Coseno                                               ";
				        break;
                		case 19:cout<<"      (8) Potenza                                                     ";
                       		        break;
				case 21:cout<<"      (9) Conversione da base x a base y                              ";
				        break;
		                case 23:cout<<"      (0) Esci                                                        ";
				        break;
				default :  for (int z=0; z<lung; z++)
        				   cout<<char(32);
	 
			}
			cout << char (186) << endl;
		}
		cout<<char(32)<<char(32)<<char(32)<<char(200);
		for (int z=0; z<lung; z++){
        	cout<<char(205);
		}
		cout<<char(188)<<endl<<endl;
		cout<<"          Che modalita' hai deciso? ";
		cin>>cont;
		cout<<endl<<endl;
        switch (cont){
        	default:
        		
        	cout<<"          Modalita' attualmente non disponibile"<<endl<<endl<<endl;
        	cout<<"          "; 
                system ("PAUSE");
                break;
            case 1:
                
                cout<<"          E' stata scelta l'addizione!"<<endl;
                cout<<"          Immetti di quanti numeri vuoi fare la somma: ";
                cin>>i;
                for (y=0;y<i;y++) {
                    cout <<"          Dimmi i numeri: ";
                    cin >>numero1;
                    risultato=risultato+numero1;
                }
                cout<<"          La somma della seguente addizione e': "<< risultato<<endl<<endl<<endl; 
                cout<<"          "; 
                system ("PAUSE");
                break;
            case 2:
                
                cout<<"          E' stata scelta la sottrazione!"<<endl;
                cout<<"          Immetti il minuendo: ";
                cin>>numero1;
                cout<<"          Immetti quanti numeri vuoi fare sottrarre: ";
                cin>>i;
                for (y=0;y<i;y++) {
                    cout <<"          Dimmi i numeri: ";
                    cin >>numero2;
                    z=z+numero2;
                }
                risultato=numero1-z;
                cout<<"          La differenza della seguente sottrazione e': "<< risultato<<endl<<endl<<endl;
                cout<<"          "; 
                system ("PAUSE");
                break;
            case 3:
                
                cout<<"          E' stata scelta la moltiplicazione!"<<endl;
                cout<<"          Immetti di quanti numeri vuoi fare la moltiplicazione: ";
                cin>>i;
                risultato=1;
                for (y=0;y<i;y++) {
                    cout <<"          Dimmi i numeri: ";
                    cin >>numero1;
                    risultato=risultato*numero1;
                    }
                cout<<"          Il prodotto della seguente moltiplicazione e': "<< risultato<<endl<<endl<<endl;
                cout<<"          "; 
                system ("PAUSE");

                break;
            case 4:                
                cout<<"          E' stata scelta la divisione!"<<endl;
                cout<<"          Immetti il dividendo: ";
                cin>>numero1;
                cout<<"          Immetti il divisore: ";
                cin>>numero2;
                if(numero2==0){
                              cout<<"          Il risultato e' infinito"<<endl<<endl<<endl;}
                              else{ risultato = numero1/numero2;
                              cout<<"          Il quoto della seguente divisione e': "<< risultato<<endl<<endl<<endl;}
                cout<<"          "; 
                system ("PAUSE");
                break;
            case 5:
                
                cout<<"          E' stata scelta la media!"<<endl;
                cout<<"          Immetti di quanti numeri vuoi fare la media: ";
                cin>>i;
                for (y=0;y<i;y++) {
                    cout <<"          Dimmi i numeri: ";
                    cin >>numero1;
                    risultato=risultato+numero1;
                }
                media=risultato/y;
                cout <<"          La media dei seguenti numeri e': "<<media<<endl<<endl<<endl;
                cout<<"          "; 
                system ("PAUSE");
                break;
            case 6:
            	
            	cout<<"          E' stata scelta la radice!"<<endl;
            	cout<<"          Su quale numero vuoi fare la radice? ";
            	cin>>numero1;
                cout<<"          Che valore ha l'indice della radice? ";
     		cin>>numero2;
     		risultato=pow(numero1, 1.0/numero2);
     		cout<<"          Il risultato di questa radice e' di "<<risultato<<endl<<endl<<endl;
     		cout<<"          ";
     		system("Pause");
     		break;
     	    case 7:
     			
     		cout<<"          E' stato scelto il calcolo del seno e del coseno!"<<endl;
     		cout<<"          Inserisci l'ampiezza dell'angolo: ";
     		in>>grad;
     		radx=grad*2*M_PI/360.0;
     		senx=sin(radx);
     		cosx=cos(radx);
     		cout<<"          Il coseno di "<<grad<<" e' di "<<cosx<<endl<<"          Il seno di "<<grad<<" e' di "<<senx<<endl<<endl<<endl;
		cout<<"          "; 
                system ("PAUSE");
                break;
            case 8:
            	
            	cout<<"          E' stata scelta l'elevazione a potenza!"<<endl;
            	cout<<"          Che numero vuoi elevare a potenza: ";
            	cin>>numero1;
            	if (numero1==0){
				cout<<"          La potenza risulta impossibile"<<endl<<endl<<endl;}
            	else{
            	cout<<"          Dimmi l'esponente della potenza: ";
            	cin>>esp;
            	risultato=pow(numero1, esp);
            	cout<<"          Il risultato di questa potenza e' di: "<<risultato<<endl<<endl<<endl;}
            	cout<<"          "; 
                system ("PAUSE");
                break;
	    case 0:
		cout<<"          La calcolatrice e' stata terminata con successo!"<<endl<<endl<<endl<<"Devoloped by Alvise Dei Rossi, Daniele Di Costanzo, Andrea Ballarin"<<endl<<endl;
        }
    }
    system("PAUSE");
}
