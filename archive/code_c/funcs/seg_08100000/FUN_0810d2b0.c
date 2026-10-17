// undefined FUN_0810d2b0(void)
// entry 0x810d2b0


undefined4 FUN_0810d2b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = (uint)(*(ushort *)(param_1 + 0x78) >> 8) * 2;
    *(undefined2 *)(iVar1 + DAT_0810d32c) = *(undefined2 *)(param_1 + 0x7a);
    iVar3 = DAT_0810d330;
  }
  else {
    iVar1 = (uint)(*(ushort *)(param_1 + 0x78) >> 8) * 2;
    *(undefined2 *)(iVar1 + DAT_0810d2d4) = *(undefined2 *)(param_1 + 0x7a);
    iVar3 = DAT_0810d2d8;
  }
  *(ushort *)(iVar1 + iVar3) = (ushort)*(byte *)(param_1 + 0x7e);
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_08002624();
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810d334);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


