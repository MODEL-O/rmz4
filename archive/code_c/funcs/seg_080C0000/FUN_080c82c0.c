// undefined FUN_080c82c0(void)
// entry 0x80c82c0


undefined4 FUN_080c82c0(int param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    FUN_08002b10(0x3f);
  }
  if (iVar3 != 0) {
    pcVar2 = (char *)(iVar3 + 0xb4);
    *pcVar2 = *pcVar2 + -1;
  }
  FUN_080de82c(param_1 + 0x54,0,0);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8324);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


