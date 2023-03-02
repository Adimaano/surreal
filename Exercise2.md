What is the difference between git and github?
  - Git is the version control system, with which to create, remove, manage the project repository.
  - GitHub is a platform on which many repositories are stored and accessible, while also providing an interface for interacting (using some git tools) with the repositories through the browser.

Name 3 benefits of a version control system
  - Allows for a dynamic and collaborative workflow --> Parallel feature development by branching. 
  - High flexiblity for development cycles --> Rolling releases dont break other developers progress. --> just pull the changes from main.
  - Very effective Backup strategy --> Every change being a commit is logged and each can act as backup point to restore from. --> Very detailed change/development history with numerous restore points

Name 3 alternatives to git
  - Mercurial
  - SVN
  - Rational ClearCase.

Name 2 differences between git and other version control systems
  - Git uses a hash-based architecture (hash acts an for every commit)
  - distributed

Name known issues related to game engines (Unreal, Unity) and version control systems
  - Differences and thereby merging of binaries is just bad. Since that is what Games will be based on.
  - One of the biggest components of Game Development are the assets, which will come bundled in any game project. Differences there are also unmergable.
