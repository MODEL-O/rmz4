// undefined FUN_080f74a0(void)
// entry 0x80f74a0


undefined4 FUN_080f74a0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  FUN_080f7508();
  if (iVar2 != 0) {
    pcVar1 = (char *)(iVar2 + 0xb5);
    *pcVar1 = *pcVar1 + -1;
  }
  FUN_080e954c(param_1);
  return in_lr;
}


