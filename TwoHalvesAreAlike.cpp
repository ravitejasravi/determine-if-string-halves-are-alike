class Solution {
public:
    bool halvesAreAlike(string s) {
        
        string first = s.substr(0, s.length() / 2);
        string second = s.substr(s.length() / 2, s.length() - 1);
        int firstCount = 0, secondCount = 0;
        string vowel = "aeiouAEIOU";

        for(int i = 0; i < first.length(); i++) {

            int index = vowel.find(first[i]);

            if(index != -1)
                firstCount += 1;
        }

        for(int i = 0; i < second.length(); i++) {

            int index = vowel.find(second[i]);

            if(index != -1)
                secondCount += 1;
        }

        return firstCount == secondCount;

    }
};