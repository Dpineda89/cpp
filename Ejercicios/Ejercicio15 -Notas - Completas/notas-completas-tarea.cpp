#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
    int nota = 0;

    cout << "Ingrese la nota que obtuvo ";
    cin >> nota;
    
    if (nota >= 96 && nota <= 100) {
        cout << "Obtubiste un A++";
    } else{
        if (nota >= 91 && nota <= 95) {
            cout << "Obtubiste un A+";
        } else {
            if (nota >= 86 && nota <= 90) {
            cout << "Obtubiste un A";
            } else {
                if (nota >= 81 && nota <= 85) {
                    cout << "Obtubiste un A-";
                } else {
                    if (nota >= 76 && nota <= 80) {
                        cout << "Obtubiste un B+";
                    } else {
                        if (nota >= 71 && nota <= 75) {
                        cout << "Obtubiste un B";
                        } else {
                            if (nota >= 66 && nota <= 70) {
                            cout << "Obtubiste un B-";
                            } else {
                                if (nota >= 61 && nota <= 65) {
                                    cout << "Obtubiste un C+";
                                } else {
                                    if (nota >= 56 && nota <= 60) {
                                        cout << "Obtubiste un C";
                                    } else {
                                        if (nota >= 51 && nota <= 55) {
                                            cout << "Obtubiste un C-";
                                        } else {
                                            if (nota >= 46 && nota <= 50) {
                                            cout << "Obtubiste un D+";
                                            } else {
                                                if (nota >= 41 && nota <= 45) {
                                                cout << "Obtubiste un D";
                                                } else {
                                                    if (nota >= 36 && nota <= 40) {
                                                        cout << "Obtubiste un D-";
                                                    } else {
                                                        if (nota >= 26 && nota <= 30) {
                                                            cout << "Obtubiste un E+";
                                                        } else {
                                                            if (nota >= 21 && nota <= 25) {
                                                                cout << "Obtubiste un E";
                                                            } else {
                                                                if (nota >= 16 && nota <= 20) {
                                                                    cout << "Obtubiste un E-";
                                                                } else {
                                                                    if (nota >= 11 && nota <= 15) {
                                                                        cout << "Obtubiste un F+";
                                                                    } else {
                                                                        if (nota >= 6 && nota <= 10) {
                                                                            cout << "Obtubiste un F";
                                                                        } else {
                                                                            if (nota >= 1 && nota <= 5) {
                                                                                cout << "Obtubiste un F-";
                                                                            } else {
                                                                                if (nota >= 0 && nota < 1) {
                                                                                    cout << "Obtiviste una F--";
                                                                                } else {                                                               
                                                                                       cout << "Ingrese una nota entre 0 - 100";
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } 
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        
                    }
                }
            }
        }
    
    
    return 0;
}
