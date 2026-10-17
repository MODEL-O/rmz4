// undefined FUN_080916bc(void)
// entry 0x80916bc


undefined4 FUN_080916bc(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined1 uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xbd) == '\0') {
    uVar3 = 9;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar4 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    if (sVar4 != 0) {
      if (*(int *)(param_1 + 0x60) < 1) {
        *(undefined1 *)(param_1 + 0xbe) = 1;
        uVar5 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar5;
        iVar2 = DAT_080917a4;
        iVar6 = DAT_080917a0;
        puVar1 = DAT_0809179c;
        uVar5 = DAT_08091798;
        local_24 = *(undefined4 *)(param_1 + 0x58);
        local_28 = *(int *)(param_1 + 0x54) + 0x300;
        uVar7 = *DAT_0809179c * DAT_080917a0 + DAT_080917a4;
        *DAT_0809179c = uVar7 & 0x7fffffff;
        FUN_080d4c8c(&local_28,uVar5,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4);
        local_28 = local_28 + DAT_080917a8;
        uVar7 = *puVar1 * iVar6 + iVar2;
        *puVar1 = uVar7 & 0x7fffffff;
        FUN_080d4c8c(&local_28,uVar5,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
        uVar3 = 6;
      }
      else {
        uVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar5;
        FUN_080dcd68(param_1 + 0x54,1,0);
        uVar3 = 1;
      }
      *(undefined1 *)(param_1 + 0xd) = uVar3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    sVar4 = FUN_08007c7c(iVar6,*(undefined4 *)(param_1 + 0x58));
    if (sVar4 == 0) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xbe) = 0;
    if (*(int *)(param_1 + 0x5c) < 1) {
      uVar5 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x54) = uVar5;
      iVar2 = DAT_080918e8;
      iVar6 = DAT_080918e4;
      puVar1 = DAT_080918e0;
      uVar7 = *DAT_080918e0 * DAT_080918e4 + DAT_080918e8;
      *DAT_080918e0 = uVar7 & 0x7fffffff;
      FUN_080d4c8c(param_1 + 0x54,DAT_080918ec,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar7 = *puVar1 * iVar6 + iVar2;
      *puVar1 = uVar7 & 0x7fffffff;
      FUN_080d4c8c(param_1 + 0x54,DAT_080918ec,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      uVar5 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x54) = uVar5;
      iVar2 = DAT_08091858;
      iVar6 = DAT_08091854;
      puVar1 = DAT_08091850;
      uVar7 = *DAT_08091850 * DAT_08091854 + DAT_08091858;
      *DAT_08091850 = uVar7 & 0x7fffffff;
      FUN_080d4c8c(param_1 + 0x54,DAT_0809185c,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
      uVar7 = *puVar1 * iVar6 + iVar2;
      *puVar1 = uVar7 & 0x7fffffff;
      FUN_080d4c8c(param_1 + 0x54,DAT_0809185c,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    uVar3 = 6;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


