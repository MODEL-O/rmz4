// undefined FUN_080de294(void)
// entry 0x80de294


undefined4 FUN_080de294(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080de2d4;
  iVar3 = param_1 + 0x54;
  FUN_080d4c8c(iVar3,DAT_080de2d4,0,*(byte *)(param_1 + 10) & 0x10);
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080d4c8c(iVar3,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
  }
  else {
    FUN_080d4c8c(iVar3,iVar1 + 0x54,0,*(byte *)(param_1 + 10) & 0x10);
  }
  FUN_080d0c88(1,param_1 + 0x54);
  FUN_08002b10(0x2a);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080de318);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


