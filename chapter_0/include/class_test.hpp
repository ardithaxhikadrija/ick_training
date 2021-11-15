class ClassTest
{
    public:
    ClassTest(void) = default;

    ClassTest(int _param);

    void setTestParameter(int _param);

    int sum(int a, int b);

    double sum(double a, double b);

    template<typename T, typename U>
    double sum(T a, U b)
    {
        return a + b;
    }

    int getTestParameter(void);

    ~ClassTest(void) = default;

    private:
        int test;
};