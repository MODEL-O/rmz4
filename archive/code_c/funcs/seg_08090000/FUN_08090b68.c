// undefined FUN_08090b68(void)
// entry 0x8090b68


undefined4 FUN_08090b68(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar3 = bVar1 & 1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08090ba8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  FUN_0801cf00(param_1,DAT_08090bf4);
  uVar4 = 0;
  do {
    FUN_08090af4(param_1,uVar4 & 0xff);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  FUN_08090c78(param_1);
  return in_lr;
}


