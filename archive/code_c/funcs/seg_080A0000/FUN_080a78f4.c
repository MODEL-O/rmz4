// undefined FUN_080a78f4(void)
// entry 0x80a78f4


undefined4 FUN_080a78f4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x35);
    iVar2 = *(int *)(param_1 + 0x2c);
    *(bool *)(iVar2 + 0xbc) =
         *(int *)(iVar2 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*DAT_080a7954 != 0)) {
      uVar1 = FUN_0803a578(*DAT_080a7954,7,2);
      *(undefined1 *)(iVar2 + 0xbe) = uVar1;
    }
  }
  return in_lr;
}


