// undefined FUN_080a8f60(void)
// entry 0x80a8f60


undefined4 FUN_080a8f60(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_0801cf00(param_1,DAT_080a9018);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080a901c,param_1 + 0x54,0x18);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080a9020;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined2 *)(param_1 + 0xbe) = 1000;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a9024);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080a9028(param_1);
  return in_lr;
}


