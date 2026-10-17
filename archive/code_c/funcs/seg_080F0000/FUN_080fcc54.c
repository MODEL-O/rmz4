// undefined FUN_080fcc54(void)
// entry 0x80fcc54


undefined4 FUN_080fcc54(int param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar5 = DAT_080fccd4;
  FUN_08005760(param_1 + 0x74,DAT_080fccd4,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080fccd8;
  *(ushort *)(param_1 + 0xb6) = 0x9f00;
  FUN_0801cf00(param_1);
  pcVar3 = (char *)(param_1 + 0xb4);
  *pcVar3 = *DAT_080fccdc;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if ((*pcVar3 < '\0') || (*(ushort *)(param_1 + 0xb6) == DAT_080fcce0)) {
    FUN_08005784(param_1 + 0x74,DAT_080fcd10);
  }
  else {
    FUN_08005784(param_1 + 0x74,*pcVar3 * 0x18 + iVar5);
  }
  cVar1 = *(char *)(param_1 + 0xb4);
  if (cVar1 < '\x01') {
    if ((cVar1 != '\0') ||
       (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == -0x6100)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      goto LAB_080fcd54;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    iVar5 = DAT_080fcd44;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    iVar5 = *(char *)(param_1 + 0xb4) * 8 + DAT_080fcd14;
  }
  *(int *)(param_1 + 0x30) = iVar5;
  *(short *)(param_1 + 0x26) = (short)DAT_080fcd48;
LAB_080fcd54:
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined1 *)(param_1 + 0x13) = 1;
  iVar5 = DAT_080fcdc8 + DAT_080fcdcc;
  puVar4 = (uint *)(((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4 + iVar5);
  *puVar4 = *puVar4 | 1 << (*(byte *)(param_1 + 0x11) & 0x1f);
  if ((*(uint *)(((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4 + iVar5) &
      1 << (*(byte *)(param_1 + 0x11) & 0x1f)) != 0) {
    *(undefined1 *)(param_1 + 0x10) = 4;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fcdd0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080fcdd4(param_1);
  return in_lr;
}


