// undefined FUN_08090190(void)
// entry 0x8090190


undefined4 FUN_08090190(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar3 + 10) >> 4;
  bVar8 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0xb7);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080901d4);
    bVar7 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar7 | 1;
    if ((bVar2 & 1) == 0) {
      bVar7 = bVar7 & 0xef | 1;
    }
    else {
      bVar7 = bVar7 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar7;
    *(byte *)(param_1 + 0x4c) = bVar8;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar8 << 4;
    FUN_0801cf00(param_1,DAT_08090284);
    iVar6 = DAT_08090288;
    *(int *)(param_1 + 0x5c) = (int)*(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_08090288) << 6;
    *(int *)(param_1 + 0x60) = (int)*(short *)((uint)bVar1 * 2 + iVar6) << 6;
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\x04') {
    FUN_0801cf00(param_1,DAT_0809028c);
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar4 = FUN_08128fb8((uint)*(byte *)(param_1 + 0x12) << 6,0x14);
  uVar4 = (uint)*(ushort *)((uVar4 & 0xff) * 2 + DAT_08090288);
  iVar10 = *(int *)(iVar3 + 0x54);
  iVar9 = *(int *)(param_1 + 0x5c);
  iVar5 = FUN_08128fb8(uVar4 * iVar9,0x100);
  iVar6 = DAT_080902d8;
  if ((*(byte *)(iVar3 + 10) & 0x10) != 0) {
    iVar6 = 0x400;
  }
  *(int *)(param_1 + 0x54) = (iVar10 + iVar9 + iVar6) - iVar5;
  iVar6 = *(int *)(param_1 + 0x60) + DAT_080902dc;
  iVar5 = *(int *)(iVar3 + 0x58);
  iVar3 = FUN_08128fb8(uVar4 * *(int *)(param_1 + 0x60),0x100);
  *(int *)(param_1 + 0x58) = (iVar5 + iVar6) - iVar3;
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


