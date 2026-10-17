// undefined FUN_080fcc10(void)
// entry 0x80fcc10


undefined4 FUN_080fcc10(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (((((uVar2 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x2c), (uVar2 & 0x200) != 0)) &&
      ((uVar2 & 0x20000) != 0)) && (*DAT_080fcc50 != 0)) {
    uVar1 = FUN_0803a578(*DAT_080fcc50,5,10);
    *(undefined1 *)(iVar3 + 0xbd) = uVar1;
  }
  return in_lr;
}


