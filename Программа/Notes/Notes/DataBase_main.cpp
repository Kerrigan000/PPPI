/**
 * @brief Класс для работы с базой данных
 * @author Василенко Даниил Евгеньевич
 */
class DB {
	string password;
	string login;
	string ip;
	string port;

	DB() {
		// Constructor
	}

	~DB() {
		// Destructor
	}

	/**
	 * @brief Добавляет заметку в базу данных
	 * @param note Заметка, которая будет включена в базу данных
	 * @author Василенко Даниил Евгеньевич
	 */
	void addNote(const Note& note) {
		// Добавление заметки 
	}

	deleteNote() {
		// Удаление заметки
	}

	modifyNote() {
		// Изменение заметки
	}
}