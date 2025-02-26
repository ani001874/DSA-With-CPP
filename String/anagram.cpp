#include <iostream>
using namespace std;

bool isAnagram(string str)
{
    int *charArr = new int[26];

    for (int i = 0; i < str.length(); i++)
    {
        charArr[str[i] - 'a']++;
    }

  

    for (int i = 0; i < 26; i++)
    {
        if (charArr[i] == 0)
            return false;
    }

    return true;
}

bool areAnagram(string& s1,string& s2) {

    if(s1.length() != s2.length()) return false;
    if(s1.length() == 1) {
        if(s1[0] == s2[0]) {
            return true;
        }else {
            return false;
        }
    }
   int * freq1 = new int[26];
   int * freq2 = new int[26];

   for(int i = 0;i<s1.length();i++) freq1[s1[i] - 'a']++;
   for(int i = 0;i<s2.length();i++) freq2[s2[i] - 'a']++;

    for(int i = 0;i<26;i++) {
       if(freq1[i] != freq2[i]) return false;
    }
    return true;

}
int main()
{
    string str = "the quick brown fox jumps over the lazy dogs";
    cout << isAnagram(str) << endl;
    string s1 = "zshqjaeysiyqokxjvolpyzqwmgkhykzdpoqrirnfnxkulrpisoamthgzpwqbuhfmifpygnleyfcjkkemkjnajauzmmwuwatdamlvjjptnuvtmspqbpfflufdvycuolhxutyvlmlprrtgmrskiakzrjncaskeidpcbexcdwwvhignetjdvshvhqzvoxxqauevdkiubandwzkaxbvgjbbpqlxrrblkdsyscxzxgblzdztpupunlsfxsglbuwxdhucwmyiwmgkiqocfjcksupozfzukprjsstwhvfbizbyzqeaipqcxpxqevugwjvfyqrvufmmyvgodhktyvfiwmkhtzfoszvvyjrydcynvtgrsmbhdtylwirsnhprrdcjiufwlbhqkydhvznrpilbqmjwvuuxailyxisajyozxqfgycmujfbvzfhrbzeaeoeyejzmjxyauwmuucleapztpsadohvjkhflynuxtxutfgxjxynujnavujpmczxqnktbrnybqqkpaoswhfpkrzmcvegltvtxmhtzdiuoozpaxmvozbiuduepdilipxfpqlwlihkdbeapvswtmydvmwvmysrgxwoxbsjcqdmqotihibgiyutvxjvkbxsufqvlgzemrbukvtqfwjpijuztowkqcljtaonssovwondhgtaklnjfgmbwdfrsnrcgeijefwijlolfjrrzgeocchnvqebfrkvfofoubkejoqbirirmgdzdvtrbeatzciigcnunyhqktrhhfgzopgtmkqceaunboyhheomxuvswayqkpbnzriyaywiujrughmvqptxtzlicbyllnuzcvzdpsgyqktqvjqzcbsoxovvjksvlktgrdwppkczzgauvhyhayezlhdrxyfohkntfsxhklzsevognniqqtgzayblovhycfyluwzleerjcgvonpsqmbghvpgvugurxtlwjdjjhygqqldlqjodqebaanmlztjmjltyxqibao";
    string s2 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccccccccccccccccccccccccccccccdddddddddddddddddddddddddddddddddeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeffffffffffffffffffffffffffffffffffffggggggggggggggggggggggggggggggggggggghhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiijjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkllllllllllllllllllllllllllllllllllllllllllmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnoooooooooooooooooooooooooooooooooooooooppppppppppppppppppppppppppppppppppppppqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrssssssssssssssssssssssssssssssssssttttttttttttttttttttttttttttttttttttttttuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
 
    cout << areAnagram(s1,s2) << endl;
    
    return 0;
}