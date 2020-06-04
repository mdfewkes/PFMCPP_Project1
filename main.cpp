#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       puppy
//  action 1:   chew
puppy.chew();
//  action 2:   bark
puppy.bark();
//  action 3:   sleep
puppy.sleep()

//  2)
//  Noun:       cell phone
//  action 1:   call
cellPhone.call();
//  action 2:   text
cellPhone.text();
//  action 3:   vibrate
cellPhone.vibrate();

//  3)
//  Noun:       bumble bee
//  action 1:   fly
bumbleBee.fly();
//  action 2:  collect pollen 
bumbleBee.collectPollen();
//  action 3:   sting
bumbleBee.sting();

//  4)
//  Noun:       mouse
//  action 1:   scroll
mouse.scroll();
//  action 2:   drag
mouse.drag();
//  action 3:   click
mouse.click();

//  5)
//  Noun:       bluetooth speaker
//  action 1:   connect
bluetoothSpeaker.connect();
//  action 2:   play
bluetoothSpeaker.play();
//  action 3:   stop
bluetoothSpeaker.stop();

//  6)
//  Noun:       car
//  action 1:   drive
car.drive();
//  action 2:   stear
car.stear();
//  action 3:   break
car.break();

//  7)
//  Noun:      chicken 
//  action 1:   lay egg
chicken.layEgg();
//  action 2:   cluck
chicken.cluck();
//  action 3:   peck
chicken.peck();

//  8)
//  Noun:       knife
//  action 1:   cut
knife.cut();
//  action 2:   slice
knife.slice();
//  action 3:   spread
knife.spread();

//  9)
//  Noun:       water
//  action 1:   boil
water.boil();
//  action 2:   freeze
water.freeze();
//  action 3:   evaporate
water.evaporate();

//  10)
//  Noun:       camera
//  action 1:   snap photo
camera.snapPhoto();
//  action 2:   zoom
camera.zoom();
//  action 3:   calculate white balance
camera.calculateWhiteBalance();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
