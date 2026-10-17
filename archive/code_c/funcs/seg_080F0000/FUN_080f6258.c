// undefined FUN_080f6258(void)
// entry 0x80f6258


undefined4 FUN_080f6258(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cd28(param_1);
  *(int *)(param_1 + 0x40) = param_1 + 0x5c;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080f62b8,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080f62bc;
  *(short *)(param_1 + 0x26) = (short)DAT_080f62c0;
  bVar3 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)(*(byte *)(param_1 + 0x11) >> 1) * 2 + DAT_080f631c));
  iVar2 = *(int *)(DAT_080f6320 + DAT_080f6324) + 0x800;
  *(int *)(param_1 + 0x58) = iVar2;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0x60) = iVar2;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return in_lr;
}


