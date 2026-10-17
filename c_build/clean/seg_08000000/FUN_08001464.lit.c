// undefined FUN_08001464(void)
// entry 0x8001464


void FUN_08001464(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  iVar1 = 0x02000760;
  iVar4 = 0;
  iVar3 = 1;
  do {
    iVar2 = iVar4 + iVar1;
    FUN_0800153c(iVar2);
    *(undefined1 *)(iVar2 + 0x14) = 0x18;
    *(undefined1 *)(iVar2 + 0x15) = 4;
    iVar4 = iVar4 + 0x18;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}


