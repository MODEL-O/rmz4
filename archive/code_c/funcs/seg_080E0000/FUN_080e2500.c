// undefined FUN_080e2500(void)
// entry 0x80e2500


undefined4 FUN_080e2500(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if ((byte)(*(char *)(param_1 + 0x11) - 3U) < 2) {
    iVar3 = iVar3 + 0x1000;
  }
  sVar1 = FUN_08007c7c(iVar4,iVar3);
  if (sVar1 != 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e2558);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


