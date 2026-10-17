// tail-call returns callee value -> r0 stays live -> epilogue pops lr into r1, bx r1
int FUN_08008c4c(int,int,int);

int FUN_08008c38(int param_1,int param_2)
{
  return FUN_08008c4c(0xffffffff,param_1,param_2);
}
