// undefined FUN_0803cf18(void)
// entry 0x803cf18


undefined4 FUN_0803cf18(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar6 = (byte *)(param_1 + 0x71);
    if ((CONCAT11(*(undefined1 *)(iVar3 + 0x1e),*(undefined1 *)(iVar3 + 0x70)) == 0x1a00) ||
       (*(byte *)(iVar3 + 0x71) == *pbVar6)) {
      FUN_0801cff0(param_1);
      FUN_08005794(param_1 + 0x74,
                   *(undefined4 *)
                    ((char)*pbVar6 * 4 +
                    *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803cff4)),
                   *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
                   *(undefined1 *)(param_1 + 0xc2),((int)((uint)*pbVar6 << 0x18) >> 0x19) + 1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 0xc1) = 10;
      cVar2 = FUN_0803a4e8(iVar3);
      *(char *)(param_1 + 0xc1) = cVar2 + *(char *)(param_1 + 0xc1);
      *(undefined1 *)(param_1 + 0xc0) = *DAT_0803cff8;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803cf8c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*piVar4 + 0xc);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      if (*(char *)(param_1 + 0xf) == '\0') {
        FUN_0801cfc8(param_1,0x6a00,4,2);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      FUN_0801cff0(param_1);
      FUN_08005794(param_1 + 0x74,
                   *(undefined4 *)(*(char *)(param_1 + 0x71) * 4 + *(int *)(DAT_0803d070 + 0x14)),
                   *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
                   *(undefined1 *)(param_1 + 0xc2),0xffffffff);
      sVar1 = CONCAT11(*(undefined1 *)(iVar3 + 0x1e),*(undefined1 *)(iVar3 + 0x70));
      if (sVar1 == 0x1900) {
        return in_lr;
      }
      if (sVar1 == 0x1a00) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      FUN_0801cf00(param_1,DAT_0803d0c0);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    FUN_0801cff0(param_1);
    FUN_08005784(param_1 + 0x74,DAT_0803d0c4);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803d0c8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar5 = *(undefined4 *)(*piVar4 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return in_lr;
}


