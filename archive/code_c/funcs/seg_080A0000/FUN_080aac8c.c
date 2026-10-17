// undefined FUN_080aac8c(void)
// entry 0x80aac8c


undefined4 FUN_080aac8c(int param_1)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  byte abStack_14 [4];
  
  FUN_08129258(abStack_14,DAT_080aace0,2);
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x12);
  }
  if ((*(byte *)(iVar3 + 0xc) < 2) && ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    if (*(char *)(iVar3 + 200) == '\0') {
      if (*(char *)(param_1 + 0xb8) != '\0') {
        psVar2 = (short *)(param_1 + 0xb4);
        if (0 < *psVar2) {
          *psVar2 = *psVar2 + -1;
        }
      }
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080aad48));
    }
    else {
      FUN_08005784(param_1 + 0x74,(uint)abStack_14[*(byte *)(param_1 + 0xb9)] * 0x18 + DAT_080aad10)
      ;
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080aace4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080ab580(param_1);
  }
  return in_lr;
}


