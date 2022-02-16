// Import the functions you need from the SDKs you need
import { initializeApp } from "firebase/app";
import { getAnalytics } from "firebase/analytics";
// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

// Your web app's Firebase configuration
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyBwONBgwJxCaoN0hA1bl6vsw_cUN0htlHY",
  authDomain: "photography-a9d5a.firebaseapp.com",
  projectId: "photography-a9d5a",
  storageBucket: "photography-a9d5a.appspot.com",
  messagingSenderId: "819734085255",
  appId: "1:819734085255:web:05f2d515d4aa764f15c222",
  measurementId: "G-HJYBFGNFKB"
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
const analytics = getAnalytics(app);