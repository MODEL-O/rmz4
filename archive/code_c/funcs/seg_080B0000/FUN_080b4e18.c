// undefined FUN_080b4e18(void)
// entry 0x80b4e18


undefined4 FUN_080b4e18(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((iVar2 != 0) && (*(byte *)(iVar2 + 0xc) < 2)) {
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080b4e50);
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  FUN_0807f8ec(param_1);
  return in_lr;
}


