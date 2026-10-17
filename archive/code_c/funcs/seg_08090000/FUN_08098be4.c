// undefined FUN_08098be4(void)
// entry 0x8098be4


undefined4 FUN_08098be4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar1 = DAT_08098c7c;
  iVar3 = param_1 + 0x54;
  FUN_080d4c8c(iVar3,DAT_08098c7c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar3,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar3,iVar1 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d0c88(1,iVar3);
  FUN_08002b10(0x2a);
  FUN_0802ab88(3,0x24,iVar3);
  if (*(ushort *)(DAT_08098c80 + 0xc) <= DAT_08098c84) {
    *(ushort *)(DAT_08098c80 + 0xc) = *(ushort *)(DAT_08098c80 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,iVar3);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08098c88);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


