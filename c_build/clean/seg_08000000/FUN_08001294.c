// undefined FUN_08001294(void)
// entry 0x8001294


void FUN_08001294(void)

{
  int iVar1;
  char *pcVar2;
  iVar1 = 0;
  pcVar2 = DAT_080012b4;
  do {
    if (*pcVar2 != '\x01') {
      FUN_08001390(iVar1);
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x18;
  } while (iVar1 < 3);
  return;
}


