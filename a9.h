void (*pc)();

void *expr, *env, *k, *x, *y, *a, *c;

struct expression;
typedef struct expression expression;
struct expression {
  enum {
    _const_expression,
    _var_expression,
    _if_expression,
    _mult_expression,
    _subr1_expression,
    _zero_expression,
    _letcc_expression,
    _throw_expression,
    _let_expression,
    _lambda_expression,
    _app_expression
  } tag;
  union {
    struct { void *_cexp; } _const;
    struct { void *_n; } _var;
    struct { void *_test; void *_conseq; void *_alt; } _if;
    struct { void *_nexpr1; void *_nexpr2; } _mult;
    struct { void *_nexp; } _subr1;
    struct { void *_nexp; } _zero;
    struct { void *_body; } _letcc;
    struct { void *_kexp; void *_vexp; } _throw;
    struct { void *_exp; void *_body; } _let;
    struct { void *_body; } _lambda;
    struct { void *_rator; void *_rand; } _app;
  } u;
};

void *expressionr_const(void *cexp);
void *expressionr_var(void *n);
void *expressionr_if(void *test, void *conseq, void *alt);
void *expressionr_mult(void *nexpr1, void *nexpr2);
void *expressionr_subr1(void *nexp);
void *expressionr_zero(void *nexp);
void *expressionr_letcc(void *body);
void *expressionr_throw(void *kexp, void *vexp);
void *expressionr_let(void *exp, void *body);
void *expressionr_lambda(void *body);
void *expressionr_app(void *rator, void *rand);

struct envr;
typedef struct envr envr;
struct envr {
  enum {
    _emptyr__m__env_envr,
    _extendr__m__env_envr
  } tag;
  union {
    struct { char dummy; } _emptyr__m__env;
    struct { void *_var; void *_val; void *_rest; } _extendr__m__env;
  } u;
};

void *envrr_emptyr__m__env();
void *envrr_extendr__m__env(void *var, void *val, void *rest);

void extendr__m__env();
void applyr__m__env();
struct closure;
typedef struct closure closure;
struct closure {
  enum {
    _maker__m__closure_closure
  } tag;
  union {
    struct { void *_body; void *_env; void *_kr__ex__; } _maker__m__closure;
  } u;
};

void *closurer_maker__m__closure(void *body, void *env, void *kr__ex__);

void applyr__m__closure();
struct cont;
typedef struct cont cont;
struct cont {
  enum {
    _emptyr__m__k_cont,
    _appr__m__continuation_cont,
    _appr__m__continuationr__m__r2_cont,
    _letr__m__continuation_cont,
    _throwr__m__continuation_cont,
    _throwr__m__continuationr__m__r2_cont,
    _ifr__m__continuation_cont,
    _multr__m__continuation_cont,
    _multr__m__continuationr__m__r2_cont,
    _zeror__m__continuation_cont,
    _subr1r__m__continuation_cont
  } tag;
  union {
    struct { void *_dismount; } _emptyr__m__k;
    struct { void *_ratorr__ex__; void *_envr__ex__; void *_kr__ex__; } _appr__m__continuation;
    struct { void *_xr__ex__; void *_kr__ex__; } _appr__m__continuationr__m__r2;
    struct { void *_bodyr__ex__; void *_envr__ex__; void *_kr__ex__; } _letr__m__continuation;
    struct { void *_vr__m__expr__ex__; void *_envr__ex__; } _throwr__m__continuation;
    struct { void *_xr__ex__; } _throwr__m__continuationr__m__r2;
    struct { void *_conseqr__ex__; void *_altr__ex__; void *_envr__ex__; void *_kr__ex__; } _ifr__m__continuation;
    struct { void *_nexpr2r__ex__; void *_envr__ex__; void *_kr__ex__; } _multr__m__continuation;
    struct { void *_xr__ex__; void *_kr__ex__; } _multr__m__continuationr__m__r2;
    struct { void *_kr__ex__; } _zeror__m__continuation;
    struct { void *_kr__ex__; } _subr1r__m__continuation;
  } u;
};

void *contr_emptyr__m__k(void *dismount);
void *contr_appr__m__continuation(void *ratorr__ex__, void *envr__ex__, void *kr__ex__);
void *contr_appr__m__continuationr__m__r2(void *xr__ex__, void *kr__ex__);
void *contr_letr__m__continuation(void *bodyr__ex__, void *envr__ex__, void *kr__ex__);
void *contr_throwr__m__continuation(void *vr__m__expr__ex__, void *envr__ex__);
void *contr_throwr__m__continuationr__m__r2(void *xr__ex__);
void *contr_ifr__m__continuation(void *conseqr__ex__, void *altr__ex__, void *envr__ex__, void *kr__ex__);
void *contr_multr__m__continuation(void *nexpr2r__ex__, void *envr__ex__, void *kr__ex__);
void *contr_multr__m__continuationr__m__r2(void *xr__ex__, void *kr__ex__);
void *contr_zeror__m__continuation(void *kr__ex__);
void *contr_subr1r__m__continuation(void *kr__ex__);

void applyr__m__k();
struct interpr__m__line;
typedef struct interpr__m__line interpr__m__line;
struct interpr__m__line {
  enum {
    _const_interpr__m__line,
    _mult_interpr__m__line,
    _subr1_interpr__m__line,
    _zero_interpr__m__line,
    _if_interpr__m__line,
    _letcc_interpr__m__line,
    _throw_interpr__m__line,
    _let_interpr__m__line,
    _var_interpr__m__line,
    _lambda_interpr__m__line,
    _app_interpr__m__line
  } tag;
  union {
    struct { void *_cexpr; } _const;
    struct { void *_nexpr1; void *_nexpr2; } _mult;
    struct { void *_nexp; } _subr1;
    struct { void *_nexp; } _zero;
    struct { void *_test; void *_conseq; void *_alt; } _if;
    struct { void *_body; } _letcc;
    struct { void *_kr__m__exp; void *_vr__m__exp; } _throw;
    struct { void *_e; void *_body; } _let;
    struct { void *_y; } _var;
    struct { void *_body; } _lambda;
    struct { void *_rator; void *_rand; } _app;
  } u;
};

void *interpr__m__liner_const(void *cexpr);
void *interpr__m__liner_mult(void *nexpr1, void *nexpr2);
void *interpr__m__liner_subr1(void *nexp);
void *interpr__m__liner_zero(void *nexp);
void *interpr__m__liner_if(void *test, void *conseq, void *alt);
void *interpr__m__liner_letcc(void *body);
void *interpr__m__liner_throw(void *kr__m__exp, void *vr__m__exp);
void *interpr__m__liner_let(void *e, void *body);
void *interpr__m__liner_var(void *y);
void *interpr__m__liner_lambda(void *body);
void *interpr__m__liner_app(void *rator, void *rand);

void valuer__m__ofr__m__cps();
int main();
int mount_tram();

struct _trstr;
typedef struct _trstr _trstr;
struct _trstr {
  jmp_buf *jmpbuf;
  int value;
};

