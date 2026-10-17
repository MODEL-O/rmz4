// undefined FUN_080a3b0c(void)
// entry 0x80a3b0c


undefined4 FUN_080a3b0c(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080a3bdc);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x12) + '\x1a';
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080a3be0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080a3be4;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = (uint)*(byte *)(param_1 + 0x11) * 0x40 + 0x140;
  *(uint *)(param_1 + 0x5c) = uVar1;
  if (0x300 < uVar1) {
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5c);
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x10) & 1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a3be8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080a3bec(param_1);
  return in_lr;
}


