// undefined FUN_080d0074(void)
// entry 0x80d0074


undefined4 FUN_080d0074(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + (int)*(char *)(param_1 + 0xb4) * *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  if (0x380 < iVar3) {
    *(undefined4 *)(param_1 + 0x5c) = 0x380;
  }
  uVar1 = FUN_0801fb14(DAT_080d00f0,param_1 + 0x54);
  if (0x1000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d00f4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


