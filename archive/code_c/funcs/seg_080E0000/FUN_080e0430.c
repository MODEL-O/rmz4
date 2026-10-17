// undefined FUN_080e0430(void)
// entry 0x80e0430


undefined4 FUN_080e0430(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  undefined4 in_lr;
  undefined4 local_20 [3];
  
  local_20[0] = *DAT_080e0480;
  local_20[1] = DAT_080e0480[1];
  local_20[2] = DAT_080e0480[2];
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar4 = *(byte *)(param_1 + 0x11);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0484);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = 0x100;
  *(undefined1 *)(param_1 + 0x12) = 0x40;
  FUN_0801cc9c(param_1);
  if (bVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar4 = bVar4 & 1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  FUN_0801cf00(param_1,*(undefined2 *)(local_20 + bVar1));
  FUN_080e04c8(param_1);
  return in_lr;
}


