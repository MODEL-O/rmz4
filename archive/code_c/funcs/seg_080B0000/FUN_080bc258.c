// undefined FUN_080bc258(void)
// entry 0x80bc258


undefined4 FUN_080bc258(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  byte abStack_18 [4];
  undefined4 local_14 [2];
  
  local_14[1] = DAT_080bc2c8[1];
  local_14[0] = *DAT_080bc2c8;
  FUN_08129258(abStack_18,DAT_080bc2cc,2);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,(uint)abStack_18[bVar1] * 0x18 + DAT_080bc2d0);
    FUN_0801cf00(param_1,*(undefined2 *)(local_14 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 6;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


