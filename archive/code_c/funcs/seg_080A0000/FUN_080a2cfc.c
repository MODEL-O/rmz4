// undefined FUN_080a2cfc(void)
// entry 0x80a2cfc


undefined4 FUN_080a2cfc(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (((((uVar2 & 1) != 0) && ((uVar2 & 0x200) != 0)) && ((uVar2 & 0x20000) != 0)) &&
     (*DAT_080a2d3c != 0)) {
    uVar1 = FUN_0803a578(*DAT_080a2d3c,4,2);
    *(undefined1 *)(iVar3 + 0xb8) = uVar1;
  }
  return in_lr;
}


