// undefined FUN_080c31b8(void)
// entry 0x80c31b8


undefined4 FUN_080c31b8(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  byte abStack_24 [4];
  undefined4 local_20 [2];
  
  local_20[1] = DAT_080c3274[1];
  local_20[0] = *DAT_080c3274;
  FUN_08129258(abStack_24,DAT_080c3278,2);
  uVar1 = *(undefined1 *)(param_1 + 0xb4);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c327c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  FUN_0801cc9c(param_1);
  FUN_0801cf00(param_1,*(undefined2 *)(local_20 + uVar4));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_24[uVar4] * 0x18 + DAT_080c3280,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (uVar4 != 0) {
    FUN_080c3090(param_1,uVar4 - 1 & 0xff,uVar1);
  }
  FUN_080c3284(param_1);
  return in_lr;
}


