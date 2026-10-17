// undefined FUN_080a67d8(void)
// entry 0x80a67d8


undefined4 FUN_080a67d8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    iVar2 = *(int *)(*DAT_080a67f4 + 0x54);
    iVar3 = *(int *)(*DAT_080a67f4 + 0x58) + DAT_080a67f8;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = *(int *)(param_1 + 0xbc);
  }
  uVar1 = FUN_08128bdc((iVar2 - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                       (iVar3 - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
  iVar2 = DAT_080a6858;
  uVar1 = (uVar1 & 0xffff) >> 8;
  iVar3 = (int)*(short *)((uVar1 + 0x40 & 0xff) * 2 + DAT_080a6858);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  *(int *)(param_1 + 100) = iVar3 >> 3;
  iVar2 = (int)*(short *)(uVar1 * 2 + iVar2);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  *(int *)(param_1 + 0x68) = iVar2 >> 3;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return in_lr;
}


