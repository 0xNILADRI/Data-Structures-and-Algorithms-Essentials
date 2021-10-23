template<typename T>
class Vector{
    // data members
    int cs = 0;
    int ms = 1;
    T *arr;

    public:
        // constructor
        Vector(){
            arr = new T[ms];
        }
        Vector(int maxSize){
            ms=maxSize;
            arr = new T[ms];
        }

        // push back
        void push_back(const int d){
            if(cs == ms){
                // create new array with double the capacity
                T *oldarr = arr;
                ms = 2*ms;
                arr = new T[ms];

                // copy the elements
                for(int i=0; i<cs; i++){
                    arr[i] = oldarr[i];
                }

                // delete the old array
                delete []oldarr;
            }
            arr[cs] = d;
            cs++;
        }

        // pop back
        void pop_back(){
            if(cs>=0){
                cs--;
            }
            if(cs<0){
                cs=0;
            }
        }

        // isEmpty
        bool isEmpty() const{
            return cs==0;
        }

        // front
        T front() const{
            return arr[0];
        }

        //back
        T back() const{
            return arr[cs-1];
        }

        //at
        T at(int i) const{
            if(i<cs)
                return arr[i];
            else
                return -1;
        }

        // size
        int size() const{
            return cs;
        }

        // capacity
        int capacity() const{
            return ms;
        }

        //[]
        T operator[](const int i) const{
            if(i<cs)
                return arr[i];
            else
                return -1;
        }
};