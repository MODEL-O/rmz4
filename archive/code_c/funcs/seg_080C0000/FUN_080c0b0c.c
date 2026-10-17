// undefined FUN_080c0b0c(void)
// entry 0x80c0b0c


undefined4 FUN_080c0b0c(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  byte abStack_18 [4];
  undefined4 local_14 [2];
  
  local_14[1] = DAT_080c0b68[1];
  local_14[0] = *DAT_080c0b68;
  FUN_08129258(abStack_18,DAT_080c0b6c,2);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,(uint)abStack_18[bVar1] * 0x18 + DAT_080c0b70);
    FUN_0801cf00(param_1,*(undefined2 *)(local_14 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


