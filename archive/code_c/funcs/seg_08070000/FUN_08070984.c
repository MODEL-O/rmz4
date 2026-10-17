// undefined FUN_08070984(void)
// entry 0x8070984


undefined4 FUN_08070984(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  undefined4 in_lr;
  short asStack_30 [4];
  short asStack_28 [4];
  
  FUN_08129258(asStack_30,DAT_08070a90,6);
  FUN_08129258(asStack_28,DAT_08070a94,6);
  bVar3 = *(byte *)(param_1 + 10) >> 4;
  uVar5 = bVar3 & 1;
  cVar4 = '\0';
  bVar1 = *(byte *)(param_1 + 0xc3);
  cVar11 = *(char *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_08070a98);
    FUN_080736c4(param_1,4);
    *(undefined4 *)(param_1 + 0xc4) = 0;
    iVar7 = uVar5 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar7 * 0x200;
    *(int *)(param_1 + 100) = iVar7 * asStack_28[bVar1];
    *(int *)(param_1 + 0x68) = iVar7 * asStack_30[bVar1];
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
    cVar11 = -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  pcVar10 = (char *)(param_1 + 0x71);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*pcVar10 * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08070aa0) * 4 +
                               DAT_08070a9c)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_08070aa4))
                              + (int)*pcVar10) * 0x18);
  *(char *)(param_1 + 0x13) = *pcVar10;
  cVar2 = *pcVar10;
  iVar7 = FUN_08073850(param_1);
  if (iVar7 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar7 = FUN_08073850(param_1);
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar7;
      if (0x700 < iVar7) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      FUN_08073a68(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    FUN_08073a68(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if ((cVar2 != cVar11) && ((cVar2 == '\x03' || (cVar2 == '\a')))) {
    FUN_08002b10(0x136);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  piVar8 = (int *)(param_1 + 0xc4);
  *piVar8 = *piVar8 + *(int *)(param_1 + 0x5c);
  if ((bVar3 & 1) == 0) {
    iVar7 = FUN_0807371c(param_1);
    if (iVar7 == 0) goto LAB_08070b1e;
    FUN_080738b4(param_1);
  }
  else {
    iVar7 = FUN_08073784(param_1);
    if (iVar7 == 0) goto LAB_08070b1e;
    FUN_08073940(param_1);
  }
  cVar4 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08070b1e:
  iVar7 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar7;
  iVar9 = uVar5 * 2 + -1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (iVar9 * iVar7 < 1) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      cVar4 = *(char *)(param_1 + 0xe) + '\x02';
    }
  }
  else {
    iVar6 = iVar9 * *(int *)(param_1 + 0x68);
    if (iVar9 * iVar7 - iVar6 != 0 && iVar6 <= iVar9 * iVar7) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x68);
    }
    if (iVar9 * *piVar8 - DAT_08070b58 != 0 && DAT_08070b58 <= iVar9 * *piVar8) {
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(int *)(param_1 + 100) = iVar9 * -0x40;
    }
  }
  if (cVar4 != '\0') {
    *(char *)(param_1 + 0xe) = cVar4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


