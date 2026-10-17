// undefined FUN_080419a4(void)
// entry 0x80419a4


undefined4 FUN_080419a4(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x2c);
  FUN_0801cff0();
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
            *(int *)(uVar6 * 8 + (uint)*(byte *)(iVar7 + 0x150) * 0x10 + DAT_08041a84);
    iVar5 = DAT_08041a84;
  }
  else {
    iVar3 = *(int *)(iVar7 + 0x54) -
            *(int *)(uVar6 * 8 + (uint)*(byte *)(iVar7 + 0x150) * 0x10 + DAT_08041a1c);
    iVar5 = DAT_08041a1c;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar7 + 0x58) +
       *(int *)(uVar6 * 8 + (uint)*(byte *)(iVar7 + 0x150) * 0x10 + iVar5 + 4);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)((uint)*(byte *)(iVar7 + 0x150) + DAT_08041a88);
  if (1 < *(byte *)(iVar8 + 0xc)) {
    *(byte *)(iVar7 + DAT_08041a8c) = *(byte *)(iVar7 + DAT_08041a8c) | 0x40;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08041a90);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


