# Arduino-LED-Changer-using-Speech-Recognition-in-Python

<h1>Welcome</h1>
<p>This is a simple project that uses Speech Recognition in Python to activate LEDs on Arduino</p>

<br/>

<h2> Requirements </h2>
<ul>
  <li><a href="https://jupyter.org/">Jupyter Notebook</a></li>
  <li><a href="https://pypi.org/project/SpeechRecognition/">SpeechRecognition</a></li>
  <li><a href="https://pypi.org/project/pyserial/">pyserial</a></li>
  <li>time</li>
  <li><a href="https://pypi.org/project/pyttsx3/">pyttsx3</a></li>
  <li>Arduino</li>
  <li>Microphone</li>
  
  
  </ul>
  
  <h2>How to use</h2>
  <ol>
  <li>Setup your LEDs on your Arduino on the following pins: red(9 and 11), yellow(12 and 10), green(8)   </li>
  <li>Clone this repository</li>
  <li>Open SpeechRecognition.ipynb using Jupyter Notebook</li>
  <li>Swap out "COM4" in the serial.Serial line into the port that your Arduino uses</li>
  <li>Run speechRecognitionLED.ino and SpeechRecognition.ipynb</li>
  <li>To activate, say "Arduino" clearly on your microphone</li>
  <li>To activate any LED, say its color after TTS replies "Yes,sir?"</li>
  </ol>
