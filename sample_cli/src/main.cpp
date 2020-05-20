#include <iostream>
#include <antlr4-runtime.h>
#include <CalcLexer.h>
#include <CalcParser.h>
#include <CalcParserBaseListener.h>
#include <variant>

#define _USE_MATH_DEFINES
#include <math.h>

#define PRINT_LINE(...) { printIndent(); std::cout << __VA_ARGS__ << std::endl; }

inline double evaluate_base(calc::CalcParser::ExprContext* ctx);

inline double evaluate(calc::CalcParser::LiteralExprContext* ctx)
{
    return std::atof(ctx->getText().c_str());
}

inline double evaluate(calc::CalcParser::PiLiteralExprContext* ctx)
{
    return M_PI;
}

inline double evaluate(calc::CalcParser::ExprGroupContext* ctx)
{
    return evaluate_base(ctx->expr());
}

inline double evaluate(calc::CalcParser::NegateExprContext* ctx)
{
    return -evaluate_base(ctx->expr());
}

inline double evaluate(calc::CalcParser::ExpExprContext* ctx)
{
    auto lhs = evaluate_base(ctx->lhs);
    auto rhs = evaluate_base(ctx->rhs);
    return std::pow(lhs, rhs);
}

inline double evaluate(calc::CalcParser::MultExprContext* ctx)
{
    auto lhs = evaluate_base(ctx->lhs);
    auto rhs = evaluate_base(ctx->rhs);
    return lhs * rhs;
}

inline double evaluate(calc::CalcParser::DivExprContext* ctx)
{
    auto lhs = evaluate_base(ctx->lhs);
    auto rhs = evaluate_base(ctx->rhs);
    return lhs / rhs;
}

inline double evaluate(calc::CalcParser::AddExprContext* ctx)
{
    auto lhs = evaluate_base(ctx->lhs);
    auto rhs = evaluate_base(ctx->rhs);
    return lhs + rhs;
}

inline double evaluate(calc::CalcParser::SubExprContext* ctx)
{
    auto lhs = evaluate_base(ctx->lhs);
    auto rhs = evaluate_base(ctx->rhs);
    return lhs - rhs;
}

inline double evaluate(calc::CalcParser::SqrtExprContext* ctx)
{
    return std::sqrt(evaluate_base(ctx->expr()));
}

inline double evaluate(calc::CalcParser::SinExprContext* ctx)
{
    auto val = evaluate_base(ctx->expr());
    //std::cout << "sin(" << std::to_string(val) << ")" << std::endl;
    return std::sin(val);
}

inline double evaluate(calc::CalcParser::CosExprContext* ctx)
{
    auto val = evaluate_base(ctx->expr());
    //std::cout << "cos(" << std::to_string(val) << ")" << std::endl;
    return std::cos(val);
}

inline double evaluate(calc::CalcParser::TanExprContext* ctx)
{
    auto val = evaluate_base(ctx->expr());
    //std::cout << "cos(" << std::to_string(val) << ")" << std::endl;
    return std::tan(val);
}

inline double evaluate_base(calc::CalcParser::ExprContext* ctx)
{
    using namespace calc;
    {
        auto literal = dynamic_cast<CalcParser::LiteralExprContext*>(ctx);
        if (literal) return evaluate(literal);
    }

    {
        auto expr = dynamic_cast<CalcParser::PiLiteralExprContext*>(ctx);
        if (expr) return evaluate(expr);
    }

    {
        auto group = dynamic_cast<CalcParser::ExprGroupContext*>(ctx);
        if (group) return evaluate(group);
    }

    {
        auto negate = dynamic_cast<CalcParser::NegateExprContext*>(ctx);
        if (negate) return evaluate(negate);
    }

    {
        auto exponent = dynamic_cast<CalcParser::ExpExprContext*>(ctx);
        if (exponent) return evaluate(exponent);
    }

    {
        auto mult = dynamic_cast<CalcParser::MultExprContext*>(ctx);
        if (mult) return evaluate(mult);
    }

    {
        auto div = dynamic_cast<CalcParser::DivExprContext*>(ctx);
        if (div) return evaluate(div);
    }

    {
        auto add = dynamic_cast<CalcParser::AddExprContext*>(ctx);
        if (add) return evaluate(add);
    }

    {
        auto sub = dynamic_cast<CalcParser::SubExprContext*>(ctx);
        if (sub) return evaluate(sub);
    }

    {
        auto expr = dynamic_cast<CalcParser::SqrtExprContext*>(ctx);
        if (expr) return evaluate(expr);
    }

    {
        auto expr = dynamic_cast<CalcParser::SinExprContext*>(ctx);
        if (expr) return evaluate(expr);
    }

    {
        auto expr = dynamic_cast<CalcParser::CosExprContext*>(ctx);
        if (expr) return evaluate(expr);
    }

    {
        auto expr = dynamic_cast<CalcParser::TanExprContext*>(ctx);
        if (expr) return evaluate(expr);
    }

    std::cerr << "Error: Unrecognized expression type for token " << ctx->start->getText() << std::endl;
    return 0;
}

namespace calc
{
    //class Error : public antlr4::exceptionlistene

    class Listener : public calc::CalcParserBaseListener
    {
    public:
        Listener() : indent(0) {}

        void printIndent()
        {
            for (int i = 0; i < indent; ++i)
            {
                std::cout << '\t';
            }
        }

        int indent;
    };
}

int main(int argc, char** argv)
{
    if (argc == 1)
    {
        std::cerr << 0 << std::endl;
        return 1;
    }

    /*
    std::ifstream stream;
    for (int i = 1; i < argc; ++i)
    {
        stream.open(argv[i]);
        if (stream.is_open())
        {
            antlr4::ANTLRInputStream input(stream);
            calc::CalcLexer lexer(&input);
            antlr4::CommonTokenStream tokens(&lexer);
            tokens.fill();

            calc::CalcParser parser(&tokens);

            try
            {
                auto tree = parser.root();
                if (tree->expr())
                {
                    std::cout << evaluate_base(tree->expr()) << std::endl;
                }
                std::cout << 0 << std::endl;
            }
            catch (std::exception& ex)
            {
                std::cerr << ex.what() << std::endl;
            }
        }
        else
        {
            std::cerr << "Failed to open input file " << argv[i] << std::endl;
        }
    }
    */
    std::string str;
    for(int i = 1; i < argc; ++i)
    {
        str.append(" ");
        str.append(argv[i]);
    }
    std::stringstream stream (str);
    
    {
        antlr4::ANTLRInputStream input(stream);
        calc::CalcLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        tokens.fill();

        calc::CalcParser parser(&tokens);
        try
        {
            auto tree = parser.root();
            if (tree->expr())
            {
                std::cout << evaluate_base(tree->expr()) << std::endl;
            }
            else
            {
                std::cout << 0 << std::endl;
            }
        }
        catch (std::exception& ex)
        {
            std::cerr << ex.what() << std::endl;
        }
    }
}