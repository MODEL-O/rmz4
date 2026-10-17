// undefined FUN_0803abb0(void)
// entry 0x803abb0


undefined4 FUN_0803abb0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(DAT_0803abe0 + DAT_0803abe4);
  uVar3 = *(ushort *)(iVar2 + 0x15a) & 0x10;
  if ((*(ushort *)(iVar2 + 0x15a) & 0x10) == 0) {
    if (1 < *(byte *)(iVar2 + 0xc0)) {
      return in_lr;
    }
    if (1 < *(byte *)(iVar2 + 0xc1)) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = 0;
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(uint *)(param_1 + 0x8c) = uVar3;
  *(uint *)(param_1 + 0x90) = uVar3;
  *(char *)(param_1 + 0x94) = (char)uVar3;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803ac30);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  return in_lr;
}


