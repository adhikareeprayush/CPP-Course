# 🍏 Setting Up Your Coding Environment on Mac!  

Hey there, Mac coders! 👋 In this guide, we’re going to set up **VS Code** and all the necessary tools for this course. A little patience will go a long way, but this is the **first and most important step** to get started! Let’s do this! 💪  

---

## ✅ Requirements  

### 1️⃣ Install **VS Code** 🖥️  
If you haven’t already installed **VS Code**, no worries! Just follow these steps:  

#### 📦 Install VS Code via Homebrew (Recommended)  
```sh
brew install --cask visual-studio-code
```  

Alternatively, you can **download VS Code manually** from:  
👉 [Download VS Code](https://code.visualstudio.com/download)  

---

### 2️⃣ Install **Clang Compiler** (Comes with Xcode) 🛠️  
Mac uses **Clang** instead of **G++**, and the good news is that it comes pre-installed with Xcode Command Line Tools! 🎉  

#### 🔍 Check Your Clang Version  
Open **Terminal** and run:  
```sh
clang --version
```  
If Clang isn’t installed or needs an update, follow these steps:  

#### 🏗 Install Xcode Command Line Tools  
```sh
xcode-select --install
```  

✅ **Verify the Installation**  
```sh
clang --version
```  

---

### 3️⃣ Install **Code Runner & Extensions** 🔌  
Once **VS Code** and the compiler are installed, let’s set up some **extensions** and get our project folder ready!  

#### 📁 Create Your Project Folder  
- Make a new folder where you’ll be following the course.  
- Open this folder in **VS Code**.  

#### 🔍 Install These Extensions  
Go to the **Extensions** tab in VS Code and install:  
✅ **Code Runner**  
✅ **C/C++ Extension Pack**  

#### ⚙️ Configure VS Code Settings  
- Inside your project folder, create a **.vscode** folder.  
- Inside `.vscode`, create a file called **settings.json**.  
- Copy and paste the following code into `settings.json`:  

  ```json
  {
      "files.associations": {
          "format": "cpp",
          "iostream": "cpp"
      },
      "code-runner.executorMap": {
          "cpp": "clang++ -std=c++20 -o \"$fileNameWithoutExt\" \"$fullFileName\" && ./\"$fileNameWithoutExt\""
      },
      "C_Cpp.errorSquiggles": "disabled"
  }
  ```

---

### 4️⃣ Configure **Code Runner** ⚡  
Just one last step! Let’s tweak **Code Runner** settings for a smooth experience.  

1. Open **VS Code Settings** by clicking the ⚙️ icon at the bottom left.  
2. Search for **"Run in terminal"** and make sure to **tick** this option.  

📸 ![alt text](image.png)  

---

### 5️⃣ Test Your Setup 🎯  

Let’s check if everything is working! 🚀  

1. Create a new file called **main.cpp** inside your project folder.  
2. Copy and paste this code:  

   ```cpp
   #include <iostream>
   #include <format>

   using std::cout;
   using std::format;

   int main() {
       cout << format("Hello {}!\n", "world");
   }
   ```
3. Click the **Run** ▶️ button at the top and select **Run Code**.  

📸 ![alt text](image-1.png)  

If you see this output, **congrats! 🎉 Your setup is complete!**  

📸 ![alt text](image-2.png)  

---

### 🎉 You’re Ready to Code!  
That’s it! Now you’re all set to start coding 🚀. If you run into any issues, **don’t worry**—just double-check the steps or ask for help! Happy coding! 😃🎯