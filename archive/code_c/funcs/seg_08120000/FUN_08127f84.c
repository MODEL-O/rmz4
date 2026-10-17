// undefined FUN_08127f84(void)
// entry 0x8127f84


undefined4 FUN_08127f84(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == DAT_08127fc0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
    uVar1 = (uint)*(byte *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x2c);
    if (uVar1 != 0) {
      do {
        FUN_08127388(param_1,iVar2);
        uVar1 = uVar1 - 1;
        iVar2 = iVar2 + 0x50;
      } while (0 < (int)uVar1);
    }
    *(int *)(param_1 + 0x34) = DAT_08127fc0;
  }
  return in_lr;
}


