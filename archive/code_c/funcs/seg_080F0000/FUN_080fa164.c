// undefined FUN_080fa164(void)
// entry 0x80fa164


undefined4 FUN_080fa164(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if ((*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0xb4)) &&
     (*(char *)(DAT_080fa198 + DAT_080fa19c) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    iVar2 = *(int *)(param_1 + 0xb4);
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x58) = iVar2;
    }
  }
  return in_lr;
}


