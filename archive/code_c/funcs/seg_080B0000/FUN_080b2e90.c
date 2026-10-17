// undefined FUN_080b2e90(void)
// entry 0x80b2e90


undefined4 FUN_080b2e90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar4 = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(param_1 + 10) = bVar4 | 2;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b2f3c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = bVar4 | 6;
  FUN_08005760(param_1 + 0x74,DAT_080b2f40,param_1 + 0x54,5);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b2f44;
  FUN_0801cf00(param_1,0xc600);
  *(undefined1 *)(param_1 + 0xb5) = 1;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
  if (((int)(uint)*(byte *)(DAT_080b2f48 + DAT_080b2f4c) >> *(sbyte *)(param_1 + 0x10) & 1U) == 0) {
    uVar2 = FUN_081012e4(param_1 + 0x54,0,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined1 *)(param_1 + 0xd) = 4;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar3 + DAT_080b2f7c;
  FUN_080b2f80(param_1);
  return in_lr;
}


