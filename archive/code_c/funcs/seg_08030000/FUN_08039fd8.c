// undefined FUN_08039fd8(void)
// entry 0x8039fd8


undefined8 FUN_08039fd8(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 600) & 0x20000) != 0) &&
     ((2 < *(byte *)(param_1 + 0xc0) || (2 < *(byte *)(param_1 + 0xc1))))) {
    if (param_2 != (undefined1 *)0x0) {
      uVar2 = 5;
LAB_0803a09e:
      *param_2 = uVar2;
    }
LAB_0803a0a0:
    uVar3 = 1;
    goto LAB_0803a0de;
  }
  puVar4 = (uint *)(param_1 + 600);
  if ((*puVar4 & 0x1000) == 0) {
LAB_0803a048:
    if (*(char *)(param_1 + 0xc0) == '\x04') goto LAB_0803a04e;
  }
  else {
    if (*(byte *)(param_1 + 0xc0) != 4) {
      cVar1 = FUN_08128f80(param_1,*(undefined4 *)
                                    ((uint)*(byte *)(param_1 + 0xc0) * 4 + DAT_0803a044));
      if (cVar1 != '\0') {
        if (param_2 != (undefined1 *)0x0) {
          uVar2 = *(undefined1 *)(param_1 + 0xc0);
          goto LAB_0803a09e;
        }
        goto LAB_0803a0a0;
      }
      goto LAB_0803a048;
    }
LAB_0803a04e:
    if (((*puVar4 & 0x2000) != 0) && ((*(ushort *)(param_1 + DAT_0803a0a4) & 0x8000) == 0)) {
      *(undefined1 *)(param_1 + DAT_0803a0a8) = 1;
    }
  }
  if ((*puVar4 & 0x4000) == 0) {
LAB_0803a0b0:
    if (*(char *)(param_1 + 0xc1) == '\x04') goto LAB_0803a0b6;
  }
  else {
    if (*(byte *)(param_1 + 0xc1) != 4) {
      cVar1 = FUN_08128f80(param_1,*(undefined4 *)
                                    ((uint)*(byte *)(param_1 + 0xc1) * 4 + DAT_0803a0ac));
      if (cVar1 != '\0') {
        if (param_2 != (undefined1 *)0x0) {
          uVar2 = *(undefined1 *)(param_1 + 0xc1);
          goto LAB_0803a09e;
        }
        goto LAB_0803a0a0;
      }
      goto LAB_0803a0b0;
    }
LAB_0803a0b6:
    if (((*puVar4 & 0x8000) != 0) && ((*(ushort *)(param_1 + DAT_0803a0e4) & 0x8000) == 0)) {
      *(byte *)(param_1 + DAT_0803a0e8) = *(byte *)(param_1 + DAT_0803a0e8) ^ 1;
    }
  }
  uVar3 = 0;
LAB_0803a0de:
  return CONCAT44(in_lr,uVar3);
}


