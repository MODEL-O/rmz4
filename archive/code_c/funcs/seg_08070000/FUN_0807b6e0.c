// undefined FUN_0807b6e0(void)
// entry 0x807b6e0


undefined4 FUN_0807b6e0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + DAT_0807b714;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807b718));
  return in_lr;
}


