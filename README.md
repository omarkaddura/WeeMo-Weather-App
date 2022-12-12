Project Title:
WeeMo Weather App


Group Name:
WeeMo Inc. Ltd. LLC

Group Member’s Names:

Omar Kaddura,
Dewey Holland,
Zuleyma Baltazar,
Miguel Rodriguez,


Project Description

WeeMo Inc. Ltd. LLC™  intends to create a web application where its primary use is weather management. WeeMo strives to predict 5 full days of the most accurate weather.  Javascript, HTML5 and CSS are the main intended languages. CSS will be used to provide extra detail to the web pages developed and HTML will be used to provide the main structure of the website.Buttons will be implemented with animations to direct users to sub-pages. Javascript will be used to supplement any computational issues that cannot be solved with HTML. The software development model that WeeMo Inc. Ltd. LLC™ intends to use is the Spiral Model because it includes a section for risk management. For a small company like WeeMo Inc. Ltd. LLC™, WeeMo Inc. Ltd. LLC™ prides itself in ensuring the most accurate form of weather communication.The risks associated with miscommunication can lead to injury and even death of clients. To mitigate those risks WeeMo Inc. Ltd. LLC™ intends to have a backup WeatherAPI installed. OpenMateo is the backup option of WeeMo Inc. Ltd. LLC™ . To keep the project organized WeeMo Inc. Ltd. LLC™ intends to use GITHUB

To bootstrap a new Next.js application, we need to create a new project directory and install the required dependencies using NPM (Node.js Package Manager).

Open a new terminal window (Ctrl+Alt+T on Linux or Command+Space on Mac) and execute the command below to create a new project folder that will house your Next.js application (replace your-project with the name of your project):

Command
mkdir your-project
And cd into your new directory:

Command
cd your-project
Next, run this command to initiate a new Node.js application and create a package.json file in the root of your project:

Command
npm init -y
The npm init -y command creates a package.json file in the root of your project directory. The -y flag initializes the file with default values.

The package.json file will allow you to easily install and use NPM package dependencies in your project. It will also make things like sharing your project with other developers easier if you wish to do so in the future.

Check out the NPM documentation if you want to learn more about the contents of the package.json file.

Now that we have a package.json file created, we can install the required NPM package dependencies for your Next.js website.

To get started, we'll need the Next, React, and React-Dom NPM packages.

You can install all of them at once with this command:

Command
npm install --save next react react-dom

start the application in development mode with this command:

Command
npm run dev
