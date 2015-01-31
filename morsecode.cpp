#include "Arduino.h"
#include "morsecode.h"

MorseCode::MorseCode(int pin, int dotLenMs)
{
    pinMode(pin, OUTPUT);
    _pin = pin;
    
    _dot = dotLenMs;
    _dash = (_dot * 3);
    _psilence = _dot;
    _lsilence = (_dot * 3);
    _wsilence = (_dot * 7);
}

void MorseCode::dot()
{
    digitalWrite(_pin, HIGH);
    delay(_dot);
}

void MorseCode::dash() { 
    digitalWrite(_pin, HIGH);
    delay(_dash);
}

void MorseCode::silencePart()
{
    digitalWrite(_pin, LOW);
    delay(_psilence);
}

void MorseCode::silenceLetter()
{
    digitalWrite(_pin, LOW);
    delay(_lsilence);
}

void MorseCode::silenceWord()
{
    digitalWrite(_pin, LOW);
    delay(_wsilence);
}

void MorseCode::fromChar(char c) {
    switch( c ) {
        case 'a': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'b': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'c': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'd': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'e': { 
            MorseCode::dot();
        } break;
        
        case 'f': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'g': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'h': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'i': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'j': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'k': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'l': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'm': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'n': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'o': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'p': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 'q': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'r': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 's': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case 't': { 
            MorseCode::dash();
        } break;
        
        case 'u': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'v': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'w': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'x': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'y': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case 'z': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case '1': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case '2': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case '3': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case '4': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
        
        case '5': { 
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case '6': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case '7': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case '8': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case '9': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dot();
        } break;
        
        case '0': { 
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
            MorseCode::silencePart();
            MorseCode::dash();
        } break;
    
        case ' ': { 
            MorseCode::silenceWord();
        } break;
        
        default:
            return;
    }
}

void MorseCode::fromStr(char *str)
{
    int strLen = strlen(str);
  
    for( int i = 0; i < strLen; i++ ) { 
        MorseCode::fromChar(tolower(str[i]));
        
        if( (i + 1) < strLen ) {
            MorseCode::silenceLetter();
        }
    }
    
    MorseCode::silenceWord();
}
