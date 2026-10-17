// undefined FUN_08042bfc(void)
// entry 0x8042bfc


undefined4 FUN_08042bfc(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
      FUN_0801cf00(param_1,DAT_08042c6c);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(iVar7 + DAT_08042c34) = *(byte *)(iVar7 + DAT_08042c34) | 0x40;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08042c38);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    return in_lr;
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(iVar7 + 10) >> 4;
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
  uVar6 = (uint)(*(char *)(iVar7 + 0x71) == '\x03');
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(iVar7 + 0x54) +
            *(int *)(uVar6 * 8 + (uint)*(byte *)(iVar7 + 0x150) * 0x10 + DAT_08042d0c);
    iVar5 = DAT_08042d0c;
  }
  else {
    iVar3 = *(int *)(iVar7 + 0x54) -
            *(int *)(uVar6 * 8 + (uint)*(byte *)(iVar7 + 0x150) * 0x10 + DAT_08042cc8);
    iVar5 = DAT_08042cc8;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar7 + 0x58) +
       *(int *)(uVar6 * 8 + (uint)*(byte *)(iVar7 + 0x150) * 0x10 + iVar5 + 4);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)((uint)*(byte *)(iVar7 + 0x150) + DAT_08042d10);
  return in_lr;
}


