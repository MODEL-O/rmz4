// undefined FUN_080c6e34(void)
// entry 0x80c6e34


undefined4 FUN_080c6e34(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (CONCAT11(*(undefined1 *)(iVar6 + 0x1e),*(undefined1 *)(iVar6 + 0x70)) == DAT_080c6e88) {
    bVar1 = *(byte *)(iVar6 + 10) >> 4;
    bVar4 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
    if (*(char *)(iVar6 + 0x71) == '\0') {
      *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + DAT_080c6ee4;
      iVar5 = 0x1900;
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
      iVar5 = 0x1a00;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = *(int *)(iVar6 + 0x54) - iVar5;
    }
    else {
      iVar5 = *(int *)(iVar6 + 0x54) + iVar5;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(iVar6 + 0xf) != '\x02') {
        return in_lr;
      }
      FUN_0801cf00(param_1,DAT_080c6f24);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c6f4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)(*piVar2 + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c6e8c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)(*piVar2 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}


