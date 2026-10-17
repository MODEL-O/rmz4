// undefined FUN_080c6f50(void)
// entry 0x80c6f50


undefined4 FUN_080c6f50(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(iVar7 + 0xd) == '\"') {
    bVar1 = *(byte *)(iVar7 + 10) >> 4;
    bVar6 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar6 << 4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(iVar7 + 0x54);
      iVar5 = 0x500;
    }
    else {
      iVar4 = *(int *)(iVar7 + 0x54);
      iVar5 = DAT_080c6fe4;
    }
    *(int *)(param_1 + 0x54) = iVar4 + iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(iVar7 + 0x58) + 0x1000;
    if (*(int *)(iVar7 + 0x68) < 0x10) {
      if (*(int *)(iVar7 + 0x68) < 9) {
        FUN_08005784(param_1 + 0x74,DAT_080c7050);
      }
      else {
        FUN_08005784(param_1 + 0x74,DAT_080c7024);
      }
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_080c7010);
    }
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(iVar7 + 0xf) != '\x03') {
        return in_lr;
      }
      FUN_0801cf00(param_1,DAT_080c7054);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c707c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)(*piVar2 + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c6f98);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)(*piVar2 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}


