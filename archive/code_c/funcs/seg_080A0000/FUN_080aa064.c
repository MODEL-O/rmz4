// undefined FUN_080aa064(void)
// entry 0x80aa064


undefined4 FUN_080aa064(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    uVar2 = DAT_080aa0e0;
    if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
      uVar2 = DAT_080aa094;
    }
    iVar1 = FUN_0802adac(0,param_1,uVar2);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (*(int *)(param_1 + 0xc0) != 0) {
      FUN_08005784(param_1 + 0x74,DAT_080aa0e4);
      FUN_0801cf00(param_1,DAT_080aa0e8 + (uint)*(byte *)(param_1 + 0xbc) & 0xffff);
      FUN_080a9ba4(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  return in_lr;
}


