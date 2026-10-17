// undefined FUN_0800fd34(void)
// entry 0x800fd34


void FUN_0800fd34(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  iVar1 = 0x02000a04;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar3 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + 0x02000a04) = (ushort)uVar3 | 0x47;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    if ((*(byte *)(0x02000ab0 + 0x0002c010) & 0xf) == 3) {
      FUN_08128be0((*(int *)0x08b2c180) + 0x08b2c188,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      FUN_08128be0((*(int *)0x08b2c0f8) + 0x08b2c100,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x10;
  return;
}


