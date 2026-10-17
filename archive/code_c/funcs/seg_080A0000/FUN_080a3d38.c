// undefined FUN_080a3d38(void)
// entry 0x80a3d38


undefined4 FUN_080a3d38(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xda);
  cVar1 = *pcVar2;
  if (cVar1 != '\0') {
    *pcVar2 = cVar1 + -1;
  }
  FUN_0807f8ec(param_1);
  return in_lr;
}


