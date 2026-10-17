// undefined FUN_080e3540(void)
// entry 0x80e3540


undefined4 FUN_080e3540(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  sVar2 = FUN_08007c7c(iVar3,iVar5 + DAT_080e35b4);
  if ((sVar2 != 0) ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + DAT_080e35b8;
    FUN_080d0c88(1,&local_14);
    FUN_08002b10(0x2a);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e35bc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  return in_lr;
}


