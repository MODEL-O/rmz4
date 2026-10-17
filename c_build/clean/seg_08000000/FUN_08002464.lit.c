// undefined FUN_08002464(void)
// entry 0x8002464


void FUN_08002464(void)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  psVar2 = 0x020008a0 + 0x18;
  iVar3 = 0xf;
  psVar1 = 0x020008a0;
  do {
    if (*psVar1 != 0) {
      if (*psVar2 == 0) {
        *psVar1 = 0;
      }
      else {
        *psVar2 = 0;
      }
    }
    psVar1 = psVar1 + 1;
    psVar2 = psVar2 + 10;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}


