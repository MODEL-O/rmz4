// undefined FUN_080a9928(void)
// entry 0x80a9928


undefined4 FUN_080a9928(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      uVar2 = 0x200;
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + 0x10);
    }
    FUN_080e37a0(param_1 + 0x54,uVar2,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  else {
    FUN_080e37a0(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  iVar3 = param_1 + 0x54;
  if (*(ushort *)(DAT_080a99a4 + 0xc) <= DAT_080a99a8) {
    *(ushort *)(DAT_080a99a4 + 0xc) = *(ushort *)(DAT_080a99a4 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,iVar3);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0802ab88(2,0x26,iVar3);
  }
  else {
    FUN_0802ab88(2,0x27,iVar3);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a99d0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


