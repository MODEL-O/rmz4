// undefined FUN_08080d98(void)
// entry 0x8080d98


undefined4 FUN_08080d98(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = *DAT_08080e50;
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x142) = *(byte *)(iVar1 + 0x142) | 0x40;
      *(undefined1 *)(iVar1 + 0xd) = 4;
      *(undefined1 *)(iVar1 + 0xe) = 0;
      *(uint *)(iVar1 + 0x128) = (uint)*(byte *)(param_1 + 0xb6) * 0x400 + DAT_08080e54;
      *(undefined4 *)(iVar1 + 300) = DAT_08080e58;
      *(undefined4 *)(iVar1 + 0x130) = 0;
      *(undefined4 *)(iVar1 + 0x134) = 0x40;
      *(undefined2 *)(iVar1 + 0x138) = 0x24;
    }
    FUN_0801cf00(param_1,DAT_08080e5c);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                         ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                         *(undefined1 *)(param_1 + 0x70)) + DAT_08080e64) * 8 +
                        DAT_08080e60)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 7;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


