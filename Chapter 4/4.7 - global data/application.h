class Application
{
private:
    static char *AppTitle;
    static char *AppFileName;

public:
    Application(void);
    ~Application(void);

    char *GetAppTitle();
    char *GetAppFileName();
};

Application::Application(void)
{
}

Application::~Application(void)
{
}