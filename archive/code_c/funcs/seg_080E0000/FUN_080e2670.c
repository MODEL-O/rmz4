// undefined FUN_080e2670(void)
// entry 0x80e2670


undefined4 FUN_080e2670(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = *DAT_080e271c;
  local_20[1] = DAT_080e271c[1];
  local_20[2] = DAT_080e271c[2];
  local_20[3] = DAT_080e271c[3];
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e2720);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar4 = DAT_080e2724;
  iVar3 = *(int *)(param_1 + 0x74) *
          (int)*(short *)((*(byte *)(param_1 + 0x78) + 0x40 & 0xff) * 2 + DAT_080e2724);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  iVar4 = *(int *)(param_1 + 0x74) * (int)*(short *)((uint)*(byte *)(param_1 + 0x78) * 2 + iVar4);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,*(undefined2 *)(local_20 + bVar1));
  FUN_080e2728(param_1);
  return in_lr;
}


