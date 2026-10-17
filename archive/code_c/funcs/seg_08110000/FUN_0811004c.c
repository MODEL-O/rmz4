// undefined FUN_0811004c(void)
// entry 0x811004c


undefined4 FUN_0811004c(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  psVar2 = (short *)FUN_08000a70(0x140);
  iVar4 = DAT_081100c8;
  if (psVar2 != (short *)0x0) {
    *(short **)(DAT_081100c8 + 400) = psVar2;
    *(undefined4 *)(iVar4 + 0x194) = DAT_081100cc;
    *(undefined4 *)(iVar4 + 0x198) = DAT_081100d0;
    sVar1 = (short)((*(short *)((param_1 * 0x4000000 + 0x40000000U >> 0x17) + DAT_081100d4) + 0x100)
                    * 0xf >> 5);
    *psVar2 = -sVar1;
    psVar2[1] = sVar1;
    iVar4 = 0x9c;
    psVar3 = psVar2;
    do {
      psVar3 = psVar3 + 2;
      *psVar3 = *psVar2;
      iVar4 = iVar4 + -2;
    } while (-1 < iVar4);
    psVar3 = psVar2 + 3;
    iVar4 = 0x9c;
    do {
      *psVar3 = psVar2[1];
      psVar3 = psVar3 + 2;
      iVar4 = iVar4 + -2;
    } while (-1 < iVar4);
  }
  return in_lr;
}


