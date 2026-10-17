// undefined FUN_080aa42c(void)
// entry 0x80aa42c


undefined4 FUN_080aa42c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  *(undefined1 *)(param_1 + 0xb4) = 0;
  iVar2 = DAT_080aa524;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      local_18 = *(int *)(param_1 + 0x54) + 0x800;
      local_14 = *(int *)(param_1 + 0x58) + DAT_080aa524;
      FUN_080d0c88(1,&local_18);
      local_18 = *(int *)(param_1 + 0x54) + iVar2;
      local_14 = *(int *)(param_1 + 0x58) + DAT_080aa528;
      FUN_080d0c88(1,&local_18);
      FUN_08002b10(0x166);
      iVar2 = param_1 + 0x54;
      FUN_080e2914(iVar2,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e2914(iVar2,DAT_080aa52c,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e2914(iVar2,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      local_18 = *(int *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + DAT_080aa47c;
      if (*(int *)(*DAT_080aa480 + 0x54) - local_18 >> 8 < 1) {
        FUN_080d0dc4(0,&local_18,0x200,0);
      }
      else {
        FUN_080d0dc4(0,&local_18,0x200,1);
      }
      FUN_080e2914(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e2914(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  else {
    FUN_080e2914(param_1 + 0x54,DAT_080aa5ac,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  iVar2 = param_1 + 0x54;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_080e2914(iVar2,DAT_080aa5b0,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e2914(iVar2,0x106,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(ushort *)(DAT_080aa5b4 + 0xc) <= DAT_080aa5b8) {
    *(ushort *)(DAT_080aa5b4 + 0xc) = *(ushort *)(DAT_080aa5b4 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,iVar2);
  FUN_0802ab88(4,0x10,iVar2);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080aa5bc);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


