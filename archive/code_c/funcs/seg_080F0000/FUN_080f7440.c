// undefined FUN_080f7440(void)
// entry 0x80f7440


undefined4 FUN_080f7440(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xb5);
    *pcVar2 = *pcVar2 + -1;
  }
  FUN_080f7508(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f7478);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


