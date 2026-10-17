// undefined FUN_0807b90c(void)
// entry 0x807b90c


undefined4 FUN_0807b90c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined1 auStack_14 [8];
  
  FUN_08129258(auStack_14,DAT_0807b970,5);
  iVar1 = FUN_0807e940(param_1,*(undefined4 *)(param_1 + 0x54));
  auStack_14[iVar1] = 0;
  iVar1 = FUN_0807eb38(auStack_14,5);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 0xb4) + *(int *)(iVar1 * 4 + DAT_0807b974) + 0x7800;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807b978));
  return in_lr;
}


