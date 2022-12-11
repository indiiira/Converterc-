#pragma once
#include <string>
ref class WebManager
{
    public string ConnectionAndSearch(string _moneyType)
    {
        string Money_course = "";
        string pattern = "";
        System.Net.WebClient wc = new System.Net.WebClient();
        string Response = wc.DownloadString("http://www.finmarket.ru/currency/rates/");
        if (_moneyType.Equals("euro"))
        {
            pattern = @"EUR</div><div class=""value"">(\d*,\d*)";
        }
        else if (_moneyType.Equals("dollar"))
        {
            pattern = @"USD</div><div class=""value"">(\d*,\d*)";
        }
        else if (_moneyType.Equals("funt"))
        {
            pattern = @"GBP</div><div class=""value"">(\d*,\d*)";
        }


        MatchCollection matches = Regex.Matches(Response, pattern);
        if (matches.Count > 0)
        {
            foreach(Match match in matches)
                Money_course = match.Groups[1].Value;
        }


        return Money_course;
    }

};

