// undefined FUN_080fcf88(void)
// entry 0x80fcf88


undefined4 FUN_080fcf88(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    return in_lr;
  }
  *(ushort *)(param_1 + 0xb6) = 0x9f00;
  FUN_0801cf00(param_1);
  pcVar2 = (char *)(param_1 + 0xb4);
  *pcVar2 = *DAT_080fcfe0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if ((*pcVar2 < '\0') || (*(ushort *)(param_1 + 0xb6) == DAT_080fcfe4)) {
    FUN_08005784(param_1 + 0x74,DAT_080fd014);
  }
  else {
    FUN_08005784(param_1 + 0x74,*pcVar2 * 0x18 + DAT_080fcfe8);
  }
  if (*pcVar2 < '\x01') {
    if ((*pcVar2 != '\0') ||
       (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == -0x6100)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      goto LAB_080fd058;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    iVar1 = DAT_080fd048;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    iVar1 = *pcVar2 * 8 + DAT_080fd018;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  *(short *)(param_1 + 0x26) = (short)DAT_080fd04c;
LAB_080fd058:
  *(undefined2 *)(param_1 + 0xa4) = 0xff;
  puVar3 = (uint *)(((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4 + DAT_080fd08c + DAT_080fd090);
  *puVar3 = *puVar3 | 1 << (*(byte *)(param_1 + 0x11) & 0x1f);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


