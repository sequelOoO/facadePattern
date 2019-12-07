#include<iostream>


using namespace std;

class Robot {
public:
	virtual void doSomeThing(){}
};

class CleanRobot :public Robot {
public:
	virtual void doSomeThing() {
		cout << "clean the room" << endl;
	}
};
class MusicRobot :public Robot {
public:
	virtual void doSomeThing() {
		cout << "play music" << endl;
	}
};
class DanceRobot :public Robot {
public:
	virtual void doSomeThing() {
		cout << "show a dance" << endl;
	}
};

class RobotManager {
private:
	Robot* cleanRobot;
	Robot* musicRobot;
	Robot *danceRobot;
public:
	RobotManager() {
		cleanRobot = new CleanRobot();
		musicRobot = new MusicRobot();
		danceRobot = new DanceRobot();

	}
	void clean() {
		cleanRobot->doSomeThing();
	}
	void music() {
		musicRobot->doSomeThing();
	}
	void dance() {
		danceRobot->doSomeThing();
	}
};

int main() {
    CleanRobot cleanRobot;
MusicRobot musicRobot;
DanceRobot danceRobot;
    cleanRobot.doSomeThing();
    musicRobot.doSomeThing();
    danceRobot.doSomeThing();
    return 0;
//	RobotManager robotManager = RobotManager();
//	robotManager.clean();
//	robotManager.music();
//	robotManager.dance();
//	return 0;
}
