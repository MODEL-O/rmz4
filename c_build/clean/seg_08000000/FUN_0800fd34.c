// undefined FUN_0800fd34(void)
// entry 0x800fd34


void FUN_0800fd34(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  iVar1 = DAT_0800fd8c;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar3 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_0800fd8c) = (ushort)uVar3 | 0x47;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    if ((*(byte *)(DAT_0800fd90 + DAT_0800fd94) & 0xf) == 3) {
      FUN_08128be0(*(int *)DAT_0800fd98 + DAT_0800fd9c,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      FUN_08128be0(*(int *)DAT_0800fdd4 + DAT_0800fdd8,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x10;
  return;
}


