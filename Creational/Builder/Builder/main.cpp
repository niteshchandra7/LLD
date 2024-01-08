#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

class HtmlElement {
    friend class HtmlBuilder;
    string name, text;
    vector<HtmlElement> elements;
    const size_t indent_size=2;

    HtmlElement(){}

    HtmlElement(const string &name, const string &text): name(name), text(text){}
    public:
    string str(int indent=0) const {
        ostringstream oss;
        string i(indent_size*indent,' ');
        oss << i << "<" << name << ">" << endl;
        if (text.size()>0)
            oss << string(indent_size*(indent+1),' ') << text << endl;
        for (const auto &e: elements)
            oss << e.str(indent+1);

        oss << i << "</" << name << ">" << endl;
        return oss.str();
    }

    // static HtmlBuilder create(string root_name){
    //     return HtmlBuilder{root_name};
    // }
};

class HtmlBuilder {
        public:
        HtmlElement root;
        HtmlBuilder(string root_name){
            root.name = root_name;
        }

        HtmlBuilder& add_child(string child_name, string child_text){
            HtmlElement e{child_name,child_text};
            root.elements.emplace_back(e);
            return *this;
        }

        string str() const {
            return root.str();
        }

        operator HtmlElement() {
            return root;
        }

        HtmlElement build() {
            return root;
        }
    };




int main(){
    HtmlBuilder builder{"ul"};
    builder.add_child("li","hello").add_child("li","world");
    cout << builder.str() << endl;

    auto builder2 = HtmlBuilder("ul").add_child("","");
    HtmlElement html_elem = HtmlBuilder("ul").add_child("","").build();
    cout << html_elem.str()<< endl;
}