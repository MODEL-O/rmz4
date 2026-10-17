// undefined FUN_08040744(void)
// entry 0x8040744


undefined4 FUN_08040744(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  pbVar8 = (byte *)(iVar7 + DAT_08040794);
  if (*pbVar8 == 0xff) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08040798);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080407fc);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar9 = 6;
      FUN_08002b10(0x25);
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 1;
      FUN_0801cc9c(param_1);
      FUN_0801ceec(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      FUN_0801cf00(param_1,*(undefined2 *)((uint)*pbVar8 * 2 + DAT_08040800));
      *(int *)(param_1 + 0x40) = param_1 + 100;
      *(undefined1 *)(param_1 + 0x25) = 0x11;
      iVar9 = 0xe;
      FUN_08002b10(0x1c8);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    iVar3 = FUN_0803a528(iVar7);
    uVar4 = iVar3 + iVar9 & 0xff;
    cVar1 = FUN_08038a78(iVar7);
    if (cVar1 != '\0') {
      uVar4 = (iVar3 + iVar9 & 0x7fU) << 1;
    }
    pcVar5 = (char *)(iVar7 + DAT_08040858);
    *(char *)(param_1 + 0x10) = *pcVar5;
    cVar1 = *pcVar5;
    if ((cVar1 == '\x03') || (cVar1 == '\a')) {
      uVar6 = 2;
      if (*(char *)(param_1 + 0x11) != '\0') {
        uVar6 = 6;
      }
    }
    else {
      uVar6 = (int)(-(uint)*(byte *)(param_1 + 0x11) | (uint)*(byte *)(param_1 + 0x11)) >> 0x1f & 4;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    iVar7 = uVar6 * 0x18 + DAT_080408c0;
    FUN_08005760(param_1 + 0x74,iVar7,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_08005794(param_1 + 0x74,iVar7,uVar4,0xffffffff,0xffffffff,0xffffffff);
    *(undefined4 *)(param_1 + 0x98) = DAT_080408c4;
    *(undefined1 *)(param_1 + 0xbd) = 0;
    FUN_080408c8(param_1);
  }
  return in_lr;
}


