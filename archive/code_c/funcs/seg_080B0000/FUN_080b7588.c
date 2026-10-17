// undefined FUN_080b7588(void)
// entry 0x80b7588


undefined4 FUN_080b7588(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  iVar3 = DAT_080b7624;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b7624);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080b7628,param_1 + 0x54,0x20);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b762c;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)((uint)*(byte *)(param_1 + 9) * 4 + iVar3) + 4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined4 *)(param_1 + 0x60) = DAT_080b7630;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0xb8) = iVar3 + DAT_080b7634;
  FUN_080b7638(param_1);
  return in_lr;
}


