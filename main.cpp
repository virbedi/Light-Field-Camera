#include "Renderer.hpp"
#include "Scene.hpp"
#include "Triangle.hpp"
#include "Vector.hpp"
#include "global.hpp"
#include <chrono>

// In the main function of the program, we create the scene (create objects and
// lights) as well as set the options for the render (image width and height,
// maximum recursion depth, field-of-view, etc.). We then call the render
// function().
int main(int argc, char** argv)
{
    
    for (int i = 0; i < 10; i ++) {
        Scene scene(1280, 960);
        
        switch(i) {
            case 0:
            {
                /* SCENE 1: COMPLEX  All out of focus*/
                MeshTriangle cow1("../models/cow/cow.obj", -4, 3, 6, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow2("../models/cow/cow.obj", -3, 3, 4, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow3("../models/cow/cow.obj", -2, 3, 2, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow4("../models/cow/cow.obj", -1, 3, 0, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow5("../models/cow/cow.obj", 0, 3, -2, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny1("../models/bunny/bunny.obj", 0, 1, 6, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny2("../models/bunny/bunny.obj", 1.5, 1, 4, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny3("../models/bunny/bunny.obj", 3, 1, 2, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny4("../models/bunny/bunny.obj", 4.5, 1, 0, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny5("../models/bunny/bunny.obj", 6, 1, -2, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                scene.Add(&cow1);
                scene.Add(&cow2);
                scene.Add(&cow3);
                scene.Add(&cow4);
                scene.Add(&cow5);
                scene.Add(&bunny1);
                scene.Add(&bunny2);
                scene.Add(&bunny3);
                scene.Add(&bunny4);
                scene.Add(&bunny5);

                scene.focalDepth = 2;
                
            break;
            }

            case 1:
            {
                /* SCENE 1: COMPLEX First cow and bunny in focus*/
                MeshTriangle cow1("../models/cow/cow.obj", -4, 3, 6, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow2("../models/cow/cow.obj", -3, 3, 4, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow3("../models/cow/cow.obj", -2, 3, 2, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow4("../models/cow/cow.obj", -1, 3, 0, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow5("../models/cow/cow.obj", 0, 3, -2, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny1("../models/bunny/bunny.obj", 0, 1, 6, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny2("../models/bunny/bunny.obj", 1.5, 1, 4, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny3("../models/bunny/bunny.obj", 3, 1, 2, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny4("../models/bunny/bunny.obj", 4.5, 1, 0, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny5("../models/bunny/bunny.obj", 6, 1, -2, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                scene.Add(&cow1);
                scene.Add(&cow2);
                scene.Add(&cow3);
                scene.Add(&cow4);
                scene.Add(&cow5);
                scene.Add(&bunny1);
                scene.Add(&bunny2);
                scene.Add(&bunny3);
                scene.Add(&bunny4);
                scene.Add(&bunny5);

                scene.focalDepth = 4;
                
            break;
            }

            case 2:
            {
                /* SCENE 1: COMPLEX Second cow and bunny in focus*/
                MeshTriangle cow1("../models/cow/cow.obj", -4, 3, 6, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow2("../models/cow/cow.obj", -3, 3, 4, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow3("../models/cow/cow.obj", -2, 3, 2, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow4("../models/cow/cow.obj", -1, 3, 0, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow5("../models/cow/cow.obj", 0, 3, -2, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny1("../models/bunny/bunny.obj", 0, 1, 6, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny2("../models/bunny/bunny.obj", 1.5, 1, 4, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny3("../models/bunny/bunny.obj", 3, 1, 2, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny4("../models/bunny/bunny.obj", 4.5, 1, 0, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny5("../models/bunny/bunny.obj", 6, 1, -2, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                scene.Add(&cow1);
                scene.Add(&cow2);
                scene.Add(&cow3);
                scene.Add(&cow4);
                scene.Add(&cow5);
                scene.Add(&bunny1);
                scene.Add(&bunny2);
                scene.Add(&bunny3);
                scene.Add(&bunny4);
                scene.Add(&bunny5);

                scene.focalDepth = 6;
                
            break;
            }
            
            case 3:
            {
                /* SCENE 2  Cow In front is in focus*/
                MeshTriangle cow("../models/cow/cow.obj", -2, 3, 6, 1, MaterialType::DIFFUSE_AND_GLOSSY);
                scene.Add(&cow);
                MeshTriangle cow2("../models/cow/cow.obj", -2, 5, -20, 3, MaterialType::DIFFUSE_AND_GLOSSY);
                scene.Add(&cow2);
                scene.focalDepth = 4;
                break;
            }

            case 4:
            {
                /* SCENE 2 Cow behind is in focus*/
                MeshTriangle cow("../models/cow/cow.obj", -2, 3, 6, 1, MaterialType::DIFFUSE_AND_GLOSSY);
                scene.Add(&cow);
                MeshTriangle cow2("../models/cow/cow.obj", -2, 5, -20, 3, MaterialType::DIFFUSE_AND_GLOSSY);
                scene.Add(&cow2);
                scene.focalDepth = 17;
                break;
            }

            case 5:
            {
                //All bunnies are out of focus
              MeshTriangle bunny1("../models/bunny/bunny.obj", -1, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny2("../models/bunny/bunny.obj", 0.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny3("../models/bunny/bunny.obj", -5, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny4("../models/bunny/bunny.obj", -4.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny5("../models/bunny/bunny.obj", -4, 1, 0, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny6("../models/bunny/bunny.obj", 2, 1, -10, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny7("../models/bunny/bunny.obj", 5, 1, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny8("../models/bunny/bunny.obj", 7, 2, -10, 30, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny9("../models/bunny/bunny.obj", 4.5, 3, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny10("../models/bunny/bunny.obj", 4, 4, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);

               MeshTriangle bunny11("../models/bunny/bunny.obj", 0, 2, -30, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny12("../models/bunny/bunny.obj", 15, 3, -25, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny13("../models/bunny/bunny.obj", 12, 2, -30, 30, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny14("../models/bunny/bunny.obj", 20, 2, -15, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny15("../models/bunny/bunny.obj", 0, 1, -50, 60, MaterialType::DIFFUSE_AND_GLOSSY);
              //scene.Add(&bunny1);
              //scene.Add(&bunny2);
              scene.Add(&bunny3);
              scene.Add(&bunny4);
              scene.Add(&bunny5);
              scene.Add(&bunny6);
              scene.Add(&bunny7);
              scene.Add(&bunny8);
              scene.Add(&bunny9);
              scene.Add(&bunny10);

              scene.Add(&bunny11);
              scene.Add(&bunny12);
              scene.Add(&bunny13);
              scene.Add(&bunny14);
              scene.Add(&bunny15);

              scene.focalDepth = 2;
              break;  
            }

            case 6:
            {
                    //First bunny is clear 
                MeshTriangle bunny1("../models/bunny/bunny.obj", -1, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny2("../models/bunny/bunny.obj", 0.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny3("../models/bunny/bunny.obj", -5, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny4("../models/bunny/bunny.obj", -4.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny5("../models/bunny/bunny.obj", -4, 1, 0, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny6("../models/bunny/bunny.obj", 2, 1, -10, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny7("../models/bunny/bunny.obj", 5, 1, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny8("../models/bunny/bunny.obj", 7, 2, -10, 30, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny9("../models/bunny/bunny.obj", 4.5, 3, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny10("../models/bunny/bunny.obj", 4, 4, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);

                MeshTriangle bunny11("../models/bunny/bunny.obj", 0, 2, -30, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny12("../models/bunny/bunny.obj", 15, 3, -25, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny13("../models/bunny/bunny.obj", 12, 2, -30, 30, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny14("../models/bunny/bunny.obj", 20, 2, -15, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny15("../models/bunny/bunny.obj", 0, 1, -50, 60, MaterialType::DIFFUSE_AND_GLOSSY);
                //scene.Add(&bunny1);
                //scene.Add(&bunny2);
                scene.Add(&bunny3);
                scene.Add(&bunny4);
                scene.Add(&bunny5);
                scene.Add(&bunny6);
                scene.Add(&bunny7);
                scene.Add(&bunny8);
                scene.Add(&bunny9);
                scene.Add(&bunny10);

                scene.Add(&bunny11);
                scene.Add(&bunny12);
                scene.Add(&bunny13);
                scene.Add(&bunny14);
                scene.Add(&bunny15);

                scene.focalDepth = 4;
                break;  
            }

            case 7:
            {
                //First is blurred, second is clear 
                MeshTriangle bunny1("../models/bunny/bunny.obj", -1, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny2("../models/bunny/bunny.obj", 0.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny3("../models/bunny/bunny.obj", -5, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny4("../models/bunny/bunny.obj", -4.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny5("../models/bunny/bunny.obj", -4, 1, 0, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny6("../models/bunny/bunny.obj", 2, 1, -10, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny7("../models/bunny/bunny.obj", 5, 1, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny8("../models/bunny/bunny.obj", 7, 2, -10, 30, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny9("../models/bunny/bunny.obj", 4.5, 3, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny10("../models/bunny/bunny.obj", 4, 4, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);

                MeshTriangle bunny11("../models/bunny/bunny.obj", 0, 2, -30, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny12("../models/bunny/bunny.obj", 15, 3, -25, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny13("../models/bunny/bunny.obj", 12, 2, -30, 30, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny14("../models/bunny/bunny.obj", 20, 2, -15, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny15("../models/bunny/bunny.obj", 0, 1, -50, 60, MaterialType::DIFFUSE_AND_GLOSSY);
                //scene.Add(&bunny1);
                //scene.Add(&bunny2);
                scene.Add(&bunny3);
                scene.Add(&bunny4);
                scene.Add(&bunny5);
                scene.Add(&bunny6);
                scene.Add(&bunny7);
                scene.Add(&bunny8);
                scene.Add(&bunny9);
                scene.Add(&bunny10);

                scene.Add(&bunny11);
                scene.Add(&bunny12);
                scene.Add(&bunny13);
                scene.Add(&bunny14);
                scene.Add(&bunny15);

                scene.focalDepth = 6;
                break;  
            }

            case 8:
            {
                //First bunny is blurred, 3rd bunny is clear 
                
              MeshTriangle bunny1("../models/bunny/bunny.obj", -1, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny2("../models/bunny/bunny.obj", 0.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny3("../models/bunny/bunny.obj", -5, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny4("../models/bunny/bunny.obj", -4.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny5("../models/bunny/bunny.obj", -4, 1, 0, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny6("../models/bunny/bunny.obj", 2, 1, -10, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny7("../models/bunny/bunny.obj", 5, 1, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny8("../models/bunny/bunny.obj", 7, 2, -10, 30, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny9("../models/bunny/bunny.obj", 4.5, 3, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny10("../models/bunny/bunny.obj", 4, 4, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);

               MeshTriangle bunny11("../models/bunny/bunny.obj", 0, 2, -30, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny12("../models/bunny/bunny.obj", 15, 3, -25, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny13("../models/bunny/bunny.obj", 12, 2, -30, 30, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny14("../models/bunny/bunny.obj", 20, 2, -15, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny15("../models/bunny/bunny.obj", 0, 1, -50, 60, MaterialType::DIFFUSE_AND_GLOSSY);
              //scene.Add(&bunny1);
              //scene.Add(&bunny2);
              scene.Add(&bunny3);
              scene.Add(&bunny4);
              scene.Add(&bunny5);
              scene.Add(&bunny6);
              scene.Add(&bunny7);
              scene.Add(&bunny8);
              scene.Add(&bunny9);
              scene.Add(&bunny10);

              scene.Add(&bunny11);
              scene.Add(&bunny12);
              scene.Add(&bunny13);
              scene.Add(&bunny14);
              scene.Add(&bunny15);

              scene.focalDepth = 9;
              break;  
            }

            case 9:
            {
                //Bunnies far behind are clear, front is blurred 
                
                MeshTriangle bunny1("../models/bunny/bunny.obj", -1, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny2("../models/bunny/bunny.obj", 0.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny3("../models/bunny/bunny.obj", -5, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny4("../models/bunny/bunny.obj", -4.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny5("../models/bunny/bunny.obj", -4, 1, 0, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny6("../models/bunny/bunny.obj", 2, 1, -10, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny7("../models/bunny/bunny.obj", 5, 1, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny8("../models/bunny/bunny.obj", 7, 2, -10, 30, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny9("../models/bunny/bunny.obj", 4.5, 3, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny10("../models/bunny/bunny.obj", 4, 4, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);

                MeshTriangle bunny11("../models/bunny/bunny.obj", 0, 2, -30, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny12("../models/bunny/bunny.obj", 15, 3, -25, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny13("../models/bunny/bunny.obj", 12, 2, -30, 30, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny14("../models/bunny/bunny.obj", 20, 2, -15, 20, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny15("../models/bunny/bunny.obj", 0, 1, -50, 60, MaterialType::DIFFUSE_AND_GLOSSY);
                //scene.Add(&bunny1);
                //scene.Add(&bunny2);
                scene.Add(&bunny3);
                scene.Add(&bunny4);
                scene.Add(&bunny5);
                scene.Add(&bunny6);
                scene.Add(&bunny7);
                scene.Add(&bunny8);
                scene.Add(&bunny9);
                scene.Add(&bunny10);

                scene.Add(&bunny11);
                scene.Add(&bunny12);
                scene.Add(&bunny13);
                scene.Add(&bunny14);
                scene.Add(&bunny15);

                scene.focalDepth = 50;
                break;  
            }
            
            case 10:
            {
                /* SCENE 1: COMPLEX */
                MeshTriangle cow1("../models/cow/cow.obj", -4, 3, 6, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle cow2("../models/cow/cow.obj", -3, 3, 4, 1.f/3, MaterialType::DIFFUSE_AND_GLOSSY);
                
                MeshTriangle bunny4("../models/bunny/bunny.obj", 4.5, 1, 0, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                MeshTriangle bunny5("../models/bunny/bunny.obj", 6, 1, -2, 8, MaterialType::DIFFUSE_AND_GLOSSY);
                scene.Add(&cow1);
                scene.Add(&cow2);
                
                scene.Add(&bunny4);
                scene.Add(&bunny5);
               break; 
            }

            case 11:
            {
              MeshTriangle bunny1("../models/bunny/bunny.obj", 0, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny2("../models/bunny/bunny.obj", 1.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny3("../models/bunny/bunny.obj", -4, 1, 6, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny4("../models/bunny/bunny.obj", -3.5, 1, 4, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny5("../models/bunny/bunny.obj", -3, 1, 0, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny6("../models/bunny/bunny.obj", 0, 1, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny7("../models/bunny/bunny.obj", 1.5, 1, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny8("../models/bunny/bunny.obj", -4, 1, -20, 30, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny9("../models/bunny/bunny.obj", -3.5, 1, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              MeshTriangle bunny10("../models/bunny/bunny.obj", -3, 1, -20, 20, MaterialType::DIFFUSE_AND_GLOSSY);
              scene.Add(&bunny1);
              scene.Add(&bunny2);
              scene.Add(&bunny3);
              scene.Add(&bunny4);
              scene.Add(&bunny5);
              scene.Add(&bunny6);
              scene.Add(&bunny7);
              scene.Add(&bunny8);
              scene.Add(&bunny9);
              scene.Add(&bunny10);


              break;  
            }
            
        }
         scene.Add(std::make_unique<Light>(Vector3f(-20, 70, 20), 1));
        // scene.Add(std::make_unique<Light>(Vector3f(0, 0, 0), 5));
        scene.Add(std::make_unique<Light>(Vector3f(20, 70, 20), 1));
        scene.buildBVH();

        Renderer r;

        auto start = std::chrono::system_clock::now();
        r.Render(scene, i);
        auto stop = std::chrono::system_clock::now();

        std::cout << "Render complete: \n";
        std::cout << "Time taken: " << std::chrono::duration_cast<std::chrono::hours>(stop - start).count() << " hours\n";
        std::cout << "          : " << std::chrono::duration_cast<std::chrono::minutes>(stop - start).count() << " minutes\n";
        std::cout << "          : " << std::chrono::duration_cast<std::chrono::seconds>(stop - start).count() << " seconds\n";

    }
    

    


    





    // scene.Add(std::make_unique<Light>(Vector3f(-20, 70, 20), 1));
    // // scene.Add(std::make_unique<Light>(Vector3f(0, 0, 0), 5));
    // scene.Add(std::make_unique<Light>(Vector3f(20, 70, 20), 1));
    // scene.buildBVH();

    // Renderer r;

    // auto start = std::chrono::system_clock::now();
    // r.Render(scene);
    // auto stop = std::chrono::system_clock::now();

    // std::cout << "Render complete: \n";
    // std::cout << "Time taken: " << std::chrono::duration_cast<std::chrono::hours>(stop - start).count() << " hours\n";
    // std::cout << "          : " << std::chrono::duration_cast<std::chrono::minutes>(stop - start).count() << " minutes\n";
    // std::cout << "          : " << std::chrono::duration_cast<std::chrono::seconds>(stop - start).count() << " seconds\n";

    return 0;
}