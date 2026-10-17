// undefined FUN_08103ac4(void)
// entry 0x8103ac4


undefined4 FUN_08103ac4(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 in_lr;
  
  sVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08103b10);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_08103b6c,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08103b70);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
    FUN_08103b74(param_1);
  }
  return in_lr;
}


