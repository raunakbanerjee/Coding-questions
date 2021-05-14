/*
A pangram is a string that contains every letter of the alphabet. Given a sentence determine whether it is a pangram in the English alphabet

So basically I am having initially a freq array of all elements as 0.Then I will be iterating over the given string and storing each char in freq array.At the end if I see that 
and element in freq array is 0,that means its not a pangram

*/
string pangrams(string s) {
    int arr[26] = { 0 }; 
    for (int i=0;i<s.length();i++) {
        if (s[i] >= 97 && s[i] <= 122) arr[s[i] - 97] = 1;   //abcd
        else if (s[i] >= 65 && s[i] <= 90) arr[s[i] - 65] = 1; }
    for (int i = 0; i < 26; i++)
        if (arr[i] == 0) return "not pangram";
    return "pangram";
}
