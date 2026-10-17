// undefined FUN_080ad910(void)
// entry 0x80ad910


undefined4 FUN_080ad910(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = param_1 + 0x54;
  FUN_080cd4f8(iVar2,0,0);
  FUN_08002b10(0xa5);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0802ab88(2,0xff,iVar2);
    FUN_08006984(0x2e);
  }
  else {
    FUN_0802ab88(2,0xff,iVar2);
    FUN_08006984(0x2f);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ad970);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


