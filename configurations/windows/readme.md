# 🚀 Setting Up Your Coding Environment!  

Hey there, coders! 👋 In this guide, we’re going to get **VS Code** all set up for this course. A little patience will go a long way here, but this is the **first and most important step** to get started! Let’s do this! 💪  

---

## ✅ Requirements  

### 1️⃣ Install **VS Code** 🖥️  
If you haven’t already installed **VS Code**, no worries! Just click the link below and grab the version for your system.  

👉 [Download VS Code](https://code.visualstudio.com/download)  

---

### 2️⃣ Install **G++ Compiler 13+** 🛠️  
We need to make sure we have the correct version of the **G++ compiler** installed.  

#### 🔍 Check Your G++ Version  
Open **Windows PowerShell** and run this command:  
```sh
g++ --version
```  
If your version is **less than 13**, follow these steps:  

1. Download **MSYS2** from this link:  
   👉 [Get MSYS2](https://www.msys2.org/)  
2. After installing, the **UCRT64 environment** will open.  
3. Type the command below to install the latest **GCC compiler**:  
   ```sh
   pacman -S mingw-w64-ucrt-x86_64-gcc
   ```
4. Verify the installation by running this command again in **PowerShell**:  
   ```sh
   g++ --version
   ```
5. Add the folder `C:\msys64\ucrt64\bin` in your environment variables path.
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
          "cpp": "g++ -std=c++20 -o \"$fileNameWithoutExt.exe\" \"$fullFileName\" -lstdc++; if ($?) {./\"$fileNameWithoutExt.exe\"}"
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