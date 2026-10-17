// undefined FUN_080807bc(void)
// entry 0x80807bc


undefined4 FUN_080807bc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08080880);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(*DAT_08080884 + 0x54);
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,0x1800);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08080888,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0808088c;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0x18;
  FUN_08080890(param_1);
  return in_lr;
}


