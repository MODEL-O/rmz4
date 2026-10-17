// undefined FUN_080fb6e8(void)
// entry 0x80fb6e8


undefined4 FUN_080fb6e8(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_08001d30(DAT_080fb748,
               ((uint)*(ushort *)(DAT_080fb74c + 0x17e) - (uint)(*(ushort *)(DAT_080fb748 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_080fb750,
               ((uint)*(ushort *)(DAT_080fb754 + 0x17e) - (uint)*(byte *)(DAT_080fb750 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801cf00(param_1,0xbf00);
  }
  else {
    FUN_0801cf00(param_1,DAT_080fb758);
  }
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080fb7f0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080fb7f4;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  uVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fb7f8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080fb7fc(param_1);
  return in_lr;
}


