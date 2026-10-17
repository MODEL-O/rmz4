// undefined FUN_080deb88(void)
// entry 0x80deb88


void FUN_080deb88(int param_1)

{
  int *piVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xb6);
  *pcVar2 = *pcVar2 + -1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080debb0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return;
}


