// undefined FUN_080052d0(void)
// entry 0x80052d0


void FUN_080052d0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uVar1 = DAT_08005318;
  uVar2 = param_3 & 0xffffffe0;
  FUN_08128be0(param_2,param_1,uVar2 >> 2 & DAT_08005318);
  if ((param_3 & 0x1f) != 0) {
    FUN_08128be4(param_2 + uVar2,param_1 + uVar2,(param_3 & 0x1f) >> 2 & uVar1 | 0x4000000);
  }
  return;
}


