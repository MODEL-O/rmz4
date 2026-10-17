// undefined FUN_08090380(void)
// entry 0x8090380


undefined4 FUN_08090380(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar9 + 10) >> 4;
  bVar7 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0xb7);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080903c0);
    bVar6 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar6 | 1;
    if ((bVar2 & 1) == 0) {
      bVar6 = bVar6 & 0xef | 1;
    }
    else {
      bVar6 = bVar6 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar6;
    *(byte *)(param_1 + 0x4c) = bVar7;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
    FUN_0801cf00(param_1,DAT_0809045c);
    iVar5 = DAT_08090460;
    *(int *)(param_1 + 0x5c) = (int)*(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_08090460) << 6;
    *(int *)(param_1 + 0x60) = (int)*(short *)((uint)bVar1 * 2 + iVar5) << 6;
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar3 = FUN_08128fb8((uint)*(byte *)(param_1 + 0x12) << 6,0xc);
  uVar3 = (uint)*(ushort *)((uVar3 & 0xff) * 2 + DAT_08090460);
  iVar8 = *(int *)(iVar9 + 0x54);
  iVar4 = FUN_08128fb8(uVar3 * *(int *)(param_1 + 0x5c),0x100);
  iVar5 = DAT_08090498;
  if ((*(byte *)(iVar9 + 10) & 0x10) != 0) {
    iVar5 = 0x400;
  }
  *(int *)(param_1 + 0x54) = iVar8 + iVar4 + iVar5;
  iVar5 = FUN_08128fb8(uVar3 * *(int *)(param_1 + 0x60),0x100);
  *(int *)(param_1 + 0x58) = *(int *)(iVar9 + 0x58) + iVar5 + DAT_0809049c;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xb6) = 1;
  }
  return in_lr;
}


