// undefined FUN_0800243c(void)
// entry 0x800243c


void FUN_0800243c(void)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  iVar2 = 0xf;
  psVar1 = DAT_08002460;
  psVar3 = DAT_08002460;
  do {
    if (*psVar1 != 0) {
      psVar3[0x18] = 1;
    }
    psVar3 = psVar3 + 10;
    psVar1 = psVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}


