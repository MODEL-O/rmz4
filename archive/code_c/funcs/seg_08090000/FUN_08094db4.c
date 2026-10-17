// undefined FUN_08094db4(void)
// entry 0x8094db4


undefined8 FUN_08094db4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*DAT_08094dd0 + 0x58) + DAT_08094dd4;
  if (iVar2 < *(int *)(param_1 + 0x58) + DAT_08094dd8) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x58) + 0x800 < iVar2) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}


