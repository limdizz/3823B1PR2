class Animal
{
protected:
	std::string type, breed, place;
	int age;
public:
	Animal(const std::string& t, const std::string& b, const std::string& p, int a) { type = t, breed = b, place = p, age = a; }
	virtual ~Animal() {}
	virtual void getVoice() const = 0;
	std::string getPlace() const { return place; }
	void moveTo(const std::string& newPlace) { place = newPlace; }
	int getAge() const { return age; }
	std::string getName() const { return type; }
};

class Wolf : public Animal {
public:
	Wolf(const std::string& p, int a) : Animal("White Fang", "Grey", p, a) {}
	void getVoice() const {
		std::cout << "Voice: " << "Woof" << std::endl;
	}
};

class Owl : public Animal {
public:
	Owl(const std::string& p, int a) : Animal("Soren", "Strix", p, a) {}
	void getVoice() const {
		std::cout << "Voice: "  << "Uuuuuuuuu" << std::endl;
	}
};

class Tiger : public Animal {
public:
	Tiger(const std::string& p, int a) : Animal("Hurricane", "Amur", p, a) {}
	void getVoice() const {
		std::cout << "Voice: " << "Raaaaawr" << std::endl;
	}
};