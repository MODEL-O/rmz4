// pool ptr loaded before counter init -> ldr r5 before movs r4
void FUN_08001390(int);

void FUN_08001294(void)
{
  char *pcVar2 = (char *)0x03002a68;
  int iVar1 = 0;
  do {
    if (*pcVar2 != '\x01') {
      FUN_08001390(iVar1);
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x18;
  } while (iVar1 < 3);
}
