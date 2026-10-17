// undefined FUN_08027ce8(void)
// entry 0x8027ce8


undefined4 FUN_08027ce8(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  puVar5 = (ushort *)(param_1 + 0x14c);
  uVar1 = *puVar5;
  if ((DAT_08027d58 & uVar1) != 0) {
    iVar4 = 8 - ((int)((uint)*(ushort *)
                              (((uint)uVar1 * 0x4000000 + 0x40000000 >> 0x17) + DAT_08027d5c) <<
                      0x10) >> 0x15);
    *puVar5 = uVar1 & 0xff00 | uVar1 + 1 & 0xff;
    iVar3 = DAT_08027d60;
    *(char *)(DAT_08027d60 + 0x400) = (char)(iVar4 >> 1) + ' ';
    cVar2 = ' ' - (char)iVar4;
    *(char *)(iVar3 + 0x401) = cVar2;
    *(char *)(iVar3 + DAT_08027d64) = cVar2;
    if (((uVar1 & 0x4000) != 0) && (iVar4 == 0)) {
      *puVar5 = 0;
    }
  }
  return in_lr;
}


