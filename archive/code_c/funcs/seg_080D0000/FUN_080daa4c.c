// undefined FUN_080daa4c(void)
// entry 0x80daa4c


undefined4 FUN_080daa4c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(char *)(param_1 + 0x73) == '\x03') ||
     (uVar2 = FUN_0801fb14(DAT_080daab8,param_1 + 0x54), 0x1800 < uVar2)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080daabc);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


