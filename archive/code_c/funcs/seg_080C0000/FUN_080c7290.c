// undefined FUN_080c7290(void)
// entry 0x80c7290


undefined4 FUN_080c7290(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  int local_20 [3];
  
  local_20[0] = *DAT_080c7374;
  local_20[1] = DAT_080c7374[1];
  local_20[2] = DAT_080c7374[2];
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar3 = FUN_08066160(*(undefined4 *)(param_1 + 0x28));
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c7378);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar2 = DAT_080c737c;
  iVar6 = local_20[uVar3 & 0xff];
  iVar4 = iVar6 * *(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_080c737c);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar4 >> 8;
  iVar6 = iVar6 * *(short *)((uint)bVar1 * 2 + iVar2);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar6 >> 8;
  *(undefined1 *)(param_1 + 0xb4) = 6;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,DAT_080c7380);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c7384,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c7220(param_1,param_1 + 0x54,4);
  FUN_080c7468(param_1);
  return in_lr;
}


