import { initializeApp } from "firebase/app";
import { getAuth } from "firebase/auth";
import { getFirestore } from "firebase/firestore";
import { getStorage } from "firebase/storage";

const firebaseConfig = {
  apiKey: import.meta.env.VITE_API_KEY,
  authDomain: "chat-dedf6.firebaseapp.com",
  projectId: "chat-dedf6",
  storageBucket: "chat-dedf6.appspot.com",
  messagingSenderId: "1039330901674",
  appId: "1:1039330901674:web:8bec984ec2b4c2c3fd1ad3"
};

const app = initializeApp(firebaseConfig);

export const auth = getAuth()
export const db = getFirestore()
export const storage = getStorage()