// undefined FUN_0801c3f4(void)
// entry 0x801c3f4


undefined4 FUN_0801c3f4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 != 0) {
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_0801c42c);
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar2 != 0) {
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_0801c42c);
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  return in_lr;
}


