// undefined FUN_080e8ee0(void)
// entry 0x80e8ee0


undefined4 FUN_080e8ee0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080e8f18;
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((iVar3 != 0) && (*(byte *)(iVar3 + 0xc) < 2)) {
    piVar2 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_080e8f18);
    *(undefined4 *)(iVar3 + 0xc) = 2;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)((uint)*(byte *)(param_1 + 9) * 4 + iVar1) + 0x10);
  return in_lr;
}


