/* 1. Write a C program and run it in command prompt.
    - gedit a.cpp
    - one random code
    - g++ -o rahim a.cpp
    - ./rahim

 */

/* 2. Write a C program then create a makefile and run the program using that makefile.
    - gedit a.cpp
    - #include<bits/stdc++.h>
      using namespace std;
      #include "head.h"

    int main()
    {
        cout<<"Hello World"<<endl;
        fun();
        return 0;
    }


    - gedit b.cpp
    - #include<bits/stdc++.h>
      #include "head.h"
      using namespace std;

      void fun()
      {
        cout<<"Hello I am Fun"<<endl;
      }

    - 3rd step header file creation
    - gedit head.h
    - void fun();

    - 4th step
    - gedit Makefile
    - all:
            g++ a.cpp b.cpp -o main

    - 5th step
    - make

    - 6th step
    - ./main

*/

/* 3. Write a C or C++ program that accepts a filename as command line argument and prints the file’s
contents on console. If the file does not exist, print some error on the screen.

    - gedit abc.cpp
        #include <bits/stdc++.h>
        using namespace std;
        int main(int a, char *arg[])
        {
            freopen(arg[1], "r", stdin);
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }

    - gedit input.txt (making a file)
    - 5
      1 5 3 4 7

    - g++ -o rahim abc.cpp
    - ./rahim "input.txt"
*/

/* 4. Create a program that creates a child process. The child process prints “I am a child process” 100
times in a loop. Whereas the parent process prints “I am a parent process” 100 times in a loop.

    - gedit process.cpp
    - g++ -o rahim process.cpp
    - ./rahim
            #include <bits/stdc++.h>
            using namespace std;

            int main()
            {
                pid_t pid = fork();

                if (pid < 0)
                {
                    cout << "Failed to create process" << endl;
                }

                if (pid = 0)
                {
                    // child process
                    for (int i = 1; i <= 100; i++)
                    {
                        cout << i << ". I'm child process" << endl;
                    }
                }

                else
                {
                    // parent process
                    for (int i = 1; i <= 100; i++)
                    {
                        cout << i << ". I'm parent process" << endl;
                    }
                }
            }

*/

/* 5. Write a program which uses fork ()/CreateProcess system-call to create a child process. The child
process prints the contents of the current directory and the parent process waits for the child
process to terminate.

    - use command to create cpp file

            #include <iostream>
            #include <unistd.h>
            #include <sys/wait.h>
            using namespace std;

            int main()
            {
                pid_t pid;
                pid = fork(); // create a child process

                if (pid == -1)
                {
                    cerr << "Failed to create a child process!" << endl;
                    return 1;
                }
                else if (pid == 0)
                {
                    // child process
                    execlp("ls", "ls", "-la", NULL); // print contents of the current directory
                    return 0;
                }
                else
                {
                    // parent process
                    int status;
                    waitpid(pid, &status, 0); // wait for the child process to terminate
                    cout << "Child process terminated with status " << status << endl;
                }
                return 0;
            }



*/


