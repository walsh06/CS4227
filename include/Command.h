#ifndef COMMAND_H
#define COMMAND_H

///The Command interface
///Contains a pure vitrual void method execute().
class Command
{
    public:
        virtual void execute() = 0;
    protected:
    private:
};

#endif // COMMAND_H
