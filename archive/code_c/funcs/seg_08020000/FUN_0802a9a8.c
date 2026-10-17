// undefined FUN_0802a9a8(void)
// entry 0x802a9a8


undefined4 FUN_0802a9a8(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(DAT_0802a9e8 + 0x19) == '\0') {
    iVar3 = 4;
    psVar2 = (short *)FUN_08000a70(8);
    if (psVar2 == (short *)0x0) {
      return in_lr;
    }
    sVar1 = (short)DAT_0802aa3c;
    *psVar2 = sVar1;
    psVar2[1] = sVar1 + 1;
    psVar2[2] = sVar1 + 2;
    psVar2[3] = sVar1 + 3;
  }
  else {
    iVar3 = 6;
    psVar2 = (short *)FUN_08000a70(0xc);
    if (psVar2 == (short *)0x0) {
      return in_lr;
    }
    sVar1 = (short)DAT_0802a9ec;
    *psVar2 = sVar1;
    psVar2[1] = sVar1 + 1;
    psVar2[2] = sVar1 + 2;
    psVar2[3] = sVar1 + 3;
    psVar2[4] = sVar1 + 4;
    psVar2[5] = sVar1 + 5;
  }
  FUN_08001f1c(psVar2,(*DAT_0802aa40 & 0x1f00) * 8 + (0x112 - iVar3) * 2,iVar3 << 1);
  return in_lr;
}


