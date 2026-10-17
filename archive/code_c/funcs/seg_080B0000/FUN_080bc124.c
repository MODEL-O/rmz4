// undefined FUN_080bc124(void)
// entry 0x80bc124


undefined4 FUN_080bc124(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_2c [4];
  byte abStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 local_20 [2];
  
  local_20[1] = DAT_080bc1f0[1];
  local_20[0] = *DAT_080bc1f0;
  FUN_08129258(auStack_2c,DAT_080bc1f4,2);
  FUN_08129258(abStack_28,DAT_080bc1f8,2);
  FUN_08129258(auStack_24,DAT_080bc1fc,2);
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,(uint)abStack_28[bVar1] * 0x18 + DAT_080bc200);
    *(undefined4 *)(param_1 + 0x60) = 0x180;
    *(int *)(param_1 + 100) = *(int *)(iVar2 + 0xb8) + DAT_080bc204;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 100) <= *(int *)(param_1 + 0x58)) {
    FUN_08002b10(*(undefined2 *)(local_20 + bVar1));
    FUN_0801fe64(auStack_24[bVar1],param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
    *(undefined1 *)(param_1 + 0xd) = auStack_2c[bVar1];
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


