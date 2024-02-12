#include <iostream>
#include <string>

using namespace std;

int main(){
    
    char zodiacSign;
    int birthMonth, birthDay;

    cout << "Enter your birth month (1-12):" << endl;
    cin >> birthMonth;
    cout << "Enter your the day of the month you were born (1-31 Depending on your birth month):" << endl;
    cin >> birthDay;

    if ((birthMonth == 12 && birthDay >= 22 && birthDay <= 31) || (birthMonth == 1 && birthDay <= 19 && birthDay > 0)){
        zodiacSign = 'A';
    }
    else if ((birthMonth == 1 && birthDay >= 20 && birthDay <= 31) || (birthMonth == 2 && birthDay <= 18 && birthDay > 0)){
        zodiacSign = 'B';
    }
    else if ((birthMonth == 2 && birthDay >= 19 && birthDay <= 29) || (birthMonth == 3 && birthDay <= 20 && birthDay > 0)){
        zodiacSign = 'C';
    }
    else if ((birthMonth == 3 && birthDay >= 21 && birthDay <= 31) || (birthMonth == 4 && birthDay <= 19 && birthDay > 0)){
        zodiacSign = 'D';
    }
    else if ((birthMonth == 4 && birthDay >= 20 && birthDay <= 30) || (birthMonth == 5 && birthDay <= 20 && birthDay > 0)){
        zodiacSign = 'E';
    }
    else if ((birthMonth == 5 && birthDay >= 21 && birthDay <= 31) || (birthMonth == 6 && birthDay <= 20 && birthDay > 0)){
        zodiacSign = 'F';
    }
    else if ((birthMonth == 6 && birthDay >= 21 && birthDay <= 30) || (birthMonth == 7 && birthDay <= 22 && birthDay > 0)){
        zodiacSign = 'G';
    }
    else if ((birthMonth == 7 && birthDay >= 23 && birthDay <= 31) || (birthMonth == 8 && birthDay <= 22 && birthDay > 0)){
        zodiacSign = 'H';
    }
    else if ((birthMonth == 8 && birthDay >= 23 && birthDay <= 31) || (birthMonth == 9 && birthDay <= 22 && birthDay > 0)){
        zodiacSign = 'I';
    }
    else if ((birthMonth == 9 && birthDay >= 23 && birthDay <= 30) || (birthMonth == 10 && birthDay <= 22 && birthDay > 0)){
        zodiacSign = 'J';
    }
    else if ((birthMonth == 10 && birthDay >= 23 && birthDay <= 31) || (birthMonth == 11 && birthDay <= 21 && birthDay > 0)){
        zodiacSign = 'K';
    }
    else if ((birthMonth == 11 && birthDay >= 22 && birthDay <= 30) || (birthMonth == 12 && birthDay <= 21 && birthDay > 0)){
        zodiacSign = 'L';
    }
    else {
        cout << "Please make sure you are entering a number (1-12 for month and 1-31 for day)" << endl;
    }

    switch(zodiacSign) {
        case 'A':
            cout << "Capricorn: " << "With the new moon in Aquarius electrifying your security-conscious second house today,you’re on a quest to\n"
                << "boost your bottom line. The next two weeks are peak manifesting time, so be on the lookout for opportunities…then seize them\n"
                << "when you spot them! Let people know exactly what you’re after: freelance gigs, a new 9 to 5, a smart investment. You’re poised\n"
                << "to improve your finances, and being your strategic self will ensure your success. But you’ll also have help starting tonight\n"
                << "(Lunar New Year’s Eve) when the magical Wood Dragon takes the wheel for the remainder of the year." << endl;
            break;
        case 'B':
            cout << "Aquarius: " << "It’s time to update your OS when 2024’s only new moon in Aquarius sprinkles seeds of manifestation\n"
                << "that are sure to sprout over the next six months. Don’t make the mistake of underestimating this fresh-start lunar lift,\n"
                << "Water Bearer. Especially since tonight is Lunar New Year’s Eve, when the powerful Wood Dragon will take the baton from the\n"
                << "gentle Water Rabbit and rule the roost for the rest of the year. You might only be planting the seedlings now, but by the\n"
                << "full moon in your sign on August 19, they could be sky-high crops. During the following two weeks, polish your game plan,\n"
                << "tweaking as needed. Then be prepared to press launch and make this big dream a reality." << endl;
            break;
        case 'C':
            cout << "Pisces: " << "Pull back on the throttle, Fish. You’ve been going nonstop lately, and today’s Aquarius new moon in your restful,\n"
                << "replenishing twelfth house will feel like a relief. You’d rather contemplate questions and vibe your way to an answer anyway.\n"
                << "Fortunately, you’ll have a chance to do just that during the next two weeks—the peak manifesting period for these moonbeams.\n"
                << "In the process of pondering, journaling or meditating, consider whether it might be time to release something or someone from your life.\n"
                << "That’s the first step toward healing, and yes, it’s a necessary one. Tonight’s celebration of Lunar New Year’s Eve launches the Year\n"
                << "of the Wood Dragon. People will be clamoring for a piece of you, so it’s vital that you practice setting boundaries." << endl;
            break;
        case 'D':
            cout << "Aries: " << "Even autonomous Rams know that it takes a village to make your dreams a reality. Today’s Aquarius new moon activates\n"
                << "your collaboration camp, underscoring the importance of teamwork. Take a look around you and note who’s going the extra mile and who’s\n"
                << "killing everyone else’s buzz. With Lunar Year’s Eve beckoning the Wood Dragon to take over, you’re poised to accomplish your aims and\n"
                << "don’t need any dead weight dragging you down." << endl;
            break;
        case 'E':
            cout << "Taurus: " << "Today, the year’s only Aquarius new moon powers up your ambitious tenth house and launches a new chapter in your career.\n"
                << "Tonight is Lunar New Year’s Eve, and the Wood Dragon will help you to reach new heights. While that’s good news, you need clarity on\n"
                << "where you’re headed. How will you know you’re on the path to success if you haven’t mapped it out? During the next two weeks\n"
                << "(the manifesting period for this new moon), give your goals some serious thought and picture where you want to be in six months.\n"
                << "When you have that vision in your mind’s eye, you can start moving toward your target." << endl;
            break;
        case 'F':
            cout << "Gemini: " << "Stay true to your own vision, Gemini! With today’s Aquarius new moon revving up your expansive ninth house, you have a \n"
                << "burst of energy and inspiration to launch a big dream. What’s the most essential step you can take now (or during the next two weeks—peak \n"
                << "manifesting time for this lunar lift) to accomplish this? Whether you’re picturing yourself on a white-sand beach or have found the ideal \n"
                << "certificate program to enhance your toolbox, do your homework and then put the wheels in motion. But be sure you’re dreaming big enough.\n"
                << "It’s Lunar New Year’s Eve tonight, and the gentle Water Rabbit is handing the baton to the daring Wood Dragon, encouraging you to aim high." <<endl;
            break;
        case 'G':
            cout << "Cancer: " << "Buckle up, Cancer. The only Aquarius new moon of 2024 rocks your seductive eighth house today, nudging you to take a\n"
                << "budding bond to the next level. Coupled Crabs could finally feel ready to take a big step forward. Initiate the conversation and see\n"
                << "what happens. If you’re single, your relationship status could change during the next two peak manifesting weeks. But you need to do\n"
                << "something to meet the universe halfway. Luckily, the dynamic, sultry Wood Dragon will lend a hand as it takes the reins when Lunar\n"
                << "New Year’s Eve begins tonight." <<endl;
            break;
        case 'H':
            cout << "Leo: " << "What’s on your mind, Leo? Today’s unequivocal answer is “relationships!” as the Aquarius new moon activates your partnership\n"
                << "province. New romances could blossom without a lot of preliminary build-up, satisfying your craving for commitment. If you’re unattached,\n"
                << "you should make an effort to connect with more people, even if it requires you to give yet another dating app a go. This lunation also favors\n"
                << "creative collabs and business mergers. Transparent action and candid communication are important. Fortunately, the dynamic, daring Wood Dragon\n"
                << "is taking the wheel for the rest of the year, starting tonight, which is Lunar New Year’s Eve." <<endl;
            break;
        case 'I':
            cout << "Virgo: " << "Today’s new moon lands in Aquarius and your service-oriented, salubrious sixth house. If you’ve been waiting for the right\n"
                << "time to reboot your healthy lifestyle goals, this is one of the best days of the year for just that. The peak manifesting period is the\n"
                << "next two weeks, so create a list of goals (eat five servings of veggies and fruits each day, work out for half an hour five times a week)\n"
                << "and a realistic timeline for implementing changes. Tonight is Lunar New Year’s Eve, and the dynamic Wood Dragon is taking charge for the\n"
                << "rest of the year, so you’ll be overflowing with energy and determination." <<endl;
            break;
        case 'J':
            cout << "Libra: " << "Your charisma is skyrocketing while today’s Aquarius new moon jolts your amorous, glamorous fifth house, causing you to\n"
                << "turn heads wherever you go. If you’ve been off the grid lately, make a dramatic entrance. Tonight is Lunar New Year’s Eve, and the showy\n"
                << "Wood Dragon is stealing the scene for the rest of the year. (See ya, gentle Water Rabbit.) If you’re single, take the bull by the horns\n"
                << "and use apps like Bumble that put you in control. Or look for online groups you can join to meet kindred spirits. Lean into your passion,\n"
                << "and people will naturally be drawn to you. Dive back into a creative endeavor too—the muse has entered the building!" <<endl;
            break;
        case 'K':
            cout << "Scorpio: " << "No matter who’s been orbiting around you on Threads, TikTok or at the office, put your nearest and dearest first. Today\n"
                << "serves up the year’s only Aquarius new moon, and it’s powering up your sappy, homey fourth house. You might be more inclined to hang at\n"
                << "Château Scorpio in the next two weeks (peak manifesting time for these moonbeams). Feathering your nest, binge-watching and baking are all\n"
                << "up your alley now. You might want to have people over for a cozy game night or dinner party. Tonight is Lunar NYE, and the daring, dynamic\n"
                << "Wood Dragon is positioning you for growth. Consider who belongs on your team for the rest of the year. One last word of advice: Let inspiring,\n"
                << "supportive types into the VIP room!" <<endl;
            break;
        case 'L':
            cout << "Sagittarius: " << "Feeling blah, Sagittarius? Today’s new moon in Aquarius and your outgoing, curious third house can lift your spirits if \n"
                << "“meh” best describes your recent mood. You can break out of a rut by hopping on YouTube to learn how you can tackle a DIY project. Or you\n"
                << "might sign up for a new class to get those wheels turning. This lunar lift can boost your social life, and since it’s in quirky Aquarius,\n"
                << "you might find kindred spirits by checking out some eccentric spaces—in the virtual world and in the flesh. But don’t get locked into anything\n"
                << "too demanding. Tonight is Lunar New Year’s Eve, and since the indie Wood Dragon is ruling for the rest of the year, you need your beloved\n"
                << "freedom more than ever." << endl;
    }

    return 0;
}
