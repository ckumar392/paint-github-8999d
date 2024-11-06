/*
See LICENSE folder for this sample’s licensing information.

Abstract:
Main scene delegate.
*/

import UIKit

class SceneDelegate: UIResponder, UIWindowSceneDelegate {
    var window: UIWindow?
    
    /** Applications configure their UIWindow and attach the UIWindow to the provided UIWindowScene scene.
 
        Use this method to optionally configure and attach the UIWindow `window` to the provided UIWindowScene `scene`.
     
        If using a storyboard file, as specified by the Info.plist key, UISceneStoryboardFile,
        the window property automatically configures and attaches to the windowScene.
 
        Remember to retain the SceneDelegate UIWindow.
        The recommended approach is for the SceneDelegate to retain the scene's window.
    */
    func scene(_ scene: UIScene, willConnectTo session: UISceneSession, options connectionOptions: UIScene.ConnectionOptions) {

    }

    /** iOS calls this when the system is releasing the scene or on window close.
        This occurs shortly after the scene enters the background, or when discarding its session.
        Release any resources for this scene that you can create the next time the scene connects.
        The scene may reconnect later because the system doesn't necessarily discard its session
        (see`application:didDiscardSceneSessions` instead).
    */
    func sceneDidDisconnect(_ scene: UIScene) {
    }
    
    /** iOS calls this as the scene transitions from the background to the foreground, on window open, or in iOS resume.
        Use this method to undo the changes that occur on entering the background.
    */
    func sceneWillEnterForeground(_ scene: UIScene) {
    }
    
    /** iOS calls this as the scene transitions from the foreground to the background.
        Use this method to save data, release shared resources, and store enough scene-specific state information
        to restore the scene to its current state.
     */
    func sceneDidEnterBackground(_ scene: UIScene) {
    }
    
    /** iOS calls this when the scene is about to move from an active state to an inactive state, on window close, or in iOS enter background.
        This may occur due to temporary interruptions (such as, an incoming phone call).
    */
    func sceneWillResignActive(_ scene: UIScene) {
    }
    
    /** iOS calls this after the scene moves from an inactive state to an active state.
        Use this method to restart any paused tasks (or pending tasks) when the scene is inactive.
        The system calls this every time a scene becomes active, so set up your scene UI here.
    */
    func sceneDidBecomeActive(_ scene: UIScene) {
    }

}
