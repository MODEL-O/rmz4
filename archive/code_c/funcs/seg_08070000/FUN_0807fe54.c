// undefined FUN_0807fe54(void)
// entry 0x807fe54


undefined4 FUN_0807fe54(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58) + 0x800;
  sVar1 = FUN_08007c7c(iVar3 + 0x400,iVar2);
  if (sVar1 == 0) {
    sVar1 = FUN_08007c7c(iVar3 + DAT_0807fe98,iVar2);
    if (sVar1 == 0) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


