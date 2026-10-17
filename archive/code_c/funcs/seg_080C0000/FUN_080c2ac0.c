// undefined FUN_080c2ac0(void)
// entry 0x80c2ac0


undefined4 FUN_080c2ac0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  local_20[1] = DAT_080c2ba8[1];
  local_20[0] = *DAT_080c2ba8;
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c2bac);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar4 = DAT_080c2bb0;
  uVar5 = *(byte *)(param_1 + 0xb4) + 0x40;
  iVar3 = *(short *)((uVar5 & 0xff) * 2 + DAT_080c2bb0) * 0x2c0;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  iVar4 = *(short *)((uint)*(byte *)(param_1 + 0xb4) * 2 + iVar4) * 0x2c0;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  FUN_0801cd28(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,*(undefined2 *)(local_20 + bVar1));
  *(char *)(param_1 + 0x24) = (char)uVar5;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c2bb4,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c2bb8(param_1);
  return in_lr;
}


