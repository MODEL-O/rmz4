// undefined FUN_0807ddd4(void)
// entry 0x807ddd4


undefined4 FUN_0807ddd4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  
  FUN_081292b8(auStack_14,0,2);
  FUN_08129258(auStack_10,DAT_0807de60,2);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *DAT_0807de64 = 0;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    if (*(int *)(param_1 + 0xd8) == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x3800;
      iVar1 = *(int *)(param_1 + 0xb4) + *(int *)(DAT_0807de68 + 8) + 0x7800;
      *(int *)(param_1 + 200) = iVar1;
      *(bool *)(param_1 + 0xbe) = iVar1 < *(int *)(*DAT_0807de6c + 0x54);
      *(undefined1 *)(param_1 + 0xd) = 0xc;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      FUN_08128f80(param_1,*(undefined4 *)(DAT_0807de70 + 0x30));
      return in_lr;
    }
    *(byte *)(param_1 + 0xbf) = *(byte *)(param_1 + 0xbf) | 4;
    FUN_0807e8c8(param_1,0);
    iVar1 = 0;
    if ((4 < *(byte *)(*DAT_0807df40 + 1)) && ((*(byte *)(DAT_0807df44 + 4) & 4) == 0)) {
      iVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x12) = auStack_14[iVar1];
    iVar1 = 0;
    if ((4 < *(byte *)(*DAT_0807df40 + 1)) && ((*(byte *)(DAT_0807df44 + 4) & 4) == 0)) {
      iVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x13) = auStack_10[iVar1];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807df4c) * 4 +
                        DAT_0807df48)));
  if ((*(char *)(*(int *)(param_1 + 0xd8) + 0xb5) != '\0') &&
     ((*(byte *)(param_1 + 0xbf) >> 2 & 1) != 0)) {
    if (*(byte *)(param_1 + 0x12) < *(byte *)(param_1 + 0x13)) {
      FUN_08128f84(param_1,*(int *)(param_1 + 0xd8) + 0x54,
                   *(undefined4 *)((uint)*(byte *)(param_1 + 0x12) * 4 + DAT_0807df74));
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    else {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


