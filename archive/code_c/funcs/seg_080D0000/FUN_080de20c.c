// undefined FUN_080de20c(void)
// entry 0x80de20c


undefined4 FUN_080de20c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080de274;
  iVar2 = param_1 + 0x54;
  FUN_080d4c8c(iVar2,DAT_080de274,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar2,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d0c88(1,iVar2);
  FUN_08002b10(0x2a);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080de278);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


