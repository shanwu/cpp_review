#include <string> 
typedef struct putStringTag {
    private:
    std::string font_color;
    
    public:
    void put_str(std::string content);
    void set_color(std::string color);
    std::string get_color();   

} Put;

