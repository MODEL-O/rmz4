// undefined FUN_0801ba54(void)
// entry 0x801ba54


undefined4 FUN_0801ba54(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_08002b5c(0x1ca);
  *(undefined4 *)(param_1 + 0x50) = 0;
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 != 0) {
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_0801ba84);
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  return in_lr;
}


