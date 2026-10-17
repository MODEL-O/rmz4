// undefined FUN_080888cc(void)
// entry 0x80888cc


undefined4 FUN_080888cc(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 10);
  uVar7 = bVar1 >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    uVar6 = uVar7;
    if ((bVar1 & 0x20) != 0) {
      uVar6 = uVar7 + 2;
    }
    FUN_080d83f8(&local_18,3,uVar6);
    FUN_0801cf00(param_1,DAT_08088920);
    if ((bVar1 >> 5 & 1) == 0) {
      *(uint *)(param_1 + 0x5c) = (uVar7 * 2 + -1) * 0x40;
      uVar4 = DAT_080889a0;
    }
    else {
      *(uint *)(param_1 + 0x5c) = (uVar7 * 2 + -1) * 0x40;
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + (bVar1 >> 5 & 1) * 0xc00;
  sVar3 = FUN_08007c7c();
  if ((sVar3 != 0) ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08128f80(param_1,*(undefined4 *)(DAT_080889a4 + 0xc));
  }
  return in_lr;
}


