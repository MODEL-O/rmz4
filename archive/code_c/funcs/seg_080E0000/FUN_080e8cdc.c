// undefined FUN_080e8cdc(void)
// entry 0x80e8cdc


undefined4 FUN_080e8cdc(int param_1)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
  cVar1 = *(char *)(param_1 + 0x13);
  *(char *)(param_1 + 0x13) = cVar1 + '\x04';
  sVar2 = (short)(((int)*(short *)((uint)(byte)(cVar1 + 0x44) * 2 + DAT_080e8d58) + 0x100U & 0xfffff
                  ) >> 4) + 0x100;
  *(short *)(param_1 + 0x50) = sVar2;
  *(short *)(param_1 + 0x52) = sVar2;
  *(ushort *)(param_1 + 0x48) =
       (ushort)DAT_080e8d5c & *(ushort *)(param_1 + 0x48) | *(ushort *)(iVar6 + 0x48) & 0x3ff;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar6 + 0x3c);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(iVar6 + 0x4e);
  bVar3 = *(byte *)(iVar6 + 10) >> 4;
  bVar5 = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(byte *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  if ((1 < *(byte *)(iVar6 + 0xc)) || (*(char *)(param_1 + 0x11) != '\0')) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e8db4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080e8db8(param_1);
  }
  return in_lr;
}


