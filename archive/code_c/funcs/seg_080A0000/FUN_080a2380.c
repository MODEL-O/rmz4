// undefined FUN_080a2380(void)
// entry 0x80a2380


undefined4 FUN_080a2380(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (((((uVar1 & 1) != 0) && ((uVar1 & 0x200) != 0)) && ((uVar1 & 0x20000) != 0)) &&
     (*DAT_080a23b4 != 0)) {
    FUN_0803a578(*DAT_080a23b4,5,0);
  }
  return in_lr;
}


