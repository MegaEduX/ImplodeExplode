//
//  ImplodeExplode.h
//
//  Created by Eduardo Almeida on 13/05/13.
//  No Copyright Taken.
//

#ifndef AdditionsHeader
#define AdditionsHeader

#include <iostream>

#include <sstream>
#include <fstream>

#include <vector>

namespace mex {
    std::vector<std::string> explode(const std::string &delimiter, const std::string &str);
    
    std::string implode(const std::string &delimiter, const std::vector<std::string> &vec);
    std::string implode(const std::string &delimiter, const std::vector<const char *> &vec);
}

#endif
