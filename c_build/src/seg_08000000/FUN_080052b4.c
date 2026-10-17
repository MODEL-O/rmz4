// Ghidra uStack_4=in_lr;return uStack_4 is void noise -> void avoids r4 spill
void FUN_08128be0(int*,int,int);
void FUN_080052b4(int param_1)
{
  int local_c[2];
  local_c[0] = 0;
  FUN_08128be0(local_c, param_1, 0x1000200);
}
