// undefined FUN_08097cc4(void)
// entry 0x8097cc4


undefined4 FUN_08097cc4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(6);
    iVar2 = *(int *)(param_1 + 0x2c);
    *(bool *)(iVar2 + 0xbc) =
         *(int *)(iVar2 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*DAT_08097d24 != 0)) {
      uVar1 = FUN_0803a578(*DAT_08097d24,7,0);
      *(undefined1 *)(iVar2 + 0xbe) = uVar1;
    }
  }
  return in_lr;
}


