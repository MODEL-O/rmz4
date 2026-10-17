// undefined FUN_080e5598(void)
// entry 0x80e5598


undefined4 FUN_080e5598(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  sVar1 = FUN_08007c7c(iVar2,iVar4 + DAT_080e5650);
  if ((sVar1 != 0) || (*(char *)(param_1 + 0x12) == '\0')) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + DAT_080e5654;
      FUN_080d0c88(1,&local_14);
      FUN_080e52b4(param_1 + 0x54,1,2);
      FUN_080e52b4(param_1 + 0x54,1,4);
    }
    if (*(char *)(param_1 + 0x11) == '\x01') {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + DAT_080e5658;
      FUN_080d0c88(2,&local_14);
      FUN_080e52b4(&local_14,1,1);
      FUN_080e52b4(&local_14,1,3);
    }
    FUN_08002b10(0x2a);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e565c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}


