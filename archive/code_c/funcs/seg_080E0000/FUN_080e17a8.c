// undefined FUN_080e17a8(void)
// entry 0x80e17a8


undefined4 FUN_080e17a8(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_14 = DAT_080e1820[1];
  local_18 = *DAT_080e1820;
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_18 = *(int *)(param_1 + 0x54) + local_18;
    local_14 = *(int *)(param_1 + 0x58) + local_14;
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    iVar2 = param_1 + 0x54;
    pcVar3 = (char *)(param_1 + 0x75);
    FUN_080e1508(iVar2,*pcVar3 + '\x03',3);
    FUN_080e1508(iVar2,*pcVar3 + '\x03',4);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x2000;
    FUN_080e1508(iVar2,*pcVar3 + '\x03',5);
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    local_18 = local_18 + *(int *)(param_1 + 0x54);
    local_14 = local_14 + *(int *)(param_1 + 0x58);
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    FUN_080e1508(param_1 + 0x54,*(char *)(param_1 + 0x75) + '\x03',2);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080e1868;
  }
  else {
    FUN_080d0c88(3,param_1 + 0x54);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1898);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


