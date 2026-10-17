// undefined FUN_080c3100(void)
// entry 0x80c3100


undefined4 FUN_080c3100(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  short asStack_1c [4];
  
  FUN_08129258(asStack_1c,DAT_080c31a8,8);
  bVar1 = *(byte *)(param_1 + 0xb4);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c31ac);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) =
       (int)asStack_1c[(uint)*(byte *)(param_1 + 0x11) * 2] * ((uint)bVar1 * 2 + -1);
  *(int *)(param_1 + 0x60) = -(int)asStack_1c[(uint)*(byte *)(param_1 + 0x11) * 2 + 1];
  FUN_0801cc9c(param_1);
  FUN_0801cf00(param_1,DAT_080c31b0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c31b4,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c3090(param_1,1,(uint)bVar1);
  FUN_080c3284(param_1);
  return in_lr;
}


