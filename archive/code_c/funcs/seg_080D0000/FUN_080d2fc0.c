// undefined FUN_080d2fc0(void)
// entry 0x80d2fc0


undefined4 FUN_080d2fc0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar2 = (0xff - *(int *)(param_1 + 100)) * 0x50;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar4 = *(int *)(param_1 + 100) + (iVar2 >> 8);
  *(int *)(param_1 + 100) = iVar4;
  iVar2 = (0xff - *(int *)(param_1 + 0x68)) * 0xc;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (iVar2 >> 8);
  *(short *)(param_1 + 0x50) = (short)iVar4;
  *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x13) + '\x01';
  *(char *)(param_1 + 0x13) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3034);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


