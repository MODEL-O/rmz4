// undefined FUN_080caf0c(void)
// entry 0x80caf0c


undefined4 FUN_080caf0c(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080caf40);
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cafa8,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080caff4;
    iVar2 = (uint)*(byte *)(param_1 + 0x10) * 0x40 + DAT_080caff8;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1900;
    iVar2 = (uint)*(byte *)(param_1 + 0x10) * -0x40 + 0x2c0;
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080caffc;
  *(undefined4 *)(param_1 + 0x68) = 0x20;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cb000);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080cb004(param_1);
  return in_lr;
}


