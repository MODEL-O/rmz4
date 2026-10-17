// undefined FUN_080498c4(void)
// entry 0x80498c4


undefined4 FUN_080498c4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  byte abStack_1c [4];
  
  FUN_08129258(abStack_1c,DAT_0804997c,3);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08049980);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08049984);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08049988,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar1 = DAT_0804998c;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((abStack_1c[*(byte *)(param_1 + 0x11)] + 0x40 & 0xff) * 2 + DAT_0804998c) <<
       2;
  *(int *)(param_1 + 0x60) =
       (int)*(short *)((uint)abStack_1c[*(byte *)(param_1 + 0x11)] * 2 + iVar1) << 2;
  *(undefined1 *)(param_1 + 0x12) = 4;
  *(undefined1 *)(param_1 + 0xbd) = 1;
  FUN_080497fc(param_1);
  return in_lr;
}


