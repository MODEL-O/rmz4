// undefined FUN_080061ec(void)
// entry 0x80061ec


undefined4 FUN_080061ec(int param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uVar4 = param_2 & 0xff;
  bVar2 = *(byte *)(param_1 + 0x3b) | *(byte *)(*(int *)(param_1 + 4) + 9);
  if (((*(int *)DAT_08006220 & 0x80) == 0) && (*(char *)(param_1 + 0x20) == '\0')) {
    if ((bVar2 & 0x80) != 0) {
      uVar4 = (param_2 & 0x7f) << 1;
    }
    if ((bVar2 & 0x20) != 0) {
      uVar4 = uVar4 >> 1;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if ((bVar2 & 2) == 0) {
      iVar3 = *(ushort *)(param_1 + 0x30) - uVar4;
      *(short *)(param_1 + 0x30) = (short)iVar3;
      if (iVar3 * 0x10000 < 1) {
        *(ushort *)(param_1 + 0x30) = bVar2 & 2;
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x200;
      }
      cVar1 = *(char *)(*(int *)(param_1 + 4) + 2);
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *(char *)(param_1 + 0x20) = 'Z';
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


