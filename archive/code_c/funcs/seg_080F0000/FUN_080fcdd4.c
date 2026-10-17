// undefined FUN_080fcdd4(void)
// entry 0x80fcdd4


undefined4 FUN_080fcdd4(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *DAT_080fce20;
  iVar3 = *(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x54);
  *(byte *)(param_1 + 0xb5) = (byte)((uint)iVar3 >> 0x1f);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
        if (*(char *)(param_1 + 0x10) == '\x02') goto LAB_080fcf62;
        uVar1 = 2;
      }
      else {
        if (((*(char *)(param_1 + 0x10) != '\0') &&
            ((*(char *)(param_1 + 0x10) != '\x03' || (*(char *)(param_1 + 0xd) != '\x02')))) ||
           (0xf9 < *(short *)(param_1 + 0xa4))) goto LAB_080fcf62;
        uVar1 = 3;
      }
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else if (*(char *)(param_1 + 0x10) != '\x01') {
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_0803a578(iVar5,8,0);
    }
    goto LAB_080fcf62;
  }
  if (iVar3 < 0) {
    uVar4 = *(byte *)(param_1 + 0x11) - 1;
    if (((*(uint *)((((int)uVar4 >> 5) + 1) * 4 + DAT_080fceb8 + DAT_080fcebc) & 1 << (uVar4 & 0x1f)
         ) == 0) && (*(char *)(param_1 + 0x10) != '\x02')) {
      cVar2 = *(char *)(param_1 + 0x13);
      if (cVar2 != '\0') {
LAB_080fcef8:
        *(char *)(param_1 + 0x13) = cVar2 + -1;
        goto LAB_080fcf62;
      }
      if ((-1 < *(char *)(param_1 + 0xb4)) && (*(ushort *)(param_1 + 0xb6) != DAT_080fcec0)) {
LAB_080fcf20:
        FUN_08005784(param_1 + 0x74,*(char *)(param_1 + 0xb4) * 0x18 + DAT_080fcf40);
        goto LAB_080fcf62;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
  }
  else {
    uVar4 = *(byte *)(param_1 + 0x11) + 1;
    if (((*(uint *)((((int)uVar4 >> 5) + 1) * 4 + DAT_080fcf00 + DAT_080fcf04) & 1 << (uVar4 & 0x1f)
         ) != 0) || (*(char *)(param_1 + 0x10) == '\x02')) {
      *(undefined1 *)(param_1 + 0x13) = 1;
      FUN_08005784(param_1 + 0x74,DAT_080fcf80);
      goto LAB_080fcf62;
    }
    cVar2 = *(char *)(param_1 + 0x13);
    if (cVar2 != '\0') goto LAB_080fcef8;
    if ((-1 < *(char *)(param_1 + 0xb4)) && (*(ushort *)(param_1 + 0xb6) != DAT_080fcf3c))
    goto LAB_080fcf20;
  }
  FUN_08005784(param_1 + 0x74,DAT_080fcf50);
LAB_080fcf62:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080fcf84));
  FUN_0801cff0(param_1);
  return in_lr;
}


