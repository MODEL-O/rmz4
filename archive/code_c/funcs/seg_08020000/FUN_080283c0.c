// undefined FUN_080283c0(void)
// entry 0x80283c0


longlong FUN_080283c0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint in_lr;
  
  pbVar2 = DAT_0802842c;
  iVar1 = DAT_0802840c;
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    iVar3 = *(int *)(param_1 + 0x10);
    if (*(char *)(DAT_0802840c + 0x18) == '\0') {
      FUN_08006d80();
      FUN_0801f908(iVar1,6);
      *(undefined1 *)(iVar1 + 0x19) = 8;
      *(undefined2 *)(iVar1 + 0x22) = 0;
    }
    *(int *)(iVar1 + 0x48) = iVar3 + 0x54;
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    pbVar2 = DAT_08028410;
    *DAT_08028410 = *DAT_08028410 & 0x7f;
    pbVar2[1] = 0;
  }
  else {
    *DAT_0802842c = *DAT_0802842c & 0x7f;
    pbVar2[1] = 0;
  }
  return (ulonglong)in_lr << 0x20;
}


