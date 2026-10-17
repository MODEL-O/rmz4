// undefined FUN_08109d58(void)
// entry 0x8109d58


undefined4 FUN_08109d58(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xb8);
  bVar7 = *(byte *)(iVar1 + 10) >> 4 & 1;
  FUN_0801cd28(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  FUN_0801cf00(param_1,DAT_08109e00);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  if (*(char *)(iVar1 + 0xd) == '\x02') {
    if (CONCAT11(*(undefined1 *)(iVar1 + 0x1e),*(undefined1 *)(iVar1 + 0x70)) == 0x500) {
      if ('\x02' < *(char *)(iVar1 + 0x71)) {
        bVar7 = bVar7 ^ 1;
      }
    }
    else {
      bVar7 = bVar7 ^ 1;
    }
  }
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar3 = DAT_08109e6c;
  iVar5 = param_1 + 0x74;
  iVar6 = param_1 + 0x54;
  FUN_08005760(iVar5,DAT_08109e6c,iVar6,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(iVar1 + 0xf5) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(iVar5,iVar3 + 0x120,iVar6,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    if (*(char *)(iVar1 + 0xf5) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      iVar3 = iVar3 + 0xf0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      iVar3 = iVar3 + 0xc0;
    }
    FUN_08005760(iVar5,iVar3,iVar6,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  uVar4 = DAT_08109ed0;
  if (bVar7 != 0) {
    uVar4 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = DAT_08109ed4;
  *(undefined1 *)(param_1 + 0x12) = 0xb4;
  return in_lr;
}


