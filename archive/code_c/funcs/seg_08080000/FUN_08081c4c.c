// undefined FUN_08081c4c(void)
// entry 0x8081c4c


undefined4 FUN_08081c4c(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if ((((uVar2 & 0x200) != 0) && ((uVar2 & 0x20000) != 0)) && (*DAT_08081c90 != 0)) {
      uVar1 = FUN_0803a578(*DAT_08081c90,3,2);
      *(undefined1 *)(iVar3 + 0xb6) = uVar1;
    }
  }
  return in_lr;
}


