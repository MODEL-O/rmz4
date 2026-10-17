// undefined FUN_0807d60c(void)
// entry 0x807d60c


undefined4 FUN_0807d60c(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  FUN_08129258(auStack_c,DAT_0807d634,2);
  bVar1 = *(byte *)(param_1 + 0xbf);
  if ((bVar1 >> 1 & 1) == 0) {
    bVar1 = bVar1 | 2;
  }
  else {
    bVar1 = bVar1 & 0xfd;
  }
  *(byte *)(param_1 + 0xbf) = bVar1;
  *(undefined1 *)(param_1 + 0xd) = auStack_c[*(byte *)(param_1 + 0xbf) >> 1 & 1];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807d670));
  return in_lr;
}


