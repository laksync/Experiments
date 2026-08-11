from fastapi import FastAPI
from fastapi.middleware.cors import CORSMiddleware
app = FastAPI()
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_methods=["*"],
    allow_headers=["*"],
)
batches = [
    {"id": 1, "name": "CSE-A", "students": 60},
    {"id": 2, "name": "CSE-B", "students": 55},
    {"id": 3, "name": "CSE-C", "students": 58}
]

@app.get("/batches")
def get_batches():
    return batches