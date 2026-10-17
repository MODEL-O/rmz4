// undefined FUN_080fb1d4(void)
// entry 0x80fb1d4


undefined4 FUN_080fb1d4(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fb288);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080fb28c;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080fb290,param_1 + 0x54,0x10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080fb294;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x40) = param_1 + 100;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_080fb298(param_1);
  return in_lr;
}


