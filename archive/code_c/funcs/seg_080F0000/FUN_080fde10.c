// undefined FUN_080fde10(void)
// entry 0x80fde10


undefined4 FUN_080fde10(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    return in_lr;
  }
  *(ushort *)(param_1 + 0xb6) = (ushort)DAT_080fde68;
  FUN_0801cf00(param_1);
  pcVar2 = (char *)(param_1 + 0xb4);
  *pcVar2 = *(char *)(DAT_080fde6c + 1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if ((*pcVar2 < '\0') || (*(ushort *)(param_1 + 0xb6) == DAT_080fde70)) {
    FUN_08005784(param_1 + 0x74,DAT_080fdea0);
  }
  else {
    FUN_08005784(param_1 + 0x74,*pcVar2 * 0x18 + DAT_080fde74);
  }
  if (*pcVar2 < '\x01') {
    if ((*pcVar2 != '\0') ||
       (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == -0x6100)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      goto LAB_080fdee4;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    iVar1 = DAT_080fded4;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    iVar1 = *pcVar2 * 8 + DAT_080fdea4;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  *(short *)(param_1 + 0x26) = (short)DAT_080fded8;
LAB_080fdee4:
  puVar3 = (uint *)(((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4 + DAT_080fdf18 + DAT_080fdf1c);
  *puVar3 = *puVar3 & ~(1 << (*(byte *)(param_1 + 0x11) & 0x1f));
  FUN_080127c8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


