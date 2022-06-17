#include <setjmp.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "time.h"
#include "a9.h"

void *interpr__m__liner_const(void *cexpr) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _const_interpr__m__line;
  _data->u._const._cexpr = cexpr;
  return (void *)_data;
}

void *interpr__m__liner_mult(void *nexpr1, void *nexpr2) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _mult_interpr__m__line;
  _data->u._mult._nexpr1 = nexpr1;
  _data->u._mult._nexpr2 = nexpr2;
  return (void *)_data;
}

void *interpr__m__liner_subr1(void *nexp) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _subr1_interpr__m__line;
  _data->u._subr1._nexp = nexp;
  return (void *)_data;
}

void *interpr__m__liner_zero(void *nexp) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _zero_interpr__m__line;
  _data->u._zero._nexp = nexp;
  return (void *)_data;
}

void *interpr__m__liner_if(void *test, void *conseq, void *alt) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _if_interpr__m__line;
  _data->u._if._test = test;
  _data->u._if._conseq = conseq;
  _data->u._if._alt = alt;
  return (void *)_data;
}

void *interpr__m__liner_letcc(void *body) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _letcc_interpr__m__line;
  _data->u._letcc._body = body;
  return (void *)_data;
}

void *interpr__m__liner_throw(void *kr__m__exp, void *vr__m__exp) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throw_interpr__m__line;
  _data->u._throw._kr__m__exp = kr__m__exp;
  _data->u._throw._vr__m__exp = vr__m__exp;
  return (void *)_data;
}

void *interpr__m__liner_let(void *e, void *body) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _let_interpr__m__line;
  _data->u._let._e = e;
  _data->u._let._body = body;
  return (void *)_data;
}

void *interpr__m__liner_var(void *y) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _var_interpr__m__line;
  _data->u._var._y = y;
  return (void *)_data;
}

void *interpr__m__liner_lambda(void *body) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _lambda_interpr__m__line;
  _data->u._lambda._body = body;
  return (void *)_data;
}

void *interpr__m__liner_app(void *rator, void *rand) {
interpr__m__line* _data = (interpr__m__line*)malloc(sizeof(interpr__m__line));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _app_interpr__m__line;
  _data->u._app._rator = rator;
  _data->u._app._rand = rand;
  return (void *)_data;
}

void *contr_emptyr__m__k(void *dismount) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _emptyr__m__k_cont;
  _data->u._emptyr__m__k._dismount = dismount;
  return (void *)_data;
}

