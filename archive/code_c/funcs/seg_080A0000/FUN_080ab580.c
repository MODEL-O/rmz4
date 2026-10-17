// undefined FUN_080ab580(void)
// entry 0x80ab580


undefined4 FUN_080ab580(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xbb);
  if (*pcVar2 != '\0') {
    *pcVar2 = *pcVar2 + -1;
  }
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + DAT_080ab5e4;
  FUN_080d0c88(2,&local_10);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ab5e8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


