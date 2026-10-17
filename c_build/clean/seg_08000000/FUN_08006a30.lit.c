// undefined FUN_08006a30(void)
// entry 0x8006a30


void FUN_08006a30(uint param_1)

{
  int iVar1;
  char *pcVar2;
  iVar1 = 0x02000a70;
  pcVar2 = (char *)(0x02000a70 + (param_1 & 0xffff) + -0xe0);
  if (*pcVar2 == *(char *)(((param_1 & 0xffff) + 0x18 & 0xff) * 2 + 0x0812930c)) {
    *pcVar2 = '\0';
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  return;
}