void *contr_appr__m__continuation(void *ratorr__ex__, void *envr__ex__, void *kr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _appr__m__continuation_cont;
  _data->u._appr__m__continuation._ratorr__ex__ = ratorr__ex__;
  _data->u._appr__m__continuation._envr__ex__ = envr__ex__;
  _data->u._appr__m__continuation._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *contr_appr__m__continuationr__m__r2(void *xr__ex__, void *kr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _appr__m__continuationr__m__r2_cont;
  _data->u._appr__m__continuationr__m__r2._xr__ex__ = xr__ex__;
  _data->u._appr__m__continuationr__m__r2._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *contr_letr__m__continuation(void *bodyr__ex__, void *envr__ex__, void *kr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _letr__m__continuation_cont;
  _data->u._letr__m__continuation._bodyr__ex__ = bodyr__ex__;
  _data->u._letr__m__continuation._envr__ex__ = envr__ex__;
  _data->u._letr__m__continuation._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *contr_throwr__m__continuation(void *vr__m__expr__ex__, void *envr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throwr__m__continuation_cont;
  _data->u._throwr__m__continuation._vr__m__expr__ex__ = vr__m__expr__ex__;
  _data->u._throwr__m__continuation._envr__ex__ = envr__ex__;
  return (void *)_data;
}

void *contr_throwr__m__continuationr__m__r2(void *xr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throwr__m__continuationr__m__r2_cont;
  _data->u._throwr__m__continuationr__m__r2._xr__ex__ = xr__ex__;
  return (void *)_data;
}

void *contr_ifr__m__continuation(void *conseqr__ex__, void *altr__ex__, void *envr__ex__, void *kr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _ifr__m__continuation_cont;
  _data->u._ifr__m__continuation._conseqr__ex__ = conseqr__ex__;
  _data->u._ifr__m__continuation._altr__ex__ = altr__ex__;
  _data->u._ifr__m__continuation._envr__ex__ = envr__ex__;
  _data->u._ifr__m__continuation._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *contr_multr__m__continuation(void *nexpr2r__ex__, void *envr__ex__, void *kr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _multr__m__continuation_cont;
  _data->u._multr__m__continuation._nexpr2r__ex__ = nexpr2r__ex__;
  _data->u._multr__m__continuation._envr__ex__ = envr__ex__;
  _data->u._multr__m__continuation._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *contr_multr__m__continuationr__m__r2(void *xr__ex__, void *kr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _multr__m__continuationr__m__r2_cont;
  _data->u._multr__m__continuationr__m__r2._xr__ex__ = xr__ex__;
  _data->u._multr__m__continuationr__m__r2._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *contr_zeror__m__continuation(void *kr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _zeror__m__continuation_cont;
  _data->u._zeror__m__continuation._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *contr_subr1r__m__continuation(void *kr__ex__) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _subr1r__m__continuation_cont;
  _data->u._subr1r__m__continuation._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *closurer_maker__m__closure(void *body, void *env, void *kr__ex__) {
closure* _data = (closure*)malloc(sizeof(closure));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _maker__m__closure_closure;
  _data->u._maker__m__closure._body = body;
  _data->u._maker__m__closure._env = env;
  _data->u._maker__m__closure._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *envrr_emptyr__m__env() {
envr* _data = (envr*)malloc(sizeof(envr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _emptyr__m__env_envr;
  return (void *)_data;
}

void *envrr_extendr__m__env(void *var, void *val, void *rest) {
envr* _data = (envr*)malloc(sizeof(envr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _extendr__m__env_envr;
  _data->u._extendr__m__env._var = var;
  _data->u._extendr__m__env._val = val;
  _data->u._extendr__m__env._rest = rest;
  return (void *)_data;
}

void *expressionr_const(void *cexp) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _const_expression;
  _data->u._const._cexp = cexp;
  return (void *)_data;
}

void *expressionr_var(void *n) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _var_expression;
  _data->u._var._n = n;
  return (void *)_data;
}

void *expressionr_if(void *test, void *conseq, void *alt) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _if_expression;
  _data->u._if._test = test;
  _data->u._if._conseq = conseq;
  _data->u._if._alt = alt;
  return (void *)_data;
}

void *expressionr_mult(void *nexpr1, void *nexpr2) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _mult_expression;
  _data->u._mult._nexpr1 = nexpr1;
  _data->u._mult._nexpr2 = nexpr2;
  return (void *)_data;
}

void *expressionr_subr1(void *nexp) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _subr1_expression;
  _data->u._subr1._nexp = nexp;
  return (void *)_data;
}

void *expressionr_zero(void *nexp) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _zero_expression;
  _data->u._zero._nexp = nexp;
  return (void *)_data;
}

void *expressionr_letcc(void *body) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _letcc_expression;
  _data->u._letcc._body = body;
  return (void *)_data;
}

void *expressionr_throw(void *kexp, void *vexp) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throw_expression;
  _data->u._throw._kexp = kexp;
  _data->u._throw._vexp = vexp;
  return (void *)_data;
}

void *expressionr_let(void *exp, void *body) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _let_expression;
  _data->u._let._exp = exp;
  _data->u._let._body = body;
  return (void *)_data;
}

void *expressionr_lambda(void *body) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _lambda_expression;
  _data->u._lambda._body = body;
  return (void *)_data;
}

void *expressionr_app(void *rator, void *rand) {
expression* _data = (expression*)malloc(sizeof(expression));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _app_expression;
  _data->u._app._rator = rator;
  _data->u._app._rand = rand;
  return (void *)_data;
}

int main()
{
expr = (void *)expressionr_let(expressionr_lambda(expressionr_lambda(expressionr_if(expressionr_zero(expressionr_var((void *)0)),expressionr_const((void *)1),expressionr_mult(expressionr_var((void *)0),expressionr_app(expressionr_app(expressionr_var((void *)1),expressionr_var((void *)1)),expressionr_subr1(expressionr_var((void *)0))))))),expressionr_mult(expressionr_letcc(expressionr_app(expressionr_app(expressionr_var((void *)1),expressionr_var((void *)1)),expressionr_throw(expressionr_var((void *)0),expressionr_app(expressionr_app(expressionr_var((void *)1),expressionr_var((void *)1)),expressionr_const((void *)4))))),expressionr_const((void *)5)));
env = (void *)envrr_emptyr__m__env();
pc = &valuer__m__ofr__m__cps;
mount_tram();
printf("Last value: %d\n", (int)x);}

void valuer__m__ofr__m__cps()
{
interpr__m__line* _c = (interpr__m__line*)expr;
switch (_c->tag) {
case _const_interpr__m__line: {
void *cexpr = _c->u._const._cexpr;
x = (void *)cexpr;
pc = &applyr__m__k;
break; }
case _mult_interpr__m__line: {
void *nexpr1 = _c->u._mult._nexpr1;
void *nexpr2 = _c->u._mult._nexpr2;
expr = (void *)nexpr1;
k = (void *)contr_multr__m__continuation(nexpr2,env,k);
pc = &valuer__m__ofr__m__cps;
break; }
case _subr1_interpr__m__line: {
void *nexp = _c->u._subr1._nexp;
expr = (void *)nexp;
k = (void *)contr_subr1r__m__continuation(k);
pc = &valuer__m__ofr__m__cps;
break; }
case _zero_interpr__m__line: {
void *nexp = _c->u._zero._nexp;
expr = (void *)nexp;
k = (void *)contr_zeror__m__continuation(k);
pc = &valuer__m__ofr__m__cps;
break; }
case _if_interpr__m__line: {
void *test = _c->u._if._test;
void *conseq = _c->u._if._conseq;
void *alt = _c->u._if._alt;
expr = (void *)test;
k = (void *)contr_ifr__m__continuation(conseq,alt,env,k);
pc = &valuer__m__ofr__m__cps;
break; }
case _letcc_interpr__m__line: {
void *body = _c->u._letcc._body;
expr = (void *)body;
x = (void *)k;
pc = &extendr__m__env;
pc = &valuer__m__ofr__m__cps;
break; }
case _throw_interpr__m__line: {
void *kr__m__exp = _c->u._throw._kr__m__exp;
void *vr__m__exp = _c->u._throw._vr__m__exp;
expr = (void *)kr__m__exp;
k = (void *)contr_throwr__m__continuation(vr__m__exp,env);
pc = &valuer__m__ofr__m__cps;
break; }
case _let_interpr__m__line: {
void *e = _c->u._let._e;
void *body = _c->u._let._body;
k = (void *)contr_letr__m__continuation(body,env,k);
expr = (void *)e;
pc = &valuer__m__ofr__m__cps;
break; }
case _var_interpr__m__line: {
void *yr__ex__ = _c->u._var._y;
y = (void *)yr__ex__;
pc = &applyr__m__env;
break; }
case _lambda_interpr__m__line: {
void *body = _c->u._lambda._body;
x = (void *)closurer_maker__m__closure(body,env,k);
pc = &applyr__m__k;
break; }
case _app_interpr__m__line: {
void *rator = _c->u._app._rator;
void *rand = _c->u._app._rand;
expr = (void *)rand;
k = (void *)contr_appr__m__continuation(rator,env,k);
pc = &valuer__m__ofr__m__cps;
break; }
}
}

void applyr__m__k()
{
cont* _c = (cont*)k;
switch (_c->tag) {
case _emptyr__m__k_cont: {
void *dismount = _c->u._emptyr__m__k._dismount;
_trstr *trstr = (_trstr *)dismount;
longjmp(*trstr->jmpbuf, 1);
break; }
case _appr__m__continuation_cont: {
void *ratorr__ex__ = _c->u._appr__m__continuation._ratorr__ex__;
void *envr__ex__ = _c->u._appr__m__continuation._envr__ex__;
void *kr__ex__ = _c->u._appr__m__continuation._kr__ex__;
expr = (void *)ratorr__ex__;
env = (void *)envr__ex__;
k = (void *)contr_appr__m__continuationr__m__r2(x,kr__ex__);
pc = &valuer__m__ofr__m__cps;
break; }
case _appr__m__continuationr__m__r2_cont: {
void *xr__ex__ = _c->u._appr__m__continuationr__m__r2._xr__ex__;
void *kr__ex__ = _c->u._appr__m__continuationr__m__r2._kr__ex__;
c = (void *)x;
a = (void *)xr__ex__;
k = (void *)kr__ex__;
pc = &applyr__m__closure;
break; }
case _letr__m__continuation_cont: {
void *bodyr__ex__ = _c->u._letr__m__continuation._bodyr__ex__;
void *envr__ex__ = _c->u._letr__m__continuation._envr__ex__;
void *kr__ex__ = _c->u._letr__m__continuation._kr__ex__;
expr = (void *)bodyr__ex__;
env = (void *)envr__ex__;
pc = &extendr__m__env;
k = (void *)kr__ex__;
pc = &valuer__m__ofr__m__cps;
break; }
case _throwr__m__continuation_cont: {
void *vr__m__expr__ex__ = _c->u._throwr__m__continuation._vr__m__expr__ex__;
void *envr__ex__ = _c->u._throwr__m__continuation._envr__ex__;
expr = (void *)vr__m__expr__ex__;
env = (void *)envr__ex__;
k = (void *)contr_throwr__m__continuationr__m__r2(x);
pc = &valuer__m__ofr__m__cps;
break; }
case _throwr__m__continuationr__m__r2_cont: {
void *xr__ex__ = _c->u._throwr__m__continuationr__m__r2._xr__ex__;
k = (void *)xr__ex__;
pc = &applyr__m__k;
break; }
case _ifr__m__continuation_cont: {
void *conseqr__ex__ = _c->u._ifr__m__continuation._conseqr__ex__;
void *altr__ex__ = _c->u._ifr__m__continuation._altr__ex__;
void *envr__ex__ = _c->u._ifr__m__continuation._envr__ex__;
void *kr__ex__ = _c->u._ifr__m__continuation._kr__ex__;
if(x) {
  expr = (void *)conseqr__ex__;
env = (void *)envr__ex__;
k = (void *)kr__ex__;
pc = &valuer__m__ofr__m__cps;

} else {
  expr = (void *)altr__ex__;
env = (void *)envr__ex__;
k = (void *)kr__ex__;
pc = &valuer__m__ofr__m__cps;

}
break; }
case _multr__m__continuation_cont: {
void *nexpr2r__ex__ = _c->u._multr__m__continuation._nexpr2r__ex__;
void *envr__ex__ = _c->u._multr__m__continuation._envr__ex__;
void *kr__ex__ = _c->u._multr__m__continuation._kr__ex__;
expr = (void *)nexpr2r__ex__;
env = (void *)envr__ex__;
k = (void *)contr_multr__m__continuationr__m__r2(x,kr__ex__);
pc = &valuer__m__ofr__m__cps;
break; }
case _multr__m__continuationr__m__r2_cont: {
void *xr__ex__ = _c->u._multr__m__continuationr__m__r2._xr__ex__;
void *kr__ex__ = _c->u._multr__m__continuationr__m__r2._kr__ex__;
k = (void *)kr__ex__;
x = (void *)(void *)((int)xr__ex__ * (int)x);
pc = &applyr__m__k;
break; }
case _zeror__m__continuation_cont: {
void *kr__ex__ = _c->u._zeror__m__continuation._kr__ex__;
k = (void *)kr__ex__;
x = (void *)(x == 0);
pc = &applyr__m__k;
break; }
case _subr1r__m__continuation_cont: {
void *kr__ex__ = _c->u._subr1r__m__continuation._kr__ex__;
k = (void *)kr__ex__;
x = (void *)(void *)((int)x - 1);
pc = &applyr__m__k;
break; }
}
}

void applyr__m__closure()
{
closure* _c = (closure*)c;
switch (_c->tag) {
case _maker__m__closure_closure: {
void *body = _c->u._maker__m__closure._body;
void *envr__ex__ = _c->u._maker__m__closure._env;
void *kr__ex__ = _c->u._maker__m__closure._kr__ex__;
expr = (void *)body;
x = (void *)a;
env = (void *)envr__ex__;
pc = &extendr__m__env;
pc = &valuer__m__ofr__m__cps;
break; }
}
}

void applyr__m__env()
{
envr* _c = (envr*)env;
switch (_c->tag) {
case _emptyr__m__env_envr: {
return(error(env));
break; }
case _extendr__m__env_envr: {
void *var = _c->u._extendr__m__env._var;
void *val = _c->u._extendr__m__env._val;
void *rest = _c->u._extendr__m__env._rest;
if((y == 0)) {
  x = (void *)val;
pc = &applyr__m__k;

} else {
  env = (void *)rest;
y = (void *)(void *)((int)y - 1);
pc = &applyr__m__env;

}
break; }
}
}

void extendr__m__env()
{
envr* _c = (envr*)env;
switch (_c->tag) {
case _emptyr__m__env_envr: {
env = (void *)envrr_extendr__m__env((void *)0,x,env);
break; }
case _extendr__m__env_envr: {
void *var = _c->u._extendr__m__env._var;
void *val = _c->u._extendr__m__env._val;
void *rest = _c->u._extendr__m__env._rest;
env = (void *)envrr_extendr__m__env((void *)((int)var + 1),x,env);
break; }
}
}

int mount_tram ()
{
srand (time (NULL));
jmp_buf jb;
_trstr trstr;
void *dismount;
int _status = setjmp(jb);
trstr.jmpbuf = &jb;
dismount = &trstr;
if(!_status) {
k= (void *)contr_emptyr__m__k(dismount);
for(;;) {
pc();
}
}
return 0;
}
