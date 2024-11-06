//  Created by Workspace 1 on 18/10/21.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
   NavigationView{
       
            List
            {
                Text("Hi i am chandan").foregroundColor(.red).bold().font(.title)
                Text("doing very fine!!").foregroundColor(.green).font(.headline)
                
            }

   }.navigationBarTitle(Text("hello")).foregroundColor(.red)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
//w
