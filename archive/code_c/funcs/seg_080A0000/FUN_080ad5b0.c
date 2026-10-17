// undefined FUN_080ad5b0(void)
// entry 0x80ad5b0


undefined4 FUN_080ad5b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ad5f0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  uVar2 = 0;
  do {
    FUN_080ad538(param_1,uVar2 & 0xff);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  FUN_080ad678(param_1);
  return in_lr;
}


