#include <iostream>
#include <vector>
#include <string>
#include <map>



    class alphab
    {
        private:
            int wordcount;
            std::map<std::string, int> alpha;

            void init()
            {
                wordcount = 1;

                push_alpha("a");
                push_alpha("b");
                push_alpha("c");
                push_alpha("d");
                push_alpha("e");
                push_alpha("f");
                push_alpha("g");
                push_alpha("h");
                push_alpha("i");
                push_alpha("j");
                push_alpha("k");
                push_alpha("l");
                push_alpha("m");
                push_alpha("n");
                push_alpha("o");
                push_alpha("p");
                push_alpha("q");
                push_alpha("r");
                push_alpha("s");
                push_alpha("t");
                push_alpha("u");
                push_alpha("v");
                push_alpha("w");
                push_alpha("x");
                push_alpha("y");
                push_alpha("z");
            }

            void push_alpha(std::string letter)
            {
                alpha[letter] = wordcount;
                wordcount += 1;
            }
            std::string getString(char x) 
            { 
                // string class has a constructor 
                // that allows us to specify size of 
                // string as first parameter and character 
                // to be filled in given size as second 
                // parameter. 
                std::string s(1, x); 
            
                return s;    
            } 

        public:
            alphab(){
                init();
            }
            ~alphab(){}



            int getLetterPlace(std::string letter)
            {
                return alpha[letter];
            }

            bool isLetterPlaceBigger(std::string letter1, std::string letter2)
            {
                if(getLetterPlace(letter1) < getLetterPlace(letter2))
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            bool isLetterPlaceLower(std::string letter1, std::string letter2)
            {
                if(getLetterPlace(letter1) > getLetterPlace(letter2))
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }

            int compareLetter(std::string letter1, std::string letter2)
            {
                if(getLetterPlace(letter1) < getLetterPlace(letter2))
                {
                    return 2; //letter2 place is bigger
                }
                else
                {
                    return 1; //letter1 place is bigger
                }
            }
            int compareString(std::string string1, std::string string2)
            {
                for(char& c1 : string1)
                {
                    for(char& c2 : string2)
                    {
                        if(c1 == c2)
                        {
                            goto cnt;
                        }
                        else
                        {
                            if(getLetterPlace(getString(c1)) > getLetterPlace(getString(c2)))
                            {
                                return 1;
                            }
                            else
                            {
                               return 2;
                            }
                            
                        }
                        
                    }
                    cnt:;
                }
            }
    };

