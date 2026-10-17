// undefined FUN_080d3078(void)
// entry 0x80d3078


undefined4 FUN_080d3078(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  uVar1 = *(ushort *)(param_1 + 0x50);
  if (uVar1 <= DAT_080d30c4) {
    *(ushort *)(param_1 + 0x50) = uVar1 + 4;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 4;
  }
  if (*(char *)(iVar3 + 0xc) == '\x04') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d30c8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}


