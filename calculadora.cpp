#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){ for(int i=0; i<31; i++){
        cout << '=';
    }
    cout << endl;
    cout << " " << "Calculadora Simples " << endl;
    for(int i=0; i<31; i++){
        cout << '=';
    }
    cout << endl;
    cout << "Selecione uma operação:" << endl;
    cout << "1. Adição" << endl;
    cout << "2. Subtração" << endl;
    cout << "3. Multiplicação" << endl;
    cout << "4. Divisão" << endl;
    cout << "5. Sair" << endl;
    cout << "Opção: ";
    int o;
    cin >> o;
    if(o<1 || o>5){
        cout << "Resposta inválida. Digite um número entre '1' e '5' para calcular: ";
        int s;
        cin >> s;
        o=s;
    }

    cout << endl;

    if(o==1){
        cout << "Digite o primeiro número: ";
        double p;
        cin >> p;
       
        cout << "Digite o segundo número: ";
        double s;
        cin >> s;
        

        double soma;
        soma=p+s;
        cout << "Resultado: " << p << " + " << s  << " = " << soma << endl;
        
        cout << "Deseja realizar outra operação? (s/n): ";
        char t;
        cin >> t;
        if(t=='s'){
            true;
        }
        else if(t=='n'){
            cout << "Obrigado por usar a calculadora! Até a próxima.";
            break;
        }
        else{
            cout << "Resposta inválida. Por favor, digite 's' para sim ou 'n' para não." << endl;
            cout << "Deseja realizar outra operação? (s/n): ";
            char t;
            cin >> t;
            if(t=='s'){
                true;
            }
            else if(t=='n'){
                cout << "Obrigado por usar a calculadora! Até a próxima.";
                break;
            }
        }
    }

    else if(o==2){
        cout << "Digite o primeiro número: ";
        double p;
        cin >> p;
        
        cout << "Digite o segundo número: ";
        double s;
        cin >> s;
        

        double sub;
        sub=s-p;
        cout << "Resultado: " << s << " - " << p  << " = " << sub << endl;
        
        
        cout << "Deseja realizar outra operação? (s/n): ";
        char t;
        cin >> t;
        if(t=='s'){
            true;
        }
        else if(t=='n'){
            cout << "Obrigado por usar a calculadora! Até a próxima.";
            break;
        }
        else{
            cout << "Resposta inválida. Por favor, digite 's' para sim ou 'n' para não." << endl;
            cout << "Deseja realizar outra operação? (s/n): ";
            char t;
            cin >> t;
            if(t=='s'){
                true;
            }
            else if(t=='n'){
                cout << "Obrigado por usar a calculadora! Até a próxima.";
                break;
            }
        }
    }
    else if(o==3){
        cout << "Digite o primeiro número: ";
        double p;
        cin >> p;
        
        cout << "Digite o segundo número: ";
        double s;
        cin >> s;
        

        double mult;
        mult=p*s;
        cout << "Resultado: " << p << " * " << s  << " = " << mult << endl;
        
        cout << "Deseja realizar outra operação? (s/n): ";
        char t;
        cin >> t;
        if(t=='s'){
            true;
        }
        else if(t=='n'){
            cout << "Obrigado por usar a calculadora! Até a próxima.";
            break;
        }
        else{
            cout << "Resposta inválida. Por favor, digite 's' para sim ou 'n' para não." << endl;
            cout << "Deseja realizar outra operação? (s/n): ";
            char t;
            cin >> t;
            if(t=='s'){
                true;
            }
            else if(t=='n'){
                cout << "Obrigado por usar a calculadora! Até a próxima.";
                break;
            }
        }
    }
    else if(o==4){
        cout << "Digite o primeiro número: ";
        double p;
        cin >> p;
        
        cout << "Digite o segundo número: ";
        double s;
        cin >> s;
        

        double div;
        div=p/s;
        if(s==0){
            cout << "Erro: Divisão por zero não é permitida." << endl;
            cout << "Deseja realizar outra operação? (s/n): ";
            char t;
            cin >> t;
            if(t=='s'){
                true;
            }
            else if(t=='n'){
                cout << "Obrigado por usar a calculadora! Até a próxima.";
                break;
            }
            else{
                cout << "Resposta inválida. Por favor, digite 's' para sim ou 'n' para não." << endl;

            }
        }
       else{
        cout << "Resultado: " << p << " / " << s  << " = " << div << endl;
        
        cout << "Deseja realizar outra operação? (s/n): ";
        char t;
        cin >> t;
        if(t=='s'){
            true;
        }
        else if(t=='n'){
            cout << "Obrigado por usar a calculadora! Até a próxima.";
            break;
        }
        else{
            cout << "Resposta inválida. Por favor, digite 's' para sim ou 'n' para não." << endl;
            cout << "Deseja realizar outra operação? (s/n): ";
            char t;
            cin >> t;
            if(t=='s'){
                true;
            }
            else if(t=='n'){
                cout << "Obrigado por usar a calculadora! Até a próxima.";
                break;
            }
        }
    }
    }
    else if(o==5){
       
            cout << "Obrigado por usar a calculadora! Até a próxima.";
            break;
        
    }
}

}