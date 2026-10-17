// undefined FUN_0805ade0(void)
// entry 0x805ade0


undefined4 FUN_0805ade0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08001d30(DAT_0805afc0,
                 ((uint)*(ushort *)(DAT_0805afc4 + 0x8a) -
                 (uint)(*(ushort *)(DAT_0805afc0 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0805afc8,
                 ((uint)*(ushort *)(DAT_0805afcc + 0x8a) - (uint)*(byte *)(DAT_0805afc8 + 7)) * 0x20
                 + 0x200);
    if ((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0xbf) != '\x03')) {
      iVar2 = FUN_08095dfc(param_1);
      *(int *)(param_1 + 200) = iVar2;
      cVar5 = -1;
      if (iVar2 != 0) {
        cVar5 = '\x03';
      }
      *(char *)(param_1 + 0xbf) = cVar5;
    }
    FUN_08005784(param_1 + 0x74,DAT_0805afd0);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0805afd4) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    iVar2 = (bVar1 >> 4 & 1) * 2 + -1;
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 0x5c) = iVar2 * 0x100;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(undefined1 *)(param_1 + 0x13) = 3;
    *(undefined4 *)(param_1 + 0xc0) = 0x94;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((iVar2 != 0) && (iVar2 = iVar2 + -1, *(int *)(param_1 + 0xc0) = iVar2, iVar2 < 1)) {
    FUN_08002b10(0xbe);
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar6 = *(int *)(param_1 + 0x60) * (iVar2 - *(int *)(param_1 + 100));
  iVar2 = iVar6;
  if (iVar6 < 0) {
    iVar2 = iVar6 + DAT_0805afd8;
  }
  iVar2 = iVar6 + (iVar2 >> 0xe) * -0x4000;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x3f;
  }
  iVar2 = *(int *)(param_1 + 0x68) +
          *(short *)(((iVar2 >> 6) * 0x1000000 + 0x40000000U >> 0x17) + DAT_0805afdc) * 0x2c +
          DAT_0805afe0;
  *(int *)(param_1 + 0x58) = iVar2;
  if (*(byte *)(param_1 + 0x13) != 0) {
    iVar3 = (3 - (uint)*(byte *)(param_1 + 0x13)) * 0x4000;
    if (iVar3 <= iVar6) {
      local_1c = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x60) * iVar3;
      piVar4 = (int *)(param_1 + 200);
      iVar3 = *piVar4;
      local_18 = iVar2;
      if ((((iVar3 != 0) && (*(char *)(param_1 + 0xbf) == '\x03')) &&
          (*(char *)(iVar3 + 0xb5) == '\0')) &&
         (iVar2 = FUN_08095e60(iVar3,&local_1c,*(undefined1 *)(iVar3 + 0xb4)), iVar2 != 0)) {
        *(char *)(*piVar4 + 0xb4) = *(char *)(*piVar4 + 0xb4) + '\x01';
      }
      cVar5 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar5;
      if (((cVar5 == '\0') && (*piVar4 != 0)) && (*(char *)(param_1 + 0xbf) == '\x03')) {
        *(undefined1 *)(*piVar4 + 0xb5) = 1;
      }
    }
    if ((*(char *)(param_1 + 0x12) != '\0') && (0x1fff < iVar6)) {
      FUN_08002b10(0xbd);
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  iVar2 = FUN_0805c3a8(param_1);
  if (0x1e000 < (iVar2 - *(int *)(param_1 + 0x54)) + 0x16800U) {
    *(undefined1 *)(param_1 + 0xd) = 0xb;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


