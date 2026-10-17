// undefined FUN_080f6f94(void)
// entry 0x80f6f94


undefined4 FUN_080f6f94(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if ((*(char *)(param_1 + 0xb5) == '\0') && (iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080f6fd4));
  return in_lr;
}


