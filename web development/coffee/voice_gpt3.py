import openai
import pyttsx3
import speech_recognition as sr
import time

#set your openai api key
openai.api_key=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

#initialize the txt to speech method
engine =pyttsx3.init()
def transcribe_audio_to_text(filename):

    recognizer=sr.Recognizer()
    with sr.AudioFile(filename) as source:
        audio=recognizer.record(source)
    try:
        return recognizer.recognize_google(audio)
    except:
        print("skipping unknown error")

def generate_response(prompt):
    response=openai.completion.create{
        engine ="text-davinci-003",
        prompt=prompt,
        max_token=4000,
        n=1,
        stop=None,
        temperature=0.5,


    }           

