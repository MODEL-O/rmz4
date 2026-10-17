// undefined FUN_080d6c48(void)
// entry 0x80d6c48


undefined4 FUN_080d6c48(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x5c) * 0xfa;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0x13) != '\0') &&
     (iVar3 = *(int *)(param_1 + 0x60) + 0x40, *(int *)(param_1 + 0x60) = iVar3, 0x700 < iVar3)) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_080d67cc(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54);
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x2a);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d6cf0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  return in_lr;
}


