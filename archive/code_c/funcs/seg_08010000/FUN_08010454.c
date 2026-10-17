// undefined FUN_08010454(void)
// entry 0x8010454


undefined4 FUN_08010454(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080104ac;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar3 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_080104ac) = (ushort)uVar3 | 0x47;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    if ((*(byte *)(DAT_080104b0 + DAT_080104b4) & 0xf) == 3) {
      FUN_08128be0(*DAT_080104b8 + DAT_080104bc,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      FUN_08128be0(*DAT_080104f4 + DAT_080104f8,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return in_lr;
}


