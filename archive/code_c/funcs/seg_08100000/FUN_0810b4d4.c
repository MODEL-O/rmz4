// undefined FUN_0810b4d4(void)
// entry 0x810b4d4


undefined4 FUN_0810b4d4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (((*(char *)(iVar1 + 2) == '\0') || (*(byte *)(iVar1 + 3) < 3)) ||
     (*(char *)(iVar1 + DAT_0810b4fc) == '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(uint *)(param_1 + 0x58) = (uint)*(byte *)(iVar1 + 0xdd3) * 0x1000 + 0x1800;
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


