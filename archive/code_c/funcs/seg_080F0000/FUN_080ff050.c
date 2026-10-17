// undefined FUN_080ff050(void)
// entry 0x80ff050


undefined4 FUN_080ff050(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_08002b10(0x1c6);
  iVar1 = DAT_080ff0b0;
  iVar3 = param_1 + 0x54;
  FUN_080d4c8c(iVar3,DAT_080ff0b0,0,0);
  FUN_080d4c8c(iVar3,iVar1 + 0x1c,0,0);
  FUN_080d4c8c(iVar3,iVar1 + 0x38,0,0);
  FUN_080d4c8c(iVar3,iVar1 + 0x54,0,0);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ff0b4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


