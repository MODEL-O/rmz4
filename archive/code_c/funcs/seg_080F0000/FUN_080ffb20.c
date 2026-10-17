// undefined FUN_080ffb20(void)
// entry 0x80ffb20


undefined4 FUN_080ffb20(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x5a00);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080ffb8c;
  *(undefined2 *)(param_1 + 0x26) = 1;
  iVar1 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xb4) = iVar1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ffb90);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  if (((int)(uint)*(byte *)(DAT_080ffb94 + DAT_080ffb98) >> (uint)*(byte *)(param_1 + 0x10) & 1U) ==
      0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  FUN_080ffb9c(param_1);
  return in_lr;
}


