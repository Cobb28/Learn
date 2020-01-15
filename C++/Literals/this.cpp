
struct S {
    
    int x;
    S& operator=(const S& other) 
    {
        x = other.x;
        // return a reference to the object being assigned t
        return this*;
    }
}