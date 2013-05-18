//
//  ImplodeExplode.cpp
//
//  Created by Eduardo Almeida on 13/05/13.
//  No Copyright Taken.
//

#include "ImpExp.h"

namespace mex {
    std::vector<std::string> explode(const std::string &delimiter, const std::string &str) {
        std::vector<std::string> arr;
        
        int strleng = (int) str.length();
        int delleng = (int) delimiter.length();
        
        if (delleng == 0)
            return arr;
        
        int i = 0;
        int k = 0;
        
        while (i < strleng) {
            int j = 0;
            while (i + j < strleng && j < delleng && str[i + j] == delimiter[j])
                j++;
            
            if (j == delleng) {
                arr.push_back(str.substr(k, i-k));
                i += delleng;
                k = i;
            } else {
                i++;
            }
        }
        
        arr.push_back(str.substr(k, i-k));
        return arr;
    }
    
    std::string implode(const std::string &delimiter, const std::vector<std::string> &vec) {
        std::string implodedStr;
        
        for (int i = 0; i < vec.size(); i++)
            implodedStr += vec[i];
        
        return implodedStr;
    }
    
    std::string implode(const std::string &delimiter, const std::vector<const char *> &vec) {
        std::string implodedStr;
        
        for (int i = 0; i < vec.size(); i++)
            implodedStr += vec[i];
        
        return implodedStr;
    }
}
