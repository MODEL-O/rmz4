// undefined FUN_08002b7c(void)
// entry 0x8002b7c


void FUN_08002b7c(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  piVar1 = (int *)(((param_1 << 0x10) >> 0xd) + DAT_08002bb0);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + DAT_08002bac);
  if (*piVar2 == *piVar1) {
    FUN_0812794c(piVar2,(param_2 & 0xffff) >> 4);
  }
  return;
}


