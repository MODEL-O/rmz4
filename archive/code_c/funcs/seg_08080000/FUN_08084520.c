// undefined FUN_08084520(void)
// entry 0x8084520


undefined4 FUN_08084520(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(param_1 + 0x54,DAT_08084544,0,bVar2);
  iVar3 = param_1 + 0x54;
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(iVar3,DAT_08084578,0,bVar2);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(iVar3,DAT_080845a0,0,bVar2);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(iVar3,DAT_080845c8,0,bVar2);
  FUN_080d0c88(1,iVar3);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    FUN_080d0c88(2,iVar3);
    FUN_080d0c88(2,iVar3);
  }
  else {
    FUN_080d0c88(2,iVar3);
    FUN_080d0c88(2,iVar3);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  FUN_08002b10(0x2a);
  FUN_0802ab88(4,0x12,iVar3);
  if (*(ushort *)(DAT_08084658 + 0xc) <= DAT_0808465c) {
    *(ushort *)(DAT_08084658 + 0xc) = *(ushort *)(DAT_08084658 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,iVar3);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08084660);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


