// undefined FUN_0801f460(void)
// entry 0x801f460


undefined4 FUN_0801f460(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0801f4a0;
  uVar2 = *(undefined4 *)(DAT_0801f4a0 + 0x178);
  if (param_1 == '\0') {
    FUN_0801f8cc(DAT_0801f4a0 + 0xe8);
  }
  if (*(char *)(iVar1 + 0x100) != '\0') {
    FUN_08006d2c(uVar2);
  }
  FUN_08027690(iVar1 + 0x10);
  FUN_0801f8e8(iVar1 + 0xe8);
  return in_lr;
}


