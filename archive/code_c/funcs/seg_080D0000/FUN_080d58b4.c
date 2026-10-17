// undefined FUN_080d58b4(void)
// entry 0x80d58b4


undefined4 FUN_080d58b4(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  else {
    pbVar4 = (byte *)(param_1 + 0x7d);
    *(ushort *)(param_1 + 0x7e) = (short)DAT_080d5910 + (ushort)*pbVar4;
    bVar1 = *pbVar4;
    *pbVar4 = bVar1 - 1;
    if ((byte)(bVar1 - 1) == 0) {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d5914);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    }
  }
  return in_lr;
}


