// undefined FUN_0808e1c8(void)
// entry 0x808e1c8


undefined4 FUN_0808e1c8(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  char *pcVar13;
  int iVar14;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar11 = (uint)*(byte *)(param_1 + 0xd);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((((*(short *)(param_1 + 0xb8) == 0xb0) && (*(short *)(uVar11 * 2 + DAT_0808e250) == 0xb0))
        && (*(char *)(param_1 + 0x12) == '\0')) && (*(char *)(DAT_0808e254 + uVar11) == '\0')) {
      FUN_0808e8f4(param_1);
      FUN_0801cf00(param_1,DAT_0808e3bc);
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    else {
      FUN_0808e95c(param_1);
      FUN_0801cf00(param_1,DAT_0808e258);
      *(short *)(param_1 + 0xbc) =
           *(short *)(uVar11 * 2 + DAT_0808e250) - *(short *)(param_1 + 0xb8);
      *(ushort *)(param_1 + 0xbe) =
           (*(byte *)(DAT_0808e254 + uVar11) + 0x80 & 0xff) -
           (*(byte *)(param_1 + 0x12) + 0x80 & 0xff);
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    iVar5 = DAT_0808e3c0;
    *(uint *)(param_1 + 0xc0) =
         *(int *)(uVar11 * 8 + DAT_0808e3c0) * ((uint)bVar1 * 2 + -1) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = *(int *)(uVar11 * 8 + iVar5 + 4) - *(int *)(param_1 + 0x68);
    iVar5 = (int)*(short *)(param_1 + 0xba);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x60) = iVar5;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  puVar8 = (ushort *)(param_1 + 0xba);
  if (*puVar8 != 0) {
    *puVar8 = *puVar8 - 1;
  }
  iVar5 = DAT_0808e3c0;
  uVar9 = (uint)*puVar8;
  uVar6 = *(uint *)(param_1 + 0x60) & 0xffff;
  iVar10 = *(int *)(uVar11 * 8 + DAT_0808e3c0);
  iVar14 = *(int *)(iVar4 + 0x54);
  iVar7 = FUN_08128fb8(*(int *)(param_1 + 0xc0) * uVar9,uVar6);
  iVar7 = (iVar14 + iVar10 * ((uint)bVar1 * 2 + -1)) - iVar7;
  *(int *)(param_1 + 0x54) = iVar7;
  iVar14 = *(int *)(iVar4 + 0x58);
  iVar5 = *(int *)(uVar11 * 8 + iVar5 + 4);
  iVar10 = FUN_08128fb8(*(int *)(param_1 + 0x5c) * uVar9,uVar6);
  iVar10 = (iVar14 + iVar5) - iVar10;
  *(int *)(param_1 + 0x58) = iVar10;
  *(int *)(param_1 + 100) = iVar7 - *(int *)(iVar4 + 0x54);
  *(int *)(param_1 + 0x68) = iVar10 - *(int *)(iVar4 + 0x58);
  if (*(char *)(param_1 + 0x13) != '\0') {
    psVar12 = (short *)(uVar11 * 2 + DAT_0808e3c4);
    sVar3 = FUN_08128fb8((int)*(short *)(param_1 + 0xbc) * uVar9,uVar6);
    sVar3 = *psVar12 - sVar3;
    *(short *)(param_1 + 0x50) = sVar3;
    *(short *)(param_1 + 0x52) = sVar3;
    *(short *)(param_1 + 0xb8) = sVar3;
    pcVar13 = (char *)(DAT_0808e3c8 + uVar11);
    cVar2 = FUN_08128fb8((int)*(short *)(param_1 + 0xbe) * uVar9,uVar6);
    cVar2 = *pcVar13 - cVar2;
    *(char *)(param_1 + 0x24) = cVar2;
    *(char *)(param_1 + 0x12) = cVar2;
    if (((*(short *)(param_1 + 0xb8) == 0xb0) && (cVar2 == '\0')) && (uVar9 == 0)) {
      FUN_0808e8f4(param_1);
      FUN_0801cf00(param_1,DAT_0808e3bc);
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


