// undefined FUN_080ebf6c(void)
// entry 0x80ebf6c


undefined4 FUN_080ebf6c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cc9c(param_1);
  FUN_0801cf00(param_1,0x2600);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x58) >> 0xc;
    iVar1 = iVar2;
    if (iVar2 < 0) {
      iVar1 = iVar2 + 0x1f;
    }
    *(char *)(param_1 + 0x25) = '\x1f' - ((char)iVar2 + (char)(iVar1 >> 5) * -0x20);
  }
  *(byte *)(param_1 + 0x12) = (*(byte *)(param_1 + 0x11) & 3) + 5;
  return in_lr;
}


