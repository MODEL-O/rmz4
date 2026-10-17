// undefined FUN_08013f8c(void)
// entry 0x8013f8c


undefined4 FUN_08013f8c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08013fe8;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar3 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_08013fe8) = (ushort)uVar3 | 0x44;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    if ((*(byte *)(DAT_08013fec + DAT_08013ff0) & 0xf) == 3) {
      FUN_08128be0(*DAT_08013ff4 + DAT_08013ff8,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      FUN_08128be0(*DAT_08014030 + DAT_08014034,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  return in_lr;
}


