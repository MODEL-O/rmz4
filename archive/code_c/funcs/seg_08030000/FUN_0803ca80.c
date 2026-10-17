// undefined FUN_0803ca80(void)
// entry 0x803ca80


undefined4 FUN_0803ca80(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar6 = (uint)(byte)(*(char *)(DAT_0803cae4 + iVar3) + 7);
    if (*(char *)(DAT_0803cae4 + iVar3) != '\0') {
      uVar7 = (uint)*(ushort *)(uVar6 * 2 + DAT_0803cae8);
      pcVar5 = (char *)(param_1 + 0x71);
      if (uVar7 != CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70))) {
        if ((uVar7 == DAT_0803caec) && ('\x06' < *pcVar5)) {
          FUN_0801cfc8(param_1,uVar7,7,1);
        }
        else {
          FUN_0801cfc8(param_1,uVar7,(short)*pcVar5,(short)*(char *)(param_1 + 0x72));
        }
      }
      if (((*(char *)(param_1 + 0x10) == '\b') && (*pcVar5 == '\x03')) &&
         (*(char *)(param_1 + 0x72) < '\x02')) {
        FUN_080d1c50(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
      }
      FUN_0801cff0(param_1);
      FUN_08005794(param_1 + 0x74,*(undefined4 *)(*pcVar5 * 4 + *(int *)(uVar6 * 4 + DAT_0803cb9c)),
                   *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
                   *(undefined1 *)(param_1 + 0xc2),0xffffffff);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      if (uVar7 == DAT_0803cba0) {
        *(undefined1 *)(param_1 + 0xe) = 1;
        *(undefined1 *)(param_1 + 0xf) = 0;
        *(undefined1 *)(param_1 + 0xc1) = 10;
        cVar2 = FUN_0803a4e8(iVar3);
        *(char *)(param_1 + 0xc1) = cVar2 + *(char *)(param_1 + 0xc1);
        *(undefined1 *)(param_1 + 0xc0) = *DAT_0803cba4;
        return in_lr;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      if (*(char *)(param_1 + 0xf) == '\0') {
        FUN_0801cfc8(param_1,0x6a00,4,2);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      FUN_0801cff0(param_1);
      FUN_08005794(param_1 + 0x74,
                   *(undefined4 *)(*(char *)(param_1 + 0x71) * 4 + *(int *)(DAT_0803cc1c + 0x14)),
                   *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
                   *(undefined1 *)(param_1 + 0xc2),0xffffffff);
      sVar1 = CONCAT11(*(undefined1 *)(iVar3 + 0x1e),*(undefined1 *)(iVar3 + 0x70));
      if (sVar1 == 0x1900) {
        return in_lr;
      }
      if (sVar1 == 0x1902) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      FUN_0801cf00(param_1,DAT_0803cc6c);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    FUN_0801cff0(param_1);
    FUN_08005784(param_1 + 0x74,DAT_0803cc70);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803cc74);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  return in_lr;
}


