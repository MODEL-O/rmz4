// undefined FUN_080069f4(void)
// entry 0x80069f4


void FUN_080069f4(uint param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  iVar1 = 0x02000a70;
  pcVar3 = (char *)(0x02000a70 + (param_1 & 0xffff) + -0xe0);
  pcVar2 = (char *)(((param_1 & 0xffff) + 0x18 & 0xff) * 2 + 0x0812930c);
  if (*pcVar3 != *pcVar2) {
    *pcVar3 = (char)*(undefined2 *)pcVar2;
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  return;
}


