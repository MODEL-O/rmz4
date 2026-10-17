// undefined FUN_0810547c(void)
// entry 0x810547c


undefined4 FUN_0810547c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x1c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810551c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08105520,param_1 + 0x54,0x80);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08105524;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar2 + 0x800;
  FUN_0801cf00(param_1,0xa900);
  FUN_08105528(param_1);
  return in_lr;
}


