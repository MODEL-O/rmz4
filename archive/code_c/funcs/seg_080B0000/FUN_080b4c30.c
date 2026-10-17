// undefined FUN_080b4c30(void)
// entry 0x80b4c30


undefined4 FUN_080b4c30(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b4cb8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080b4cbc,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b4cc0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_080b564c(param_1);
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined1 *)(param_1 + 0xd) = 3;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_080b4ce0(param_1);
  return in_lr;
}


