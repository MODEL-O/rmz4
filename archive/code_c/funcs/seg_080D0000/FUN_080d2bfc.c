// undefined FUN_080d2bfc(void)
// entry 0x80d2bfc


undefined4 FUN_080d2bfc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,1);
  FUN_0801cff0(param_1);
  iVar1 = DAT_080d2c5c;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_080d2c5c);
  *(int *)(param_1 + 0x60) = (int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar1);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2c60);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080d2a30(param_1);
  return in_lr;
}


