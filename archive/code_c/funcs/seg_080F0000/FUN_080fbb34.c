// undefined FUN_080fbb34(void)
// entry 0x80fbb34


undefined4 FUN_080fbb34(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080fbba4;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fbba4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080fbbac);
  if (((int)(uint)*(byte *)((uVar3 >> 3) + DAT_080fbba8 + 4) >> (uVar3 & 7) & 1U) == 0) {
    FUN_0801cf00(param_1,0xbc00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080fbc10,param_1 + 0x54,0x10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    FUN_080fbc14(param_1);
  }
  else {
    FUN_0801cf00(param_1,DAT_080fbbb0);
    FUN_0801cff0(param_1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)((uint)*(byte *)(param_1 + 9) * 4 + iVar1) + 8);
  }
  return in_lr;
}


