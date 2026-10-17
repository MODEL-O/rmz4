// undefined FUN_080c7728(void)
// entry 0x80c7728


undefined4 FUN_080c7728(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_lr;
  int local_20 [3];
  
  local_20[0] = *DAT_080c77b8;
  local_20[1] = DAT_080c77b8[1];
  local_20[2] = DAT_080c77b8[2];
  bVar6 = *(byte *)(param_1 + 0x11);
  bVar3 = *(byte *)(param_1 + 0xb4);
  uVar4 = FUN_08066160(*(undefined4 *)(param_1 + 0x28));
  piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c77bc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar8 = local_20[uVar4 & 0xff];
  *(int *)(param_1 + 0xb8) = iVar8;
  iVar1 = DAT_080c77c0;
  iVar5 = iVar8 * *(short *)((bVar3 + 0x40 & 0xff) * 2 + DAT_080c77c0);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  iVar8 = iVar8 * *(short *)((uint)bVar3 * 2 + iVar1);
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar8 >> 8;
  FUN_0801cd28(param_1);
  if (bVar6 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar6 = bVar6 & 1;
  *(byte *)(param_1 + 0x4c) = bVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar6 << 4;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = 0x80 - bVar3;
  }
  *(byte *)(param_1 + 0x24) = bVar3 + 0x80;
  FUN_0801cf00(param_1,DAT_080c7844);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c7848,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c784c(param_1);
  return in_lr;
}


