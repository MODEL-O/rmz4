// undefined FUN_080e8f1c(void)
// entry 0x80e8f1c


undefined4 FUN_080e8f1c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cdbc();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e8fa8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080e8fac));
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + ((uint)*(byte *)(param_1 + 0x11) * 0xf + -0x46) * 0x100;
  iVar2 = *(int *)(param_1 + 0x58) + DAT_080e8fb0;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x78) = iVar2;
  *(undefined4 *)(param_1 + 0x60) = DAT_080e8fb4;
  *(undefined2 *)(param_1 + 0x50) = 0x200;
  *(undefined2 *)(param_1 + 0x52) = 0x200;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  *(undefined2 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_080e8ebc(param_1);
  return in_lr;
}


