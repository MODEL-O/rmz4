// undefined FUN_080ccda0(void)
// entry 0x80ccda0


undefined4 FUN_080ccda0(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ccdf4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 2;
  uVar3 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080ccdfc);
  if (((int)(uint)*(byte *)((uVar3 >> 3) + DAT_080ccdf8 + 4) >> (uVar3 & 7) & 1U) == 0) {
    *(byte *)(param_1 + 10) = bVar1 | 3;
    FUN_0801cf00(param_1,0xbd00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080cce60,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 & 0xfe | 2;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_080cce64(param_1);
  return in_lr;
}


