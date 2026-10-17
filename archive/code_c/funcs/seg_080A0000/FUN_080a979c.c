// undefined FUN_080a979c(void)
// entry 0x80a979c


undefined4 FUN_080a979c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    iVar2 = *(int *)(param_1 + 0x2c);
    FUN_08006984(0xd);
    *(bool *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x54) < *(int *)(iVar1 + 0x54);
  }
  return in_lr;
}


