// undefined FUN_080d71a4(void)
// entry 0x80d71a4


undefined4 FUN_080d71a4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = uVar2 | 1;
  }
  FUN_080d4c8c(param_1 + 0x54,DAT_080d71cc,0,uVar2);
  iVar3 = param_1 + 0x54;
  uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = uVar2 | 1;
  }
  FUN_080d4c8c(iVar3,DAT_080d7204,0,uVar2);
  FUN_080d0c88(1,iVar3);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    FUN_080d0c88(2,iVar3);
  }
  else {
    FUN_080d0c88(2,iVar3);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d7254);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


