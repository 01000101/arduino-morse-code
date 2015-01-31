#ifndef MorseCode_h
#define MorseCode_h

class MorseCode
{
    public:
        // Constructor
        // "pin" => Arduino pin to set high/low
        // "dotLenMs" => Length (in milliseconds) of a Morse dot
        MorseCode(int pin, int dotLenMs);
        
        // String/Char -> Morse converter
        // Supports a-z,0-9
        void fromStr(char *);
        void fromChar(char);
        
        // Simple Morse "dot" / "dash"
        void dot();
        void dash();
        void silencePart();
        void silenceLetter();
        void silenceWord();
    private:
        // Pin to use
        int _pin;
        // Length of a dot / dash
        int _dot, _dash;
        // Length of a part / letter / word silence
        int _psilence, _lsilence, _wsilence;
};

#endif