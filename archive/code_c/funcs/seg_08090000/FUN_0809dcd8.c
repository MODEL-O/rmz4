// undefined FUN_0809dcd8(void)
// entry 0x809dcd8


undefined4 FUN_0809dcd8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0809dd30);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_0809e124(param_1);
  if (cVar1 != '\x01') {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if ((iVar2 < *(int *)(param_1 + 0xb4)) || (cVar1 = FUN_0809ded4(param_1), cVar1 != '\0')) {
        FUN_0809e1bc(param_1);
      }
    }
    else if ((*(int *)(param_1 + 0xb8) < iVar2) || (cVar1 = FUN_0809ded4(param_1), cVar1 != '\0')) {
      FUN_0809e1bc(param_1);
    }
  }
  return in_lr;
}


